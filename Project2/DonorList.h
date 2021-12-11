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

#ifndef DONORLIST_H
#define DONORLIST_H

#include <set>

class DonorList : public DonorType
{
public:
	DonorList();

	void addDonor(const std::string& newFirstName = " ",
		const std::string& newLastName = " ", int newMembershipNo = 0,
		double newAmountDonated = 0.0);

	int getNoOfDonors() const;
	double getTotalDonations() const;
	double getHighestDonation() const; 

	bool isEmpty() const;

	bool searchID(int membershipNo) const;

	void deleteDonor(int membershipNo);

	void printAllDonors() const;
	void printAllDonations() const;

	void clearList();

	~DonorList();

	DonorList(const DonorList& listToCopy);					
	DonorList& operator=(const DonorList& listToCopy);		

private:
	std::set<DonorType>* donorList;

};

#endif
