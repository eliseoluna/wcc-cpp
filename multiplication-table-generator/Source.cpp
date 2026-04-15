/*---+--------------------------+ /*
|| Project Name: Project 8
|| Author: Eliseo Hernandez Luna
|| Description: Multiplication Table
||
||
/*---+--------------------------+ */


//includes
#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes


int main() //begin main
{
	//declarations - STEP #1
	const int START_NUM_MAX = 2;
	const int END_NUM_MAX = 10;

	int numStart = 0; //user start value
	int numEnd = 0;  //user end value
	int z = START_NUM_MAX; //y axis row counter

	char quitFlag = 'N';

	bool errFlag = false;

	do //outer-most while loop - STEP #2
	{
		//clear the screen - STEP #3
		cout << "Welcome to the Multiplication Table Generator!" << endl;
		cout << "----------------------------------------------" << endl << endl;
		cout << "Please enter the starting number: (integer >= " << START_NUM_MAX << " and <= " << END_NUM_MAX << "): ";
		cin >> numStart;
		cout << endl;

		// This will validate the starting number - you must next modify the code to validate the ending number
		// NOTE! READ THE PDF - STEP #4
		do
		{
			errFlag = false;

			if (numStart >= START_NUM_MAX) //check that user starting number is in the correct range
			{
				if (numStart <= END_NUM_MAX)
					break;
				else
					errFlag = true;
			}
			else
				errFlag = true;

			if (errFlag)
			{
				cout << "You have entered an invalid number!" << endl << endl;
				cout << "Please enter the starting number: (integer >= " << START_NUM_MAX << " and <= " << END_NUM_MAX << "): ";
				cin >> numStart;
				cout << endl;
			}
		} while (numStart > START_NUM_MAX || numStart > END_NUM_MAX);

		cout << "Please enter the ending number: (integer >= " << numStart << " and <= " << END_NUM_MAX << "): ";
		cin >> numEnd;
		cout << endl;

		//now validate the ending number - see above (similar but different) STEP #5 
		do
		{
			errFlag = false;

			if (numEnd >= numStart) //check that user starting number is in the correct range
			{
				if (numEnd <= END_NUM_MAX)
					break;
				else
					errFlag = true;
			}
			else
				errFlag = true;

			if (errFlag)
			{
				cout << "You have entered an invalid number!" << endl << endl;
				cout << "Please enter the ending number: (integer >= " << numStart << " and <= " << END_NUM_MAX << "): ";
				cin >> numEnd;
				cout << endl;
			}
		} while (numEnd > numStart || numEnd < END_NUM_MAX);

		//tab over and build the column header - STEP #6
		cout << "Multiplication Matrix - " << numStart << " to " << numEnd << endl;
		cout << "--------------------------------" << endl;
		
		cout << '\t';
		for (int x = numStart; x <= numEnd; x++)
		{
			cout << x << '\t';
		}
		cout << endl << endl;

		//build your nested "for" loops here to output the mutpilication table numbers - STEP #7
		for (int row = z; row <= END_NUM_MAX; row++)
		{
			cout << row << '\t';
			for (int col = numStart; col <= numEnd; col++)
			{
				cout << row * col << '\t';
			}
			cout << endl << endl;
		}

		//get the sentinal value from the user 	- STEP #8
		do
		{
			cout << endl;
			cout << "Would you like to generate another table? (Y for Yes, N for No):";
			cin >> quitFlag;

		} while (toupper(quitFlag) != 'N' && toupper(quitFlag) != 'Y');

		z = START_NUM_MAX;

	} while (toupper(quitFlag) == 'Y');//end of outer for loop

	cout << endl << "Thank you for using the Multiplication Table Generator. Goodbye! " << endl; //thank you message goes here!

	system("pause");

	return 0;

}   //end of main function

//function declarations
