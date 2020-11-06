// Game struct
use std::io;
use std::fs::File;
// mod map_backend;

pub struct GameStr
	{  }


	impl GameStr
	{

		pub fn load_game() -> File
		{
			println!("Loading Game.....\n");

			let save = File::open("save.txt");

			let save = match save 
			{
				Ok(file) => file,
				Err(error) => match error.kind()
				{
					NotFound => match File::create("save.txt")
					{
						Ok(file) => file,
						Err(error) => panic!("Error when creating file when no save found!"),
					}
					other_error => panic!("Save file found, but didn't open!"),
				},
			};

			save
		}





		pub fn read_player() -> (char, u8)
		{
			println!("_________________________________________________________\nPlayer Input: "); // Just for appeal of interface
			let mut command = String::new(); // Player input var
			command.clear();

			io::stdin().read_line(&mut command).expect("Not a valid option"); // Expect unwraps the error return and calls panic! if dones't work

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
