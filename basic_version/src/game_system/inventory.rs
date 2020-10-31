use super::items;


struct Inventory 
{
	head: Node
}

enum Node
{
	End,
	More(Box<Node>),
}

impl Inventory 
{
	pub fn new() -> Inventory
	{
		Inventory
		{
			
		}

	}
}
