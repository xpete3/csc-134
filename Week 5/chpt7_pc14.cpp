#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int lottery[5];
	int player[5];
	int digit, match = 0;

	srand(time(NULL));				
	for (int i = 0; i < 5; i++)
	{
	 	lottery[i] = 0 + rand() % 9;
	} 

	cout << "Enter your 5 lottery picks in the range of 0 to 9,\n"
		 << "one number at a time.\n";
	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Number " << (i + 1) << ": ";
			cin  >> digit;

			if (digit < 0 || digit > 9)
			{
				cout << "Invaild number!\n"
					 << "Pick a number in the range of 0 to 9.\n";
			}
		} while (digit < 0 || digit > 9);
		
		player[i] = digit;
	}

	for (int i = 0; i < 5; i++)
	{
		if (lottery[i] == player[i])
			match++;
	}

	cout << "Winning digits : ";
	for (int i = 0; i < 5; i++)
	{
		cout << lottery[i] << " ";
	}
	cout << endl;

	cout << "player digits  : ";
	for (int i = 0; i < 5; i++)
	{
		cout << player[i] << " ";
	}
	cout << endl;

	cout << "Matching digits: " << match << endl;

    if(match == 5)
    {
        cout << "You are the grand prize winner!!" << endl;
    }

	return 0;
}