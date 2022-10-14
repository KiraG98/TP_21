#include <iostream>
#include <cstdlib>
using namespace std;

// Определение своей функции-предиката.
// Проверяет условие: x в квадрате меньше 2.
bool sqr_lt_2(double x)
{
  return x*x < 2;
}


int main()
{
  double x = 0;
  cout << "Enter a sequence of numbers x: ";
  while (cin >> x) // Условие продолжения выполнения цикла.
  {
    cout << "x*x < 2  == " << sqr_lt_2(x) << endl;
  }
  return EXIT_SUCCESS;
}