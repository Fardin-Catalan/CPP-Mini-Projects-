#include <iostream>

using namespace std;

int main()

{

  string name;

  string plural = "bottles";

  string single = "bottle";

  cout << "Enter your name:";

  getline(cin, name);

  cout << "\nWelcome to 99 Bottles classic song program," << name << " !\n";

  for (int i = 99; i > 0; i--)

  {

    if (i > 2)

    {

      cout << i << " " << plural << " of beer on the wall, " << i << " " << plural << " of beer\n";

      cout << "Take one and pass it around and now, " << (i - 1) << " " << plural << " of beer\n";

    }

    else if (i == 2)

    {

      cout << i << " " << plural << " of beer on the wall, " << i << " " << plural << " of beer\n";

      cout << "Take one and pass it around and now, " << (i - 1) << " " << single << " of beer\n";

    }

    else

    {

      cout << i << " " << single << " of beer on the wall, " << i << " " << single << " of beer\n";

      cout << "Take one and pass it around and now, " << "no bottles of beer on the wall\n";

    }

  }

}
