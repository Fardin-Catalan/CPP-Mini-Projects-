#include <iostream>
using namespace std;
int main()
{
  int age;
  string name;
  char answer;
  cout << "\nEnter your name:";
  getline(cin, name);
  cin >> name;
  cout << "\nWelcome to the survey, " << name;
  cout << "\nThe system needs to verify your age and nationality";
  cout << "\nPlease enter your age: ";
  cin >> age;
  if (age < 18 || age >= 70)
    cout << "\nSorry,You are not eligible";
  else
  {
    cout << "\nCongratulations,You have passed the age verification";
    cout << "\nAre you Bangladeshi?(Y/N): " << answer;
    cin >> answer;
    if (answer == 'Y')
      cout << "\nCongratulations,You have passed the verification test";
    else
      cout << "\nSorry,You are not eligible";
  }
}
