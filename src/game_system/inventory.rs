use super::items;


struct Inventory 
{
	head: Node,
	n: u32 //length
}

struct Node
{
	value: items::Item,
	next: NodeLink
}

enum NodeLink
{
	End,
	More(Box<Node>),
}


impl Node
{
	pub fn new() -> Node
	{
		Node
		{
			value: items::Item::None,
			next: NodeLink::End
		}
	}
}





impl Inventory 
{
	pub fn new() -> Inventory
	{
		Inventory
		{
			head: Node::new(),
			n: 0
		}

	}

	pub fn add(&self, item: items::Item)
	{
		let mut temp: Box<Node>;
		for i in 0..self.n
		{
			// temp = self.head.next
			temp = match &self.head.next {
				NodeLink::More(expr) => expr,
				NodeLink::End => panic!(),
			}
		}
	}
}





