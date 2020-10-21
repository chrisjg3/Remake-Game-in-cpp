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
			println!("_________________________________________________________\nPlayer Input: "); // Just for appeal of interface
			let mut command = String::new(); // Player input var
			command.clear();

			io::stdin().read_line(&mut command).expect("Not a valid option"); // Read in player input

			println!("Read Player Input"); // DEBUG

			let mut direct: char = 'a';
			let mut num: u8 = 0;
			

			for(i, c) in command.chars().enumerate()
			{
				if i == 0  { direct = c; } 
				num += 1;
			}
			if num != 0 { num -= 1; } // Counts the enter, so this subtracts that enter
			println!("In test: char is {} and num is {}", direct, num);
			(direct, num)
		}


		pub fn check_events(_direct: char, _times_move: u8)
		{
			// Doesn't do anything yet 000---------------
			println!("Checked Events!");

			// Notes: 
				// Collisions included here
		}


		pub fn update_interface()
		{
			// Doesn't do anything yet 000---------------
			println!("Updated the Map!");
		}



	}
