// use std::io;
mod gamestruct;
mod entity_structs;

use entity_structs::inventory;


fn main() {

    loop
    {
        let (direct, times_move) = gamestruct::GameStr::read_player();
        gamestruct::GameStr::check_events(direct, times_move);
        gamestruct::GameStr::update_interface();
    }
    
    // inventory::Entity::new();

}
