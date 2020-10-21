// use std::io;
mod game_system;
mod entity_structs;

use entity_structs::inventory;


fn main() {

    loop
    {
        let (direct, times_move) = game_system::GameStr::read_player();
        game_system::GameStr::check_events(direct, times_move);
        game_system::GameStr::update_interface();
    }
    
    // inventory::Entity::new();

}
