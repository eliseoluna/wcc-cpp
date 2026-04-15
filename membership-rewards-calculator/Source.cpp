/*---+--------------------------+ /*
|| Project Name: Projecct 10
|| Author: Eliseo Hernandez Luna
|| Description: Membership point calculator
||
||
/*---+--------------------------+ */


//includes
#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes
void rewardPtsStandard(double monthlyPurchases);
void rewardPtsPlus(double monthlyPurchases);
void rewardPtsPremium(double monthlyPurchases);

int main() //begin main
{
	//declarations
	int membershipType = 0;
	double monthlyPurchases = 0;


	//input
	do {
		cout << "Please enter your membership type Standard = 1; Plus = 2; Premium = 3:";
		cin >> membershipType;

		if (membershipType < 1 || membershipType >3)
			cout << "Please enter a number from 1 to 3 for your membership" << endl;

	} while (membershipType < 1 || membershipType > 3);

	cout << "Please enter your total monthly purchases ($): ";
	cin >> monthlyPurchases;

	//processing
	cout << fixed << setprecision(0);

	if (membershipType == 1) //standard membership
		rewardPtsStandard(monthlyPurchases);

	else if (membershipType == 2) //plus membership
		rewardPtsPlus(monthlyPurchases);

	else if (membershipType == 3) //premium membership
		rewardPtsPremium(monthlyPurchases);


	//output

	return 0;

}   //end of main function

//function declarations
void rewardPtsStandard(double monthlyPurchases) //standard membership points calculations
{
	double points = 0;

	if (monthlyPurchases < 75)
		points = monthlyPurchases * 0.05;
	else if (monthlyPurchases < 150)
		points = monthlyPurchases * 0.075;
	else
		points = monthlyPurchases * 0.10;

	cout << "Reward points earned: " << points << endl;
}
void rewardPtsPlus(double monthlyPurchases) //plus membership points calculations
{
	double points = 0;

	if (monthlyPurchases < 150)
		points = monthlyPurchases * 0.06;
	else
		points = monthlyPurchases * 0.13;

	cout << "Reward points earned: " << points << endl;
}
void rewardPtsPremium(double monthlyPurchases) //premium membership points calculations
{
	double points = 0;

	if (monthlyPurchases < 200)
		points = monthlyPurchases * 0.04;
	else
		points = monthlyPurchases * 0.15;

	cout << "Reward points earned: " << points << endl;
}