/*---+--------------------------+ /*
|| Project Name: Project9
|| Author: Eliseo Hernandez Luna
|| Description:
||
||
/*---+--------------------------+ */


//includes
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//function prototypes
string getSuffix(int day);

int main() //begin main
{
	//declarations
	int year = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int month = 0;
	int p = 0;
	int day = 0;

	//input
	cout << "Welcome to the Easter Date Calculator for the Western Church <1583 to 4099)" << endl;
	cout << "---------------------------------------------------------------------------" << endl << endl;

	do {
		cout << "Please enter a year between 1583 to 4099 inclusive. " << endl;
		cout << "(Enter zero or a negative number to quit): ";
		cin >> year;
		
		if (year <= 0) {
			cout << endl << "Thanks for using the Easter Date Calculator!" << endl;
			break;
		}
		else if (year < 1583 || year >4099) {
			cout << endl<< "You have entered an invalid year" << endl;
			cout << "--------------------------------" << endl;
			continue;
		}


		//processing
		a = year % 19;
		b = year / 100;
		c = year % 100;
		d = b / 4;
		e = b % 4;
		f = (b + 8) / 25;
		g = (b - f + 1) / 3;
		h = (19 * a + b - d - g + 15) % 30;
		i = c / 4;
		k = c % 4;
		l = (32 + 2 * e + 2 * i - h - k) % 7;
		m = (a + 11 * h + 22 * l) / 451;
		month = (h + l - 7 * m + 114) / 31; //3=march 4=april
		p = (h + l - 7 * m + 114) % 31;
		day = p + 1; //date in easter month

		//output
		cout << endl << "Easter Sunday = " << (month == 3 ? "March " : "April") << " "
			<< day << getSuffix(day) << ", " << year << "." << endl << endl;
	} while (true);

	return 0;

}   //end of main function

//function declarations
string getSuffix(int day) {
		if (day % 100 >= 11 && day % 100 <= 13)
			return "th";
		switch (day % 10) {
		case 1: return "st";
		case 2: return "nd";
		case 3: return "rd";
		default: return "th";
		}
	}