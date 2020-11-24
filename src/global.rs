// For gloabl player stats


pub struct Global
{
    cash: u32,
    research: u32,
    pub upgradeReached: bool,
    pub hexes_controlled: u8, // for winning conditions
    pub nat: Nation,
}

impl Global
{
    pub fn new(nation: u8) -> Global
    {
        Global
        {
            cash: 0,
            research: 0,
            upgradeReached: false,
            hexes_controlled: 1,
            nat: match nation
            {
                0 => Aztec,
                1 => China,
                2 => France,
                3 => Greece,
                4 => Mali,
                _ => panic!("Invalid Nation Given to Global!"),
            }
        }
    }
    // fn that dictates which player loses or gains what in their cash or research or any other thing

    pub fn cash_change(&mut self, change: u32)
    {
        self.cash += change;
    }

    pub fn research_change(&mut self, change: u32)
    {
        self.research += change;
    }

    pub fn enough_to_buy(&self, limit: u32) -> bool
    {
        if self.cash > limit
        {
            return true;
        }
        false
    }

    // fn for turn ending causing each nation to get cash and research
}


enum Nation
{
    Aztec,
    China,
    France,
    Greece,
    Mali,
    Unclaimed,
}