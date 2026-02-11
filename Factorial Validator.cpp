#include <iostream>
using namespace std;
void factorial(int);
int main()
{
  string name;
  cout << "Enter your name:";
  getline(cin, name);
  cout << "\nWelcome to factorial programme "<< name<<"!";
  int num;
  cout << "Enter the number which's factorial you want to calculate:";
  cin >> num;
  if (num < 0)
  {
    cout << "\nInvalid Input\tOutput Error";
  }
  else if ((num == 1) || (num == 0))
  {
    cout << "The factorial is 1";
  }
  else if (num > 1)
  {
    factorial(num);
    cout << "\nThanks for usinng the programme!";
  }
}
void factorial(int num)
{
  long long sum = 1;
  for (int i = 2; i <= num; i++)
  {
    sum *= i;
  }
  cout << "\nThe factorial is " << sum;
}
