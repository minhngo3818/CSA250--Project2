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

#include "DonorList.h"

#include <iostream>
#include <algorithm>
using namespace std;

DonorList::DonorList()
{
	donorList = new set<DonorType>;
}

void DonorList::addDonor(const string& newFirstName,
	const string& newLastName, int newMembershipNo, 
	double newAmountDonated)
{
	donorList->insert(DonorType(newFirstName, newLastName,
		newMembershipNo, newAmountDonated));
}

int DonorList::getNoOfDonors() const
{
	return static_cast<int>(donorList->size());
}

double DonorList::getTotalDonations() const
{
	double sum = 0.0;
	for (auto elem : *donorList)
		sum += elem.getAmountDonated();
	return sum;
}

double DonorList::getHighestDonation() const
{
	double max = 0.0;
	for (auto elem : *donorList)
	{
		if (max < elem.getAmountDonated())
			max = elem.getAmountDonated();
	}
	return max;
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
}

void DonorList::printAllDonors() const
{
	for (auto elem : *donorList)
		elem.printMemberInfo();
}

void DonorList::printAllDonations() const
{
	for (auto elem : *donorList)
	{
		cout << "(" << elem.getMembershipNo() << ") ";
		elem.printDonation();
	}
}

void DonorList::clearList()
{
	donorList->clear();
}

DonorList::~DonorList()
{
	delete donorList;
	donorList = nullptr;
}
