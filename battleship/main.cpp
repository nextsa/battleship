#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gamescene.h"
#include "ship.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string playerName;
    cout << "Hello!\n Please, enter your name: ";
    cin >> playerName;
    system("cls");
    cout << "Hello, " << playerName << "!" << endl;
    cout << "rules, blah-blah-blah" << endl;
    cout << "To start please enter 's'" << endl << "To quit enter 'q'" << endl;
    char choise;
    cin >> choise;
    while ((choise != 's') || (choise != 'q'))
    {
        cout << "Wrong input! Try again!" << endl;
        cin >> choise;

        if (choise == 's')
        {
            system("cls");
            GameScene gamescene;
            gamescene.printBoard();
            break;
        }
        else if (choise == 'q')
        {
            return 0;
        }
    }
    char x = 0;
    cout << "To place ships enter coordinates." << endl << "Enter x: ";
    cin >> x;

    int y = 0;
    cout << "Enter y: ";
    cin >> y;

    int size = 0;
    cout << "Enter ship's size: ";
    cin >> size;



    return a.exec();
}

