mod event_manager;
mod map;
mod global;


fn main() {

    
 

}



pub struct GameState
{

}

impl GameState
{
    fn set_up() -> event_manager::EventManager
    {
        // front end sends player nation choice
        // also sends seed
        let chosen_seed: u8 = 0;
        let player_nation: u8 = 0;
        //

        event_manager::EventManager::new(chosen_seed, player_nation)
    }


    fn begin()
    {
        let mut em = GameState::set_up();
        em.start();

        let mut done = false;

        while !done
        {
            let data = user_input(); // Recieved from Javascript
            
            em.update(0, data);

            let ai_data = em.calc_ai(1);

            em.update(1, ai_data);

            let ai_data = em.calc_ai(2);

            em.update(2, ai_data);

            done = em.turn_end();
        }

    }
}



// Something for coding user input into different actions
// Idea is a tuple of some sort, maybe with enums maybe just a list of numbers.
fn user_input() -> [u8; 5]
{
    // read from file that is created by Javascript front end
    [0, 0, 0, 0, 0]
}






