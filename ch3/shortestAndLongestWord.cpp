#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;
using std::string;

int main()
{
  // populate words list
  vector<string> words;
  words.push_back("bob");
  words.push_back("coco");
  words.push_back("bobby-joe");
  words.push_back("elyse");
  words.push_back("joe");

  string shortest;
  int lenShort = 1000;

  string longest;
  int lenLong = 0;

  for (int i = 0; i < words.size(); i++) {
    const string word = words[i];
    const int len = word.length();
    if (len < lenShort) {
      shortest = word;
      lenShort = len;
    }
    if (len > lenLong) {
      longest = word;
      lenLong = len;
    }
  }

  // output shortest and longest
  std::cout << "shortest: " << shortest << " longest: " << longest << std::endl;
}