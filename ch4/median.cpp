// source file for the median function
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>

double median(std::vector<double> vec)
{
  typedef std::vector<double>::size_type vec_sz;
  vec_sz size = vec.size();

  if (size == 0)
    throw std::domain_error("median of an empty vector");

  std::sort(vec.begin(), vec.end());
  vec_sz mid = size / 2;

  return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

// int main()
// {
//   std::vector<double> homework;

//   homework.push_back(10);
//   homework.push_back(20);
//   homework.push_back(20);

//   std::cout << "median: " << median(homework) << std::endl;

//   return 0;
// }
