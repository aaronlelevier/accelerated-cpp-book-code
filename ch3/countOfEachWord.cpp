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
  words.push_back("bob");
  words.push_back("elyse");

  // count
  std::map<std::string, int> m;
  string word;
  for (int i = 0; i < words.size(); i++) {
    word = words[i];
    if (m.find(word) != m.end()) {
      // if we find the word in the map before the end it's a duplicate, so increment
      m[word] += 1;
    } else {
      // word doesn't exist in the map, so start count at 1
      m[word] = 1;
    }
  }

  // output counts
  for (const auto &p : m) {
      std::cout << "m[" << p.first << "] = " << p.second << '\n';
  }
}