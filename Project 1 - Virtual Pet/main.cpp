#include "pa_virtual_pet.hpp"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string petName;
    int hungerPercent;
    int happinessPercent;
    int healthPercent;

    hungerPercent = 0;
    happinessPercent = 100;
    healthPercent = 100;
    // 1. Initialize hungerPercent to 0, happinessPercent to 100,
    // and healthPercent to 100.

    cout << "Enter your pet's name: ";
    cin >> petName;

    // 2. Get the user's input and store it in petName.


    bool quit = false;
    while ( !quit ) // game loop
    {
        cout << endl << endl;
        cout << "---------------------------" << endl;

        UpdatePet( hungerPercent, happinessPercent, healthPercent );
        DrawPet( healthPercent );
        DisplayPetStats( petName, hungerPercent, happinessPercent, healthPercent );
        // provides player with info every game cycle
        if (healthPercent <= 0)
        {
            cout << "\nyour pet is dead :(\n";
            break;
        }
        // 3. Check if pet's health is less than or equal to 0.
        // if so, break out of the while loop.

        DisplayMainMenu();
        int choice = GetChoice( 1, 4 );

        switch (choice)
        {
            case 1:
            {

                Feed(hungerPercent);
                //UpdatePet(hungerPercent, happinessPercent, healthPercent);
            }
            break;

            case 2:
            {

                Play(happinessPercent);
                //UpdatePet(hungerPercent, happinessPercent, healthPercent);
            }
            break;

            case 3:
            {
                Heal(healthPercent);
                //UpdatePet( hungerPercent, happinessPercent, healthPercent);
            }
            break;

            case 4:
            {
                quit = true;
            }
            break;
        }

    }

    return 0;
}
