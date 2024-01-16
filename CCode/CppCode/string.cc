#include <iostream>
#include <string>

int main()
{
    std::string text = "Hello, world!";
    std::cout << text << std::endl;

    std::string input;
    std::cout << "text: ";
    std::cin >> input;
    std::cout << "text is \"" << input << "\"" << std::endl;
    
    return 0;
}
