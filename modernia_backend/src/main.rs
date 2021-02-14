// Rust net/socket components
use std::net::{TcpListener, TcpStream};
use std::io::Write;

// for thread sleeping
use std::time::Duration;
use std::thread;

fn main() {
    
    let listener = TcpListener::bind("127.0.0.1:50000").expect("Not able to connect to port!");

    let (mut socket, _addr) = listener.accept().unwrap();


    
    // thread::sleep(Duration::from_millis(1000));
    println!("about to send 9");
    socket.write(&[9, 34, 52, 18]).unwrap();


    println!("Complete");

}
