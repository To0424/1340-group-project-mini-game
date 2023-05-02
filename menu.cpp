#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void setTextColor(int colorCode)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}

int menu()
{
    const int NUM_CHOICES = 2;
    int selectedChoice = 1;
    int input;
    bool isGameStart = false;

    // Prompt the user to press Up and Down arrow keys to determine their key codes
    cout << "Press the Up arrow key: ";
    int upKey = getch();
    if (upKey == 0 || upKey == 224) {
        upKey = getch();
    }
    cout << endl << "Press the Down arrow key: ";
    int downKey = getch();
    if (downKey == 0 || downKey == 224) {
        downKey = getch();
    }

    do {
        system("cls");
        // Display the game name and highlight it if the game has not started
        if (!isGameStart) {
            setTextColor(10); // green
        }
        cout << "My Awesome Game" << endl;
        setTextColor(15); // white
        for (int i = 1; i <= NUM_CHOICES; i++) {
            if (i == selectedChoice) setTextColor(12);
            else setTextColor(15);

            switch (i) {
                case 1:
                    cout << "1. Start Game" << endl;
                    return 1;
                case 2:
                    cout << "2. Quit" << endl;
                    break;
            }
        }

        input = getch();
        if (input == 0 || input == 224) { // check for extended key codes
            input = getch();
            if (input == upKey) {
                if (selectedChoice > 1) {
                    selectedChoice--;
                }
            } else if (input == downKey) {
                if (selectedChoice < NUM_CHOICES) {
                    selectedChoice++;
                }
            }
        } else if (input == 13) {
            switch (selectedChoice) {
                case 1:
                    setTextColor(14); // yellow
                    cout << "Game Start!" << endl;
                    getch();
                    isGameStart = true;
                    selectedChoice = 1; // reset selected choice
                    //break;
                case 2:
                    setTextColor(14); // yellow
                    cout << "End" << endl;
                    getch();
                    return 0;
            }
        }
    } while (true);

    return 0;
}
