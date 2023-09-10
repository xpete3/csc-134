#include <iostream>
using namespace std;

int main()
{

string  month;
int year;
double T, S, county, state, tax;

cout << "What is the month? \n";
cin >> month;
cout << "What is the year? \n";
cin >> year;
cout << "What is the total amount collected at the cash register? \n";
cin >> T;

S = (T)/1.06;
county = S * 0.02;
state = S * 0.04;
tax = county + state;

cout << "\n" << "Month: " << month << "  Year: " << year <<"\n" 
    << "----------------------- \n"
    << "Total collected:           $" << T << "\n"
    << "Sales:                     $" << S << "\n"
    << "County Sales Tax:          $" << county << "\n"
    << "State Sales Tax:           $" << state << "\n"
    << "Total Sales Tax:           $" << tax << "\n";

return 0;
    
}