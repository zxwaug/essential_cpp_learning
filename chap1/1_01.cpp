#include <iostream>
#include <string>

int main()
{
    std::string user_name;
    std::cout << "Please enter your first name: ";
    std::cin >> user_name;
    std::cout << std::endl << "Hello, " << user_name << "!" << std::endl;
    return 0;
}