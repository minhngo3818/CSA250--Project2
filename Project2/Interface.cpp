/*
	Night Owls

	Breton, Liam (leader)
	Ta, Hoa
	Ngo, Minh
	Richardson, Nick
	Riana, Ali

	December 4, 2021

	CS A250
	Project 2
*/

#include "Interface.h"

#include <iostream>
#include <iomanip>
using namespace std;

void displayMenu()
{
	cout << "*************************************************\n"
		<< "                    MAIN MENU                    \n"
		<< "*************************************************\n\n"
		<< "Select one of the following:\n\n"
		<< "    1. Add a donor\n"
		<< "    2. Delete a donor\n"
		<< "    3. Print all donors\n"
		<< "    4. Print all donations\n"
		<< "    5. Print total donations\n"
		<< "    6. Print highest donation\n"
		<< "    7. To exit\n";
}

void addDonor(DonorList& aDonorList)
{
	string inputFirstName = "N/A";
	string inputLastName = "N/A";
	int inputMembershipNo = 0;
	double inputAmountDonated = 0.0;

	cout << "  => Enter donor's first name: ";
	cin >> inputFirstName;
	cout << "  => Enter donor's last name: ";
	cin >> inputLastName;
	cout << "  => Enter donor's membership number: ";
	cin >> inputMembershipNo;
	cout << "  => Enter amount donated: $ ";
	cin >> inputAmountDonated;
	
	if (aDonorList.searchID(inputMembershipNo))
	{
		cerr << "\n  => Member ID has been used.\n";
	}
	else
	{
		aDonorList.addDonor(inputFirstName, inputLastName,
			inputMembershipNo, inputAmountDonated);
		cout << "\n  => Donor has been added.\n";
	}
}

void deleteDonor(DonorList& aDonorList)
{
	if (aDonorList.isEmpty())
	{
		cerr << "The database has no donors.\n";
	}
	else
	{
		int inputMembershipNo = 0;
		cout << "  => Enter donor's membership number: ";
		cin >> inputMembershipNo;
		aDonorList.deleteDonor(inputMembershipNo);
		cout << "\n  => Donor has been deleted.\n";
	}
	
}

void printAllDonors(const DonorList& aDonorList)
{
	aDonorList.printAllDonors();
}

void printAllDonations(const DonorList& aDonorList)
{
	aDonorList.printAllDonations();
}

void printTotalDonations(const DonorList& aDonorList)
{
	cout << "     Total donations: $" << setprecision(2)
		<< fixed << aDonorList.getTotalDonations() << endl;
}

void printHighestDonation(const DonorList& aDonorList)
{
	cout << "     Highest donation: $" << setprecision(2)
		<< fixed << aDonorList.getHighestDonation() << endl;
}

void processSelection(DonorList& aDonorList)
{
	char userInput =- 'c';
	bool done = false;
	bool firstTime = true;

	while (!done)
	{

		if (!firstTime) 
			displayMenu();
		firstTime = false;
		cout << "\n  => Enter your selection: ";
		cin >> userInput;
		cout << endl;

		if (userInput == '7')
		{
			done = true;
			cout << "  => Thank you for visiting our site!\n";
		}
		else
		{
			if (userInput < '1' || userInput > '7')
			{
				cout << "  => Sorry. That is not a selection.\n";
			}
			else if (userInput >= '1' && userInput < '7')
			{

				if (userInput == '1')
				{
					addDonor(aDonorList);
				}
				else if (userInput == '2')
				{
					deleteDonor(aDonorList);
				}
				else if (userInput == '3')
				{
					printAllDonors(aDonorList);
				}
				else if (userInput == '4')
				{
					printAllDonations(aDonorList);
				}
				else if (userInput == '5')
				{
					printTotalDonations(aDonorList);
				}
				else
				{
					printHighestDonation(aDonorList);
				}
			}

			cout << "\n  => Would you like to continue? (y/n) ";
			cin >> userInput;
			cout << endl;

			if (userInput != 'y')
			{
				done = true;
				cout << "  => Thank you for visiting our site!\n";
			}
		}
	}
}
