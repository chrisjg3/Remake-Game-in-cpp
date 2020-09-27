// use std::io;
mod gamestruct;

fn main() {
    // let game: gamestruct::GameStr;

    loop 
    {
        let (direct, times_move) = gamestruct::GameStr::read_player();
        gamestruct::GameStr::check_events(direct, times_move);
        gamestruct::GameStr::update_interface();
    }
    
}
