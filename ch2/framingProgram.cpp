#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  // name and greeting
  string name = "Bob";
  const string greeting = "Hello, " + name + "!";
  const int pad = 1;

  // rows and cols
  const int rows = pad * 2 + 3;
  const string::size_type cols = greeting.size() + pad * 2 + 2;

  // write rows rows of output
  // invariant: we have written r rows so far
  for (int r = 0; r != rows; ++r)
  {
    string::size_type c = 0;
    // invariant: we have written c characters so far in the current row
    while (c != cols)
    {
      // is it time to write the greeting?
      if (r == pad + 1 && c == pad + 1)
      {
        cout << greeting;
        c += greeting.size();
      }
      else
      {
        // are we on the border?
        if (r == 0 || r == rows - 1 ||
            c == 0 || c == cols - 1)
          cout << "*";
        else
          cout << " ";
        ++c;
      }
    }
    cout << endl;
  }

  return 0;
}
