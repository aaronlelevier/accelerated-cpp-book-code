// slice_array example
#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <valarray>     // std::valarray, std::slice
#include <assert.h>

int main()
{
  std::valarray<int> foo (8);
  for (int i=0; i<8; ++i) foo[i]=i;

  int size = foo.size();
  assert (size == 8);

  int rawMid = size / 2;
  std::size_t mid = size % 2 == 0 ? foo[rawMid-1] : foo[rawMid];

  std::cout << "size: " << size << " mid: " << mid << std::endl;

  std::cout << "bottom 50%: ";
  for (std::size_t n=0; n <= mid; n++)
	  std::cout << ' ' << foo[n];
  std::cout << '\n';

  std::cout << "top 50%: ";
  for (std::size_t n=mid+1; n < size; n++)
	  std::cout << ' ' << foo[n];
  std::cout << '\n';

  // mid 2
  std::valarray<int> bar (9);
  for (int i=0; i<9; ++i) bar[i]=i;

  int size2 = bar.size();
  assert (size2 == 9);

  int rawMid2 = size2 / 2;
  std::size_t mid2 = size2 % 2 == 0 ? bar[rawMid2-1] : bar[rawMid2];

  std::cout << "size: " << size2 << " mid: " << mid2 << std::endl;

  return 0;
}