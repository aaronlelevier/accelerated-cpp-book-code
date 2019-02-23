#include <iostream>
#include <string>

int main()
{
  std::cout << "please enter name: ";

  std::string name;
  std::cin >> name;

  std::cout << "Hello, " << name << "!" << std::endl;

  return 0;
}
