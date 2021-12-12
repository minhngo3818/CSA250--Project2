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

#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"

class DonorType : public MemberType
{
	public:
		DonorType();
		DonorType(const std::string& newFirstName, 
				const std::string& newLastName,
				int newMembershipNo, 
				double newAmountDonated);

		void setDonorInfo(const std::string& newFirstName, 
				const std::string& newLastName,
				int newMembershipNo, 
				double newAmountDonated);
		void setAmountDonated(double newAmountDonated);

		double getAmountDonated() const;

		void printDonor() const;
		void printDonation() const;

		~DonorType();
		
		bool operator<(const DonorType& otherDonor) const;
		bool operator==(int comparedMemberNo) const;

	private:
		double amountDonated;
};

#endif
