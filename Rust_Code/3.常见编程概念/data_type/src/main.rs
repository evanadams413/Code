fn main() {
    /*
            整型
    长度	有符号 	无符号
    8-bit	i8	    u8
    16-bit	i16	    u16
    32-bit	i32	    u32
    64-bit	i64	    u64
    128-bit	i128	u128
    arch	isize	usize
     */
    let x = 1;
    println!("x is: {x}");
    let y: i16 = 2;
    println!("y is: {y}");

    // 浮点型: f32(单)、f64(双)
    let z = 2.0;
    println!("z is: {z}");

    let a = 9 / 2;
    println!("{a}");

    let tup = (500, 6.4, 1);

    let (x, y, z) = tup;

    println!("{x} {z}");
    println!("The value of y is: {y}");

    say_hello("Hope");
}

fn say_hello(str: &str) -> i32
{
    println!("Hello, {str}");
    5
}
