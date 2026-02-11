#include <iostream>
using namespace std;
int main()
{
  int num1, num2, max;
  cout << "**Welcome to the lcm programme!**";
  cout << "\nEnter the first number: ";
  cin >> num1;
  cout << "\nEnter the second number: ";
  cin >> num2;
  if (num1 > num2)
    max = num1;
  else
    max = num2;
  while (1)
  {
    if (max % num1 == 0 && max % num2 == 0)
    {
      cout << "\nThe lcm of " << num1 << " & " << num2 << " is " << max;
      break;
    }
    max++;
  }
  cout << "\n**Thanks for using lcm programme**";
}
