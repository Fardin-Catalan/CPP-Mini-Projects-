#include <iostream>
using namespace std;
void fibonacci(int);
int main()
{
  int num;
  cout << "Welcome to the fibonacci function!\n";
  cout << "\nEnter number which upto fibonacci function will implement:" << "\n";
  cin >> num;
  if (num > 1)
  {
    fibonacci(num);
  }
  else if (num == 1)
  {
    cout << "The result is:\t0\t1\t1\n";
  }
  else if (num < 0)
  {
    cout << "Invalid input\nOutput Error\n";
  }
  else if (num == 0)
  {
    cout << "0\n";
  }
  cout << "\nThanks for using the function!";
}
void fibonacci(int num)
{
  cout << "0\t1";
  int prev = 0;
  int next = 1;
  while ((prev + next) <= num)
  {
    int temp = prev + next;
    cout << "\t" << temp;
    prev = next;
    next = temp;
  }
}
