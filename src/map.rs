pub struct Map
{
 grid: [ Hex; 19 ],
}

impl Map
{
    pub fn new(seed: u8) -> Map
    {
        Map
        {
            grid:[  Hex::new(seed, ( 2i8, 0i8, - 2i8)),   Hex::new(seed, (1i8, 1i8, - 2i8)),   Hex::new(seed, (0i8,  2i8, - 2i8)),  

              Hex::new(seed, ( 2i8, -1i8, -1i8)),   Hex::new(seed, (1i8, 0i8, -1i8)),   Hex::new(seed, (0i8, 1i8, -1i8)),   Hex::new(seed, (-1i8,  2i8, -1i8)),

              Hex::new(seed, ( 2i8, - 2i8, 0i8)),   Hex::new(seed, (1i8, -1i8, 0i8)),   Hex::new(seed, (0i8, 0i8, 0i8)),   Hex::new(seed, (-1i8, 1i8, 0i8)),   Hex::new(seed, (- 2i8,  2i8, 0i8)),

              Hex::new(seed, (1i8, - 2i8, 1i8)),   Hex::new(seed, (0i8, -1i8, 1i8)),   Hex::new(seed, (-1i8, 0i8, 1i8)),   Hex::new(seed, (- 2i8, 1i8, 1i8)),

              Hex::new(seed, (0i8, - 2i8,  2i8)),   Hex::new(seed, (-1i8, -1i8,  2i8)),   Hex::new(seed, (- 2i8, 0i8,  2i8)),
            
            ]
        }
    }
}



pub struct Hex
{
 hex: (i8, i8, i8),
 land: Land,
 owner: Nation,
 soldiers: u8,
 city: bool,
 city_level: u8,
}

impl Hex
{
    fn new(_seed: u8, hex: (i8, i8, i8)) -> Hex
    {
        Hex
        {
            hex,
            land: Land::Plains,
            owner: Nation::Unclaimed,
            soldiers: 0,
            city: false,
            city_level: 0,
        }
    }
}

enum Land
{
    Plains,
    Hills,
    Forrest,
    Ocean,
}


enum Nation
{
    France,
    China,
    Greece,
    Mali,
    Aztec,
    Unclaimed,
}