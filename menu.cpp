#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void setTextColor(int colorCode) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}

int main()
{
    char choice;
    
    do {
        system("cls"); // Clear the console screen
        
        cout << "My Awesome Game" << endl; // Add game name
        cout << "Game Menu" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Options" << endl;
        cout << "3. Exit" << endl;
        
        choice = getch(); // Read a character from the keyboard
        
        switch (choice) {
            case '1':
                setTextColor(12); // Set color to red
                cout << "1. Start Game" << endl;
                setTextColor(15); // Set color back to white
                break;
            case '2':
                setTextColor(12); // Set color to red
                cout << "2. Options" << endl;
                setTextColor(15); // Set color back to white
                break;
            case '3':
                setTextColor(12); // Set color to red
                cout << "3. Exit" << endl;
                setTextColor(15); // Set color back to white
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                getch(); // Wait for a key press to continue
                break;
        }
    } while (choice != '3');
    
    return 0;
}
