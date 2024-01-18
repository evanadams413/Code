use std::io;
use std::cmp::Ordering;
use rand::Rng;
fn main() {
    println!("Guess the number!");

    let secret_number = rand::thread_rng().gen_range(1..=10);

    // 无线循环直到才出正确数字(返回 break)
    loop {
        println!("Please input your guess.");

        // 创建一个可变变量，并将它绑定到一个新的 String 空实例上
        // - String 是一个标准库提供的字符串类型，String::new 表示 调用 String 的关联函数 new
        // - new 函数会创建一个新的空字符串
        let mut guess = String::new();

        // std::io::stdin
        // 也可以 std::io::stdin(); 或 use std::io::stdin; stdin();
        // - .read_line(&mut guess) 方法会获取用户输入, &mut guess 表示操作 guess 地址(地址默认不可变)
        // - .expect("Failed to read line") 方法处理 stdin 函数返回值，如果为 Err 输出 "Failed to read line"
        io::stdin()
            .read_line(&mut guess)
            .expect("Failed to read line");

        // 将 guess 变量转换为 int ，并处理无效输入(非数字输入)
        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        // 判断 guess 与 secret_number 大小
        // secret_number > guess 返回 Greater，同理 < 返回 Less，= 返回 Equal
        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            }
        }
    }
}
