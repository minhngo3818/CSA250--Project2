/*
	Night Owls

	Breton, Liam (leader)
	Ta, Hoa
	Ngo, Minh
	Richardson, Nick
	Riana, Ali

	December 4, 2021

	CSA 250
	Project 2
*/

#include "DonorList.h"
#include "DonorType.h"

#include <iostream>
#include <set>
#include <string>

using namespace std;

DonorList::DonorList()
{
	donorList = new set<DonorType>;
}

/* Nick
* addDonor
* getNoOfDonors
* getTotalDonations
* getHighestDonation
* -------------------
* Riana
* isEmpty
* searchID
* deleteDonor
* -------------------
* Liam
* printAllDonors
* printAllDonations
* clearList
* Destructor
* -------------------
*/

void DonorList::addDonor(const string& newFirstName,
	const string& newLastName, int newMembershipNo, 
	double newAmountDonated)
{
	DonorType newDonor = DonorType(newFirstName, newLastName,
		newMembershipNo, newAmountDonated);
	
}

int DonorList::getNoOfDonors() const
{
	
}

double DonorList::getTotalDonations() const
{
	
}

double DonorList::getHighestDonation() const
{

}

bool DonorList::isEmpty() const
{

}

bool DonorList::searchID(int membershipNo) const
{
	
}

void DonorList::deleteDonor(int membershipNo)
{
	
}

void DonorList::printAllDonors() const
{
	
}

void DonorList::printAllDonations() const
{

}

void DonorList::clearList()
{
	
}

DonorList::~DonorList()
{
	clearList();
	delete donorList;
}
