#include <iostream>
#include <vector>
#include <string>
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
  std::string name = "Bob";
  Student_info student = {name, 15, 10, homework};

  std::vector<double> homework2 = _gen_homework(40, 30, 20);
  std::string name2 = "Aaron";
  Student_info student2 = {name2, 5, 75, homework2};

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

  // example of catching an error
  std::vector<double> no_homework;
  try
  {
    grade(1, 2, no_homework);
  }
  catch (const std::domain_error &e)
  {
    std::cerr << e.what() << '\n';
  }

  // Student_info vector and max
  std::vector<Student_info> students;
  students.push_back(student);
  students.push_back(student2);

  std::string::size_type maxlen = 0;

  // get longest name length
  for (int i = 0; i != students.size(); i++)
  {
    maxlen = std::max(maxlen, students[i].name.size());
  }

  // output using a pad w/ string repeat
  for (int i = 0; i != students.size(); i++)
  {
    Student_info &si = students[i];
    std::cout << si.name << std::string(maxlen + 1 - si.name.size(), ' ') << si.midterm << std::endl;
  }

  return 0;
}