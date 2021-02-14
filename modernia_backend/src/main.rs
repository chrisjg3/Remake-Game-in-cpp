// Rust net/socket components
use std::net::{TcpListener, TcpStream};
use std::io::Write;

// for thread sleeping
use std::time::Duration;
use std::thread;

fn main() {
    
    let listener = TcpListener::bind("127.0.0.1:50000").expect("Not able to connect to port!");

    let (mut socket, _addr) = listener.accept().unwrap();

    let mut j = 0;
    
    while j < 4 
    {
        println!("about to send");
        socket.write(&[9, 19, 4]).unwrap();
        println!("Sent!");
        thread::sleep(Duration::from_millis(4000));
        j += 1;
    }

    println!("Complete");

}
