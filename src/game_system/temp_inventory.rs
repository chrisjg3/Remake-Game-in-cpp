use super::items;
use super::resultsstruct;

// Linked Lists in Rust are a bit outside my abilities until I cover box pointers in Rust, 
// but I still don't want to just implement a vector...so boring and ordinary

// so I will build something at least a bit from scratch, even if it isn't fancy or complex

struct Inventory
{
	n: usize,
	arr: [items::Item; 28], 
}

impl Inventory
{

	pub fn new() -> Inventory
	{
		Inventory
		{
			n: 0,
			arr: [ items::Item::Empty; 28 ]

		}
	}

	pub fn add_item(&mut self, item: items::Item) -> resultsstruct::InvenResult
	{
		if self.n > 27
		{
			println!("Cannot be added to inventory!");
			return resultsstruct::InvenResult::Failed;
		}
		
		self.arr[self.n] = item;

		return resultsstruct::InvenResult::Done;

	}


	// pub fn use_item();
	// pub fn drop_item();
	// pub fn list();

}






