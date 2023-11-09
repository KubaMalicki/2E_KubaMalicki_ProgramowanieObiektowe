#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;
int main()
{
    int choice;
    int choicecomp = rand() % 5 + 1;
 
    srand(static_cast<unsigned>(time(nullptr)));
 
    cout << "Witaj w grze lizard,stone,paper,scissors,dragon" << endl;
    cout << "Menu wyboru" << endl;
    cout << "1. Lizard" << endl;
    cout << "2. Stone" << endl;
    cout << "3. Paper" << endl;
    cout << "4. Scissors" << endl;
    cout << "5. Dragon" << endl;
    cout << "0. Wyjscie" << endl;
    cout << "Twoj wybor" << endl;
    cin >> choice;
    if (choice == 0)
    {
        cout << "Wychodzenie z gry..." << endl;
        return 0;
    }
    cout << "Twoj wybor:";
    if (choice == 1)
    {
        cout << "Lizard";
    }
    else if(choice == 2)
    {
        cout << "Stone";
    }
    else if(choice == 3)
    {
        cout << "Paper";
    }
    else if(choice == 4)
    {
        cout << "Scissors";
    }
    else if(choice == 5)
    {
        cout << "Dragon";
    }
    else {
        cout << "Nieprawidlowy wybor";
    }
 
 
 
    cout << " Wybor komputera:";
    if (choicecomp == 1)
    {
        cout << "Lizard";
    }
    else if (choicecomp == 2)
    {
        cout << "Stone";
    }
    else if (choicecomp == 3)
    {
        cout << "Paper";
    }
    else if (choicecomp == 4)
    {
        cout << "Scissors";
    }
    else if (choicecomp == 5)
    {
        cout << "Dragon";
    }
 
    if (choice == choicecomp)
    {
        cout << " Remis!" << endl;
    }
    else if(choice == 1 && choicecomp == 3 || choicecomp ==5 )
    {
        cout<<"Wygrales!"<<endl;
    }
    else if(choice == 2 && choicecomp == 4 || choicecomp== 1)
    {
        cout<<"Wygrales!"<<endl;
    }
    else if(choice == 3 && choicecomp == 2 || choicecomp ==5)
    {
        cout<<"Wygrales!"<<endl;
    }
    else if(choice == 4 && choicecomp == 3 || choicecom== 1) 
    {
        cout<<"Wygrales!"<<endl;
    }
    else if(choice == 5 && choicecomp == 2 || choicecom== 4)
    {
        cout<<"Wygrales!"<<endl;
    }
    else if
    {
        cout<<"Przegrales!"<<endl;
    }
    return 0;
}