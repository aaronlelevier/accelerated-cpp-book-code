#include <iostream>
#include <vector>
#include "assert.h"

#include "median.h"
#include "Student_info.h"

int main()
{
  std::vector<double> homework;

  homework.push_back(10);
  homework.push_back(20);
  homework.push_back(20);

  std::cout << "median: " << median(homework) << std::endl;

  // student info
  Student_info student = {"Bob", 15};
  student.homework = homework;

  Student_info student2 = {"Aaron", 5};

  assert(compare(student2, student));

  return 0;
}