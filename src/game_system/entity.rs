use std::io;


pub struct Entity
{
	name: String,
	health: i8,
	skills: [i8; 3], // Skills: Strength, Sneak, Charisma
}

impl Entity 
{
	pub fn create_player() -> Entity
	{
		println!("Beginning Player Creator...");
		println!("Input Name: ");

		let mut name: String = String::from("");

		io::stdin().read_line(&mut name).expect("Failed to Read Line");


		Entity
		{
			name,
			health: 20,
			skills: [2, 2, 2]

		}
	}

	pub fn player_damaged(&mut self, damage: i8)
	{
		self.health -= damage;
	}

	pub fn player_healed(&mut self, heal: i8)
	{
		self.health += heal;
	}


}




