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
  cout << "\nPlease enter the number:\n";
  cin >> num;
  if (num <= 1)
  {
    cout << num << " is not a prime";
  }
  if (num > 1)
  {
    for (int i = 2; i < num; i++)
    {
      if (num % i == 0)
      {
        cout << num << " is not a prime number";
        return 0;
      }
    }
    cout << num << " is a prime number";
  }
}
