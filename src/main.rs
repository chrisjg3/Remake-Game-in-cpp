
mod gamestruct;

fn main() {
    // let game: gamestruct::GameStr;

    gamestruct::GameStr::read_player();
    gamestruct::GameStr::check_events();
    gamestruct::GameStr::update_map();
    
}
