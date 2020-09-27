use std::io;
mod gamestruct;

fn main() {
    // let game: gamestruct::GameStr;

    loop 
    {
        let (_direct, _times_move) = gamestruct::GameStr::read_player();
        gamestruct::GameStr::check_events();
        gamestruct::GameStr::update_map();
    }
    
}
