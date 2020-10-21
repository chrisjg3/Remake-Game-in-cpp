
// Just for simplicty I create a struct stub here:
pub struct Entity
{
    id: i8,
}
impl Entity
{
    pub fn new() -> Entity
    {
        Entity
        {
            id: 9,
        }
    }
}

struct Inventory
{
    owner: Box<Entity>,
    max_items: i8,
    // head: Box<Node>,
}


impl Inventory
{

}
