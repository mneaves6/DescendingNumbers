/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: DescendingNumbers
 * This program prompts the user to input three numbers and outputs
 * those numbers in descending order
 */

/*
 * Pseudo Code
 * dblAlpha
 * dblBravo
 * dblCharlie
 * Alpha > Bravo > Charlie
 * Alpha > Charlie > Bravo
 * Bravo > Alpha > Charlie
 * Bravo > Charlie > Alpha
 * Charlie > Alpha > Bravo
 * Charlie > Bravo > Alpha
 * Alpha = Bravo = Charlie
 * Alpha = Bravo > Charlie
 * Alpha > Bravo = Charlie
 * Alpha = Charlie > Bravo
 * Alpha > Charlie = Bravo
 * Bravo = Alpha > Charlie
 * Bravo > Alpha = Charlie
 * Bravo = Charlie > Alpha
 * Bravo > Charlie = Alpha
 * Charlie = Alpha > Bravo
 * Charlie > Alpha = Bravo
 * Charlie = Bravo > Alpha
 * Charlie > Bravo = Alpha
 */

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Variables
	double dblAlpha = 7;
	double dblBravo = 6;
	double dblCharlie = 5;

	// User Input
	cout << "Enter three numbers:" << endl;
	cin >> dblAlpha;
	cin >> dblBravo;
	cin >> dblCharlie;

	// Output
	cout << "Largest to Smallest" << endl;
	// Alpha > Bravo > Charlie
	if ((dblAlpha > dblBravo) && (dblBravo > dblCharlie))
	{
		cout << dblAlpha << " | " << dblBravo << " | " << dblCharlie << endl;
	}
	// Alpha > Charlie > Bravo
	else if ((dblAlpha > dblCharlie) && (dblCharlie > dblBravo))
	{
		cout << dblAlpha << " | " << dblCharlie << " | " << dblBravo << endl;
	}
	// Bravo > Alpha > Charlie
	else if ((dblBravo > dblAlpha) && (dblAlpha > dblCharlie))
	{
		cout << dblBravo << " | " << dblAlpha << " | " << dblCharlie << endl;
	}
	// Bravo > Charlie > Alpha
	else if ((dblBravo > dblCharlie) && (dblCharlie > dblAlpha))
	{
		cout << dblBravo << " | " << dblCharlie << " | " << dblAlpha << endl;
	}
	// Charlie > Alpha > Bravo
	else if ((dblCharlie > dblAlpha) && (dblAlpha > dblBravo))
	{
		cout << dblCharlie << " | " << dblAlpha << " | " << dblBravo << endl;
	}
	// Charlie > Bravo > Alpha
	else if ((dblCharlie > dblBravo) && (dblBravo > dblAlpha))
	{
		cout << dblCharlie << " | " << dblBravo << " | " << dblAlpha << endl;
	}
	// Alpha = Bravo = Charlie
	else if ((dblAlpha == dblBravo) && (dblBravo == dblCharlie))
	{
		cout << "They're all equal" << endl;
	}
	// Alpha = Bravo > Charlie
	else if ((dblAlpha == dblBravo) && (dblBravo > dblCharlie))
	{
		cout << dblAlpha << " | " << dblBravo << " | " << dblCharlie << endl;
	}
	// Alpha > Bravo = Charlie
	else if ((dblAlpha > dblBravo) && (dblBravo == dblCharlie))
	{
		cout << dblAlpha << " | " << dblBravo << " | " << dblCharlie << endl;
	}
	// Alpha = Charlie > Bravo
	else if ((dblAlpha == dblCharlie) && (dblCharlie > dblBravo))
	{
		cout << dblAlpha << " | " << dblCharlie << " | " << dblBravo << endl;
	}
	// Alpha > Charlie = Bravo
	else if ((dblAlpha > dblCharlie) && (dblCharlie == dblBravo))
	{
		cout << dblAlpha << " | " << dblCharlie << " | " << dblBravo << endl;
	}
	// Bravo = Alpha > Charlie
	else if ((dblBravo == dblAlpha) && (dblAlpha > dblCharlie))
	{
		cout << dblBravo << " | " << dblAlpha << " | " << dblCharlie << endl;
	}
	// Bravo > Alpha = Charlie
	else if ((dblBravo > dblAlpha) && (dblAlpha == dblCharlie))
	{
		cout << dblBravo << " | " << dblAlpha << " | " << dblCharlie << endl;
	}
	// Bravo = Charlie > Alpha
	else if ((dblBravo == dblCharlie) && (dblCharlie > dblAlpha))
	{
		cout << dblBravo << " | " << dblCharlie << " | " << dblAlpha << endl;
	}
	// Bravo > Charlie = Alpha
	else if ((dblBravo > dblCharlie) && (dblCharlie == dblAlpha))
	{
		cout << dblBravo << " | " << dblCharlie << " | " << dblAlpha << endl;
	}
	// Charlie = Alpha > Bravo
	else if ((dblCharlie == dblAlpha) && (dblAlpha > dblBravo))
	{
		cout << dblCharlie << " | " << dblAlpha << " | " << dblBravo << endl;
	}
	// Charlie > Alpha = Bravo
	else if ((dblCharlie > dblAlpha) && (dblAlpha == dblBravo))
	{
		cout << dblCharlie << " | " << dblAlpha << " | " << dblBravo << endl;
	}
	// Charlie = Bravo > Alpha
	else if ((dblCharlie == dblBravo) && (dblBravo > dblAlpha))
	{
		cout << dblCharlie << " | " << dblBravo << " | " << dblAlpha << endl;
	}
	// Charlie > Bravo = Alpha
	else if ((dblCharlie > dblBravo) && (dblBravo == dblAlpha))
	{
		cout << dblCharlie << " | " << dblBravo << " | " << dblAlpha << endl;
	}

    return 0;
}

