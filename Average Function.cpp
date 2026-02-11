#include <iostream>
using namespace std;

float average(float, float, float, float, float); // Function declaration

int main()
{
  float a, b, c, d, e;
  cout << "Welcome to average function!";
  cout << "\nEnter 5 numbers:";
  cin >> a >> b >> c >> d >> e;
  float result = average(a, b, c, d, e);
  cout << "\nThe average of the input numbers is:" << result;
  cout << "\nThanks for using the average  function!";
  return 0;
}
float average(float a, float b, float c, float d, float e)
{
  float sum = (a + b + c + d + e) / 5;
  return sum;
}
