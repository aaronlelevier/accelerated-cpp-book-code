#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;
using std::vector;

double grade(double midterm, double finalterm, double homework)
{
  return 0.2 * midterm + 0.4 * finalterm + 0.4 * homework;
};

double grade(double midterm, double finalterm, const vector<double> &homework)
{
  return grade(midterm, finalterm, median(homework));
};

double grade(const Student_info &s)
{
  return grade(s.midterm, s.finalterm, s.homework);
}