// Game struct
use std::io;

pub struct GameStr
{
	// Save: (some sort of file type, later features)
}


impl GameStr
{

	pub fn read_player() -> (char, u8)
	{
		let mut command = String::new(); // Player input var

		io::stdin().read_line(&mut command).expect("Not a valid option"); // Read in player input

		println!("Read Player Input"); // DEBUG

		let mut direct: char = 'a';
		let mut num: u8 = 0;

		for c in command.chars()
		{
			direct = c; // Probably need to change as it is reassigned each loop, but okay for now
			num += 1;
		}

		println!("In test: char is {} and num is {}", direct, num);
		(direct, num)
	}


	pub fn check_events()
	{
		// Doesn't do anything yet 000---------------
		println!("Checked Events!");

		// Notes: 
			// Collisions included here
	}


	pub fn update_map()
	{
		// Doesn't do anything yet 000---------------
		println!("Updated the Map!");
	}



}