#include <iostream>
using namespace std;

int main() 
{
    //defining varibles
    string consent;
    int p, n, d, q, nickel, dime, quarter, total;

    //making sure my user wants to start playing the game
    cout << "Do you want to play my Change for a Dollar game? y/n \n";
    cin >> consent; 

    if (consent == "y")
    {
        //game instructions
        cout << "You have to enter the amount of coins required to make EXACTLY one dollar. \n"
        //let the games begin
        << "How many pennies? \n";
        cin >> p;

        cout << "How many nickels? \n";
        cin >> n;

        cout << "How many dime? \n";
        cin >> d;

        cout<< "How many quartes? \n";
        cin >> q;

        //creating new varibles so that inserted values can be processed correctly
        nickel = 5 * n;
        dime = 10 * d;
        quarter = 25 * q;
        total = p + nickel + dime + quarter;

        //game results
        if ( total == 100)
        {
            cout << "YOU WON THE GAME! \n";
        }

        else if ( total < 100)
        {
            cout << "The amount you enter is not enough. \n";
        }
        
        else if ( total > 100)
        {
             cout << "The amount you enter is too much. \n";
        }

        else 
        {
             cout << "INVALID AMOUNT. \n";
        }

    }

    else {
        //message for those who decided not to play the game (s/o Dway)
        cout << "Have a great day, beloved!";
    }

    return 0;


}