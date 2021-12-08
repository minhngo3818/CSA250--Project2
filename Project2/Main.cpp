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
	/*DonorList list1;
	list1.addDonor("Jack", "Sparrow", 123456, 1000.00);
	list1.addDonor("Tony", "Stark", 123678, 10000000.00);
	list1.addDonor("Bruce", "Wayne", 123987, 2000000.00);
	list1.printAllDonors();
	list1.printAllDonations();*/
	/*
	* Please delete below tests before submitting project 2
	*
				Test copy functions
	cout << "--------Test Copy Constructor---------\n";
	//--------------------------------------
	//			Test Result
	// Case list having 0 element: passed
	// Case list having 1 element: passed
	// Case list having more than 1: passed
	// -------------------------------------

	DonorList list1;
	list1.addDonor("Jack", "Sparrow", 123456, 1000.00);
	list1.addDonor("Tony", "Stark", 123678, 10000000.00);
	list1.addDonor("Bruce", "Wayne", 123987, 2000000.00);
	list1.printAllDonors();

	cout << "    => After using copy constructor <=\n";
	DonorList list2(list1);
	list2.printAllDonors();
	cout << "--------End of testing copy constructor-------\n";

	cout << "\n\n--------Test Assignment Operator---------\n";
	//--------------------------------------
	//			Test Result
	// Case list3 having 0 element: passed
	// Case list3=list4 having 1 element: passed
	// Case list3<list4 having more than 1: passed
	// Case list3>list4 having more than 1: passed
	// -------------------------------------

	DonorList list3;
	list3.addDonor("Hawkeye", "Sparrow", 123456, 1000.00);
	list3.addDonor("Howard", "Stark", 123678, 10000000.00);
	list3.addDonor("Reed", "Wayne", 123987, 2000000.00);
	list3.addDonor("John", "Bushwack", 3458978, 300000.00);
	cout << "=====> Print list3\n";
	list3.printAllDonors();

	DonorList list4;
	list4.addDonor("Hallen", "Hayze", 897981, 100.00);
	list4.addDonor("Collen", "Josh", 898231, 200.00);
	list4.addDonor("Philly", "Atanoh", 898456, 300.00);
	list4.addDonor("Phoebe", "Jillen", 899123, 400.00);

	cout << "\n=====> Print list4\n";
	list4.printAllDonors();
	cout << endl;

	cout << "    => After using operator= <=\n";
	list3 = list4;
	cout << "=====> Print list3\n";
	list3.printAllDonors();

	cout << "\n=====> Print list4\n";
	list4.printAllDonors();

	cout << "\n    => empty list4 <=\n";
	cout << "=====> Print list3\n";
	list4.clearList();
	list3.printAllDonors();
	list4.printAllDonors();
	*/

	return 0;
}
