#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  vector<string> words;
  words.push_back("bob");
  words.push_back("coco");
  words.push_back("bob");
  words.push_back("elyse");

  for (int i = 0; i < words.size(); i++)
  {
    int cnt = 0;
    for (int j = 0; j < words.size() && cnt < 2; j++)
    {
      if (words[i] == words[j])
        cnt++;
    }
    cout << words[i] << " appears: " << cnt << "x" << endl;
  }
}