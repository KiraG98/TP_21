#include <iostream>
#include <cstdlib>

using namespace std;

bool sqr_lt_2(double x)
{
  return x*x < 2;
}

int main()
{
  double x = 0;
  cout << "Enter a sequence of numbers x: ";
  while (cin >> x) 
  {
    cout << "x*x < 2  == " << sqr_lt_2(x) << endl;
    cin >> // ввести значение
  }
  return EXIT_SUCCESS;
}
