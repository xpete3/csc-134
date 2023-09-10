#include <iostream>
using namespace std;

int main() 
{
 
    string consent;
    int p, n, d, q, nickel, dime, quarter, total;

    cout << "Do you want to play my Change for a Dollar game? y/n \n";
    cin >> consent; 

    if (consent == "y")
    {

        cout << "You have to enter the amount of coins required to make EXACTLY one dollar. \n"
        << "How many pennies? \n";
        cin >> p;

        cout << "How many nickels? \n";
        cin >> n;

        cout << "How many dime? \n";
        cin >> d;

        cout<< "How many quartes? \n";
        cin >> q;

        nickel = 5 * n;
        dime = 10 * d;
        quarter = 25 * q;
        total = p + nickel + dime + quarter;


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

        cout << "Have a great day, beloved!";

    }

    return 0;


}