#[derive(Copy, Clone)]
pub enum Item
{
	Healing(u32),
	Harming(u32),
	Key(u8),
	Empty,
}