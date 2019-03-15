#include <iostream>
#include <vector>
#include "median.h"

int main()
{
  std::vector<double> homework;

  homework.push_back(10);
  homework.push_back(20);
  homework.push_back(20);

  std::cout << "median: " << median(homework) << std::endl;

  return 0;
}