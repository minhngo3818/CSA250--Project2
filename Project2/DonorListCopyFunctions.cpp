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
using namespace std;

DonorList::DonorList(const DonorList& listToCopy)
{
	donorList = new set<DonorType>();
	*donorList = *(listToCopy.donorList);
}

DonorList& DonorList::operator=(const DonorList& listToCopy)
{
	if (&listToCopy == this)
	{
		cerr << "Attempt assignment to itself.";
	}
	else
	{
		*donorList = *(listToCopy.donorList);
	}

	return *this;
}

