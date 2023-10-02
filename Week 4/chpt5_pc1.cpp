#include <iostream>
using namespace std;

int main()
{

int user_number,
        total = 0;

    cout << "\nEnter a positive number: ";
    cin >> user_number;

    while (user_number < 0)
    {
        cout << "ERROR: a positive number must be chosen\n";
        cout << "Enter a positive number: ";
        cin >> user_number; 
    }

    for (int i = 1; i <= user_number; i++)
    {
        total += i;
    }

    cout << "Total = " << total ;

    return 0;
    
}