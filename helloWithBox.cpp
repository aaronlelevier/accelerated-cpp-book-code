#include <iostream>
#include <string>

int main()
{
  std::string prefix = "please enter name: ";
  std::string helloPrefix = "Hello, ";

  std::cout << prefix;

  std::string name;
  std::cin >> name;
  std::cout << std::endl;

  int width = name.length() + helloPrefix.length() + 4;

  std::string widthStars = std::string(width, '*');
  std::string widthStarsWhitespace = std::string(width-4, ' ');

  std::cout << widthStars << std::endl;
  std::cout << "* " << widthStarsWhitespace << " * " << std::endl;
  std::cout << "* " << helloPrefix << name << " *" << std::endl;
  std::cout << "* " << widthStarsWhitespace << " * " << std::endl;
  std::cout << widthStars << std::endl;

  return 0;
}
