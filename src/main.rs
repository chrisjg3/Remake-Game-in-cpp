// use std::io;
mod gamestruct;
// mod entity_structs;

// use entity_structs::inventory;

mod game_system;

// To-Do Ideas
/*
Use sockets, have java client to connct and do interface, and rust backend? 
Might be cool
*/


fn main() {


	// load game
	let save = gamestruct::GameStr::load_game();

	// Loads First Map
	gamestruct::GameStr::update_interface();

	let map = game_system::mapstruct::Map::new();

	println!("{}", map.layout);

	// actual game loop
    loop
    {
        let (direct, times_move) = gamestruct::GameStr::read_player();
        gamestruct::GameStr::check_events(direct, times_move);
        gamestruct::GameStr::update_interface();
    }
    
    // inventory::Entity::new();

}
