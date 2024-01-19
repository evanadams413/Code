fn main() {
    let x = 0;
    // if 表达式
    if x > 2 {
        println!("{x}");
    }

    // loop 循环
    let mut count = 0;
    'counting_up: loop {
        println!("count = {count}");
        let mut remaining = 10;

        loop {
            println!("remaining = {remaining}");
            if remaining == 9 {
                break;
            }
            if count == 2 {
                break 'counting_up;
            }
            remaining -= 1;
        }

        count += 1;
    }
    println!("End count = {count}");

    // while 循环
    while x != 0 {
        println!("{x}");
    }

    // for 循环
    for i in (1..4).rev() {
        println!("{i}");
    }
    println!("LIFTOFF!!!");
}
