#include <iostream>
#include <dice.h>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    bool quit = false;
    string answer;
    bool result = false;

    while(!quit)
    {
        system("clear");
        cout << "Welcome to my gambling hall, would you like to play Han Chou?" << endl;
        cin >> answer;
        if (answer == "Yes")
        {
            result = false;
            cout << "Very good, would you like to bet Han or Chou?" << endl;
            do
            {
                cin >> answer;
                if(answer != "Han" && answer != "Chou")
                {
                    cout << "I am sorry, my programmer is terrible, please be precise." << endl;
                }
            } while (answer != "Han"  && answer != "Chou");
            
            MSC_GamesLib::libChance::Die die(6);
            int roll1 = die.fRoll();
            int roll2 = die.fRoll();

            cout << roll1 << ", " << roll2 << ": ";
            if((roll1 + roll2) % 2 == 0)
            {
                cout << "Chou!" << endl;
                if(answer == "Chou")
                {
                    result = true;
                }
            }
            else
            {
                cout << "Han!" << endl;
                if(answer == "Han")
                {
                    result = true;
                }
            }
            string temp = result ? "win!" : "lose!";
            cout << "You " << (result ? "win!" : "lose!");
            cin >> answer;
        }
        else
        {
            cout << "Farewell!" << endl;
            quit = true;
        }
    }


    return 0;
}