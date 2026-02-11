#include <iostream>
using namespace std;
int main()
{
  string name;
  int ans1, ans2, score = 0;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "\nWelcome to the Barcelona quiz," << name << "!\n";
  cout << "The first quiz is shown below:\n";
  cout << "Which player scored the most goals for Fc Barcelona?\n1)Luis Suarez\n2)Neymar Jr\n3)Lionel Messi\n4)Romario\n5)Ronaldinho Gaucho\nEnter your Answer(1-5): ";
  cin >> ans1;
  if (ans1 == 3)
  {
    score += 1;
    cout << "\nYou answered it correctly!\nCongratulations,You have scored 1 point!";
  }
  else
  {
    cout << "\nSorry,Your answer was incorrect!";
  }
  cout << "The second  quiz is shown below:\n";
  cout << "Which player conceded the most goals playing Fc Barcelona?\n1)Ter Stegen\n2)Victor Valdes\n3)Vitor Baia\n4)Pepe Reina\n5)Inaki Pena\nEnter your Answer(1-5): ";
  cin >> ans2;
  if (ans2 == 1)
  {
    score += 1;
    cout << "\nYou answered it correctly!\nCongratulations,You have scored 1 point!";
  }
  else
  {
    cout << "\nSorry,Your answer was incorrect!";
  }
  cout << "\nYour final score is " << score;
}
