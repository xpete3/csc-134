#include <iostream>
using namespace std;

int main()
{

    double sugar, butter, flour, cookies;

    cout << "How many cookies are we making?\n";
    cin >> cookies;

    sugar = cookies * (1.5/48);
    butter = cookies / 48;
    flour = cookies * (2.75/48);

    cout << "We will need:\n"
     << sugar << " cups of sugar, \n"
     << butter << " cups of butter, \n"
     << "and " << flour << " cups of flour "
     << "for " << cookies << " cookies. \n";

    return 0;

}