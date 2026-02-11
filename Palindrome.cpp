#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num;
  string name;
  cout << "Enter your name:";
  getline(cin, name);
  cout << "\nWelcome to the palindrome programme," << name;
  cout << "\nPlease enter the number to be checked:" << "\n";
  cin >> num;
  int copy = num, rev = 0;
  while (copy > 0)
  {
    int rev = (rev * 10) + (copy % 10);
    copy /= 10;
  }
  if (num == rev)
  {
    cout << rev << " is a palindrome number!";
  }
  else
    cout << num << " is not a palindrome number!";
}
