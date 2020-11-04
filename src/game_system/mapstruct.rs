
// This implementation is for testing, it will change so that maps are actually loaded efficiently
// But for now I think I want to just have one map that I can interact with


pub struct Map
{
	pub layout: String
}

impl Map 
{
	pub fn new() -> Map
	{
		Map 
		{
			layout: String::from("\n
									xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n
									xxxxxxxxx..........xxxxxxxxxxxxxxxxxxxxxxxxx\n
									xxxxxxxxx...............xxxxxxxxxxxxxxxxxxxx\n
									xxxxxxx..................xxxxxxxxxxxxxxxxxxx\n
									xxx............................xxxxxxxxxxxxx\n
									xxxx..........................xxxxxxxxxxxxxx\n
									xxxxxx....................................xx\n
									xxxxxxx................................xxxxx\n
									xxxxx..................................xxxxx\n
									xxxxxx....................................xx\n
									xxxxx....................................xxx\n
									xx.......................................xxx\n
									xxxxx.....................................xx\n
									xxxxx.....................................xx\n
									xxxxxxx...........................xxxxxxxxxx\n
									xxxxxxx...........................xxxxxxxxxx\n
									xxxxxxxxxx....................xxxxxxxxxxxxxx\n
									xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n

								")
		}
	}
}

