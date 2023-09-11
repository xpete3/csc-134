#include <iostream>
using namespace std;

int main() 
{
    //defining varibles
    string consent;
    double bmi, weight, height;
    //making sure user wants to share personal information
    cout << "Hello beautiful. Would you like to share you hieght and weight? y/n \n";
    cin >> consent; 

    if (consent == "y")
    {
        //inserting user's information
        cout << "What is your height? (inches) \n";
        cin >> height;
        cout << "What is your weight? (pounds) \n";
        cin >> weight;
        //calculating BMI
        bmi = weight * 703 / (height * height) ;
        //results and display
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
        //message for those who decided not to calculate BMI (s/o Dway)
        cout << "Have a great day, beloved!";

    }

    return 0;

}