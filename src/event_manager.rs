// mod super::map;

use super::map::Map;

pub struct EventManager
{
    turn: u32,
    map: Map,
}

impl EventManager
{

    pub fn events(&self, data: (u8, u8)) -> [u8; 5]
    {
        println!("SUCCESSFULLY PASSED!");
        [0, 0, 0, 0, 0]
    }

    pub fn new() -> EventManager
    {
        EventManager
        {
            turn: 0,
            map: Map::new(0),
        }
    }

    pub fn start(&self) -> [u8; 5] // need more data on intial start
    {
        // returns an array that encodes the actions taken, to be sent to frontend


        [0, 0, 0, 0, 0]
    }

    pub fn send_to_front(&self, arr: [u8; 5])
    {
        // Sending to front end is really just sending 3 things: 1 hexes that were updated, 
        // what they were changed to, and any global player stats that were changed


    }

    pub fn turn_end(&mut self)
    {
        self.turn += 1;
    }



}