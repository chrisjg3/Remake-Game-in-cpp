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

        em.send_to_front(em.start());

        loop
        {
            let data = user_input(); // Recieved from Javascript
            
            em.send_to_front(em.events(data));
            em.turn_end();
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






