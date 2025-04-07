#include <iostream>
#include <dice.h>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    bool quit = false;
    string answer;

    while(!quit)
    {
        system("clear");
        cout << "Welcome to my gambling hall, would you like to play Han Chou?" << endl;
        cin >> answer;
        if (answer == "Yes")
        {
            cout << "Very good, would you like to be Han or Chou?" << endl;
        }
        else
        {
            quit = true;
        }
    }


    return 0;
}