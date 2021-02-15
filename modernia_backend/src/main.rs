// Rust net/socket components
use std::net::{TcpListener, TcpStream};
use std::io::Write;

// for thread sleeping
use std::time::Duration;
use std::thread;

// random number gernation
use rand::Rng;

fn main() {
    
    let listener = TcpListener::bind("127.0.0.1:50000").expect("Not able to connect to port!");

    let (mut socket, _addr) = listener.accept().unwrap();

    let mut rng = rand::thread_rng();

    // thread::sleep(Duration::from_millis(1000));
    println!("generating random u8");

    let n1: u8 = rng.gen_range(0..20);


    thread::sleep(Duration::from_millis(1000));

    println!("generating second random u8");

    let n2: u8 = rng.gen_range(11..31);


    socket.write(&[n1, n2]).unwrap();


    println!("Complete");

}
