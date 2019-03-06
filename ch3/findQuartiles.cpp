// slice_array example
#include <iostream> // std::cout
#include <cstddef>  // std::size_t
#include <valarray> // std::valarray, std::slice
#include <assert.h>

std::valarray<int> getArray(int n)
{
  std::valarray<int> arr(n);
  for (int i = 0; i < n; ++i)
    arr[i] = i;
  return arr;
}

int getMid(std::valarray<int> arr) {
  int size = arr.size();
  int rawMid = size / 2;
  std::size_t mid = size % 2 == 0 ? arr[rawMid - 1] : arr[rawMid];
  return mid;
}

int main()
{
  std::valarray<int> foo = getArray(8);

  int mid = getMid(foo);

  std::cout << "mid: " << mid << std::endl;

  std::cout << "bottom 50%: ";
  for (std::size_t n = 0; n <= mid; n++)
    std::cout << ' ' << foo[n];
  std::cout << '\n';

  std::cout << "top 50%: ";
  for (std::size_t n = mid + 1; n < foo.size(); n++)
    std::cout << ' ' << foo[n];
  std::cout << '\n';

  // mid 2
  std::valarray<int> bar = getArray(9);
  int size2 = bar.size();

  int rawMid2 = size2 / 2;
  std::size_t mid2 = size2 % 2 == 0 ? bar[rawMid2 - 1] : bar[rawMid2];

  std::cout << "size: " << size2 << " mid: " << mid2 << std::endl;

  return 0;
}