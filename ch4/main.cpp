#include <iostream>
#include <vector>
#include "assert.h"

#include "median.h"
#include "Student_info.h"
#include "grade.h"

std::vector<double> _gen_homework(double a, double b, double c)
{
  std::vector<double> homework;
  homework.push_back(10);
  homework.push_back(20);
  homework.push_back(20);
  return homework;
}

int main()
{
  std::vector<double> homework = _gen_homework(10, 30, 20);

  std::cout << "median: " << median(homework) << std::endl;

  // student info
  Student_info student = {"Bob", 15, 10, homework};

  std::vector<double> homework2 = _gen_homework(40, 30, 20);
  Student_info student2 = {"Aaron", 5, 75, homework2};

  assert(compare(student2, student));

  // grades
  std::vector<double> grades;
  grades.push_back(grade(10, 10, 10));
  grades.push_back(grade(10, 10, 50));
  grades.push_back(grade(10, 10, homework));
  grades.push_back(grade(student2));

  for (int i = 0; i != grades.size(); i++)
  {
    std::cout << i << ": " << grades[i] << std::endl;
  }

  return 0;
}