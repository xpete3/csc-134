#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void coinToss();

int main()
{   
     int times = 0;
     int randomNumber = 0;
     srand((time(0)));
   
    cout<< "How many times the coin should be tossed?" << endl;
    cin>> times;

    for(int i=1; i<=times; i++)
    {
    coinToss();
    }

return 0;
}

void coinToss()
{
    int randomNumber;
    randomNumber = 1 + rand() % 2;
    if(randomNumber==1)
    {
        cout<< "heads" << endl;
    }
    else
    {
        cout<<"tails" <<endl;
    }
}
