#include <assert.h>

int seatsInTheater(int nCols, int nRows, int col, int row) {
  return (nCols - col + 1) * (nRows - row);
}

int main()
{
  int nCols = 16;
  int nRows = 11;
  int col = 5;
  int row = 3;

  int ret = seatsInTheater(nCols, nRows, col, row);

  assert(ret==96);
}
