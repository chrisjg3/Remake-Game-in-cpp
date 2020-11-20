// mod super::map;
use super::map::Map;
use super::global::Global;


// NOTES FOR ITNERNALS
// Building price set at 40 right now


pub struct EventManager
{
    turn: u32,
    map: Map,
    globe: [Global; 3]
}

impl EventManager
{

    pub fn update(&mut self, player: usize, data: [u8; 5]) 
    {
        let building_price = 40;
        let signal_not_moving = 20;

        // for buying first
        if data[0] != 0 && self.globe[player].enough_to_buy(building_price)
        {
            // see building type and contrcut it
            let build_type = data[0];
            let hex_num = data[1];
            if build_type == 1 
            {
                

            }

            // pay for building 

        }

        if data[2] < signal_not_moving
        {

            // remember to update hexes_controlled 
        }

        if data[4] == 1 && self.globe[player].upgradeReached
        {


            self.globe[player].upgradeReached = false;
        }
        
    }

    pub fn calc_ai(&self, player: u8) -> [u8; 5]
    {
        // returns array for ai moves to be passed to update
        [0, 0, 0, 0, 0]
    }

    pub fn new() -> EventManager
    {
        EventManager
        {
            turn: 0,
            map: Map::new(0),
            globe: [Global::new(), Global::new(), Global::new()],
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