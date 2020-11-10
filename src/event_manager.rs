// mod super::map;

use super::map::Map;

pub struct EventManager
{
    turn: u32,
    map: Map,
}

impl EventManager
{

    pub fn events(&self, data: (u8, u8))
    {
        println!("SUCCESSFULLY PASSED!");
    }

    pub fn new() -> EventManager
    {
        EventManager
        {
            turn: 0,
            map: Map::new(),
        }
    }

    pub fn start(&mut self)
    {
        // Creates Start Event
    }

    pub fn user_to_map(&mut self) // takes user input or ai input and updates the world
    {

    }

    pub fn display(&self)
    {

    }

    pub fn turn_end(&mut self)
    {
        self.turn += 1;
    }



}