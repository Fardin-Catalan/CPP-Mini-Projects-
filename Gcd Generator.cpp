#include <iostream>
using namespace std;
int main()
{
  int num1, num2, min, gcd;
  cout << "**Welcome to the lcm programme!**";
  cout << "\nEnter the first number: ";
  cin >> num1;
  cout << "\nEnter the second number: ";
  cin >> num2;
  if (num1 < num2)
    min = num1;
  else
    min = num2;
  gcd = 1;
  while (min >= 1)
  {
    if (num1 % min == 0 && num2 % min == 0)
    {
      cout << "\nThe gcd of " << num1 << " & " << num2 << " is " << min;
      break;
    }
    min--;
  }
  cout << "\n**Thanks for using the gcd programme!**";
}
