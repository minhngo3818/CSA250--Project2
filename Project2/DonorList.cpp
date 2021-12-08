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
#include <algorithm>

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
	return static_cast<int>(donorList->size());
}

double DonorList::getTotalDonations() const
{
	
}

double DonorList::getHighestDonation() const
{

}

bool DonorList::isEmpty() const
{
	return donorList->empty();
}

bool DonorList::searchID(int membershipNo) const
{
	return find(donorList->begin(), donorList->end(), 
		membershipNo) != donorList->end();
	
}

void DonorList::deleteDonor(int membershipNo)
{
	auto deleteElem = find(donorList->begin(), donorList->end(),
		membershipNo);
	if (deleteElem != donorList->end()) 
	{
		donorList->erase(deleteElem);
	}
	else {
		cout << "Donor is not in the list";
	}
}

void DonorList::printAllDonors() const
{
	
}

void DonorList::printAllDonations() const
{

}

void DonorList::clearList()
{
	donorList->clear();
}

DonorList::~DonorList()
{
	clearList();
	delete donorList;
}
