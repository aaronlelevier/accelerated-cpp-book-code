#include <iostream>
#include <string>

int main()
{
  int x = 1;

  for(int i = 1; i < 11; i++)
  {
    x *= i;
    std::cout << x << std::endl;
  }

  return 0;
}
