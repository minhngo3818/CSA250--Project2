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
		// Method 1: use operator= of STL<set>
		*donorList = *(listToCopy.donorList);
		// => This may lead to shallow copy
		// => Testing: In Progress

		// Method 2: use iterator & functions of STL<set>
		// In Process
	}
}

