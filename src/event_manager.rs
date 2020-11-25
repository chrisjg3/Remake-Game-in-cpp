// mod super::map;
use super::map;
use super::global::Global;
use rand::Rng;


// NOTES FOR ITNERNALS
// Building price set at 40 right now


pub struct EventManager
{
    turn: u32,
    map: map::Map,
    globe: [Global; 3]
}

impl EventManager
{

    pub fn update(&mut self, player: usize, data: [u8; 5]) 
    {
        let building_price = 40;
        let signal_not_moving = 20;
        let no_one_num = 3;

        // for buying first
        if data[0] != 0 && self.globe[player].enough_to_buy(building_price)
        {
            // see building type and contrcut it
            let build_type = usize::from(data[0]);
            let hex_num = usize::from(data[1]);

            self.map.grid[hex_num].buildings[build_type - 1] += 1; // -1 since the type is off by one from data

            // pay for building 
            self.globe.cash_change(-40);
        }

        if data[2] < signal_not_moving && self.map.grid[ usize::from(data[3]) ].soldiers >= data[4] // player chose move and has enough soldiers
        {
            // data[2] where going
            // data[3] from where
            // data[4] how many

            // then check if going is attack or not
            // run attack or don't, then update hex numbers,
            let &mut origin = &mut self.map.grid[ usize::from( data[3] ) ];
            let &mut moving_to = &mut self.map.grid[ usize::from( data[2] ) ];
            let mut num = data[4];
            if origin.soldier_owner == u8::from(player)
            {
                origin.soldiers = origin.soldiers - num;
                if origin.soldiers == 0
                {
                    origin.soldier_owner = no_one_num;
                }
                // if attacking
                if moving_to.soldier_owner != u8::from(player) && moving_to.soldier_owner != no_one_num
                {
                    // how attacking works here --------------------------------------------------------------------------------
                    // make sure to update num and moving_to hex soldier number ------------------------------------------------
                    let mut attack_success = true;
                    // add if hex or city is captured here! -----------------------------------------------------------------
                    if attack_success
                    {
                        moving_to.soldiers = num;
                        moving_to.soldier_owner = u8::from(player);
                    }
                    else
                    {
                        origin.soldiers += num;
                        origin.soldier_owner = u8::from(player);
                    }
                }
                // just moving to own soldiers or empty hex
                else
                {
                    moving_to.soldier_owner = u8::from(player);
                    moving_to.soldiers += num;
                }
            }

            // remember to update hexes_controlled ---------------------------------------------------------
            // maybe have capture hex or claim hex be a seperate move and that ++ ----------------------------
        }

        if data[4] == 1 && self.globe[player].upgradeReached
        {
            // implement this wayyyy later -------------------------------------------------------
            self.globe[player].upgradeReached = false;
        }
        
    }

    pub fn calc_ai(&self, player: u8) -> [u8; 5]
    {
        // returns array for ai moves to be passed to update
        [0, 0, 0, 0, 0]
    }

    pub fn new(seed: u8, player_nation: u8) -> EventManager
    {
        let mut num1: u8 = rand::thread_rng().gen_range(0, 4);
        while num1 == player_nation
        {
            num1 = rand::thread_rng().gen_range(0, 4);
        }
        let mut num2: u8 =  rand::thread_rng().gen_range(0, 4);
        while num2 == num1 || num2 == player_nation
        {
            num2 =  rand::thread_rng().gen_range(0, 4);
        }

        // Socket send start up information here -------------------------------------------------

        EventManager
        {
            turn: 0,
            map: map::Map::new(seed),
            globe: [Global::new(player_nation), Global::new(num1),
                    Global::new(num2)],
        }
    }


    pub fn start(&mut self)
    {
        self.map.grid[3].city = true;
        self.map.grid[3].owner = match self.globe[0].nat
        {
            Aztec => Aztec,
            China => China,
            France => France,
            Greece => Greece,
            Mali => Mali,
            Unclaimed => panic!("Invalid Nation in PLayer 1 Start!"),
        }
    }






    pub fn turn_end(&mut self) -> bool
    {
        // for all three players, calculate cash and science and change level up if reached

        // checks win condtions

        self.turn += 1;
        true
    }



}