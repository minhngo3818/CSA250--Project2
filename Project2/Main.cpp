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

#include "Interface.h"
#include "InputHandler.h"

using namespace std;

int main()
{
	
	DonorList DList;
	getDonorData(DList);
	
	if (!DList.isEmpty())
	{
		displayMenu();
		processSelection(DList);
	}

	return 0;
}
