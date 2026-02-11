#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num;
  string name;
  cout << "Enter your name:";
  getline(cin, name);
  cout << "\nWelcome to the armstrong programme," << name;
  cout << "\nPlease enter the number upto which serier shall be printed:";
  cin >> num;
  int copy = num;
  int sum = 0;
  while (copy > 0)
  {
    int digit = copy % 10;
    sum += digit * digit * digit;
    copy /= 10;
  }
  if (sum = num)
    cout << num << " is an armstrong number\n";
  else
    cout << num << " is not an armstrong number";
}
