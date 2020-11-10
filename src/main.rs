mod event_manager;
mod map;


fn main() {

    
 

}



pub struct GameState
{

}

impl GameState
{
    fn set_up() -> event_manager::EventManager
    {
        event_manager::EventManager::new()

    }


    fn begin()
    {
        let mut em = GameState::set_up();

        em.start();

        loop
        {
            let data = user_input();

            em.events(data);
            break;
        }

    }
}



// Something for coding user input into different actions
// Idea is a tuple of some sort, maybe with enums maybe just a list of numbers.
fn user_input() -> (u8, u8)
{
    // read from file that is created by Javascript front end
    (0,0)
}






