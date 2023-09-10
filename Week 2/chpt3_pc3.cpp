#include <iostream>
using namespace std;

int main()
{
    double gallons, miles, mpg;

    cout << "How many gallons of gas does you car hold? \n";
    cin >> gallons;

    cout << "How many miles can the car be driven on a full tank? \n";
    cin >> miles;

    mpg = miles / gallons;
    cout << "The number of miles that may be driven per gallon are " << mpg << ".\n";

    return 0;

}