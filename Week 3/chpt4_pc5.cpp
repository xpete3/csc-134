#include <iostream>
using namespace std;

int main() 
{

    string consent;
    double bmi, weight, height;

    cout << "Hello beautiful. Would you like to share you hieght and weight? y/n \n";
    cin >> consent; 

    if (consent == "y")
    {

        cout << "What is your height? (inches) \n";
        cin >> height;
        cout << "What is your weight? (pounds) \n";
        cin >> weight;

        bmi = weight * 703 / (height * height) ;

        if ( bmi >= 18.5 && bmi <= 25 )
        {
            cout << "You are an optimal weight. \n";
        }

        else if ( bmi < 18.5 )
        {
            cout << "You are underweight. \n";
        }

        else if ( bmi > 25 )
        {
            cout << "You are overweight. \n";
        }

        else 
        {
            cout << "INVALID BMI. \n";
        }

    }

    else {

        cout << "Have a great day, beloved!";

    }

    return 0;

}