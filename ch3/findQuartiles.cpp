// slice_array example
#include <iostream> // std::cout
#include <cstddef>  // std::size_t
#include <valarray> // std::valarray, std::slice
#include <assert.h>

std::valarray<int> getArray(int start, int end)
{
  std::valarray<int> arr(end);
  for (int i = start; i < start+end; ++i)
    arr[i] = i;
  return arr;
}

int getMid(std::valarray<int> arr) {
  int first = arr[0];
  int size = arr.size();
  int last = arr[size-1];
  int rawMid = last / 2;
  std::cout << "rawMid: " << rawMid << std::endl;
  std::size_t mid = last % 2 == 0 ? arr[rawMid - 1] : arr[rawMid];
  return mid;
}

void printBottomAndTop(std::valarray<int> arr, int middle) {
  std::cout << "bottom 50%: ";
  for (std::size_t n = 0; n <= middle; n++)
    std::cout << ' ' << arr[n];
  std::cout << '\n';

  std::cout << "top 50%: ";
  for (std::size_t n = middle + 1; n < arr.size(); n++)
    std::cout << ' ' << arr[n];
  std::cout << '\n';
}

int main()
{
  std::valarray<int> foo = getArray(0, 8);
  int mid = getMid(foo);
  std::cout << "mid: " << mid << std::endl;
  printBottomAndTop(foo, mid);

  // create "bottom" valarray and show it's bottom/top
  std::valarray<int> bottom = getArray(0, mid+1);
  int bottomMid = getMid(bottom);
  std::cout << "bottoMid: " << bottomMid << std::endl;
  printBottomAndTop(bottom, bottomMid);

  // create "top" valarray and show it's top/top
  std::valarray<int> top = getArray(mid, foo.size());
  int topMid = getMid(top);
  std::cout << "topMid: " << topMid << std::endl;
  printBottomAndTop(top, topMid);

  return 0;
}