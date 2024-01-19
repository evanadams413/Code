fn main() {
    // 变量默认不可变，通过 mut 设为可变
    let mut x = 5;
    println!("The value of x is: {x}");
    x = 6;
    println!("The value of x is: {x}");
    
    // 常量
    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;
    println!("{THREE_HOURS_IN_SECONDS}");

    {
        /*
        第二个变量“遮蔽”了第一个变量，此时任何使用该变量名的行为中都会视为是在使用第二个变量，
        直到第二个变量自己也被隐藏或第二个变量的作用域结束
        */
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }

    let spaces = "   ";
    // spaces = spaces.len();  <- 正常赋值无法改变变量类型
    let spaces = spaces.len();
    println!("{spaces}");

    println!("The value of x is: {x}");
}
