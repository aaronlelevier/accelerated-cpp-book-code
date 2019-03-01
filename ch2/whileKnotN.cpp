#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  int n = 3;
  int k = 0;
  while (k != n)
  {
    // invariant: we have written k asterisks so far
    // std:: is required here
    using std::cout;
    cout << "*";
    ++k;
  }
  std::cout << std::endl;
  return 0;

  return 0;
}
