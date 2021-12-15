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

#include "DonorType.h"

#include <iostream>
#include <iomanip>
using namespace std;

DonorType::DonorType() : amountDonated(0.0) {}

DonorType::DonorType(const string& newFirstName, 
	const string& newLastName,int newMembershipNo, 
	double newAmountDonated)
	: MemberType(newFirstName, newLastName, newMembershipNo)
{
	amountDonated = newAmountDonated;
}

void DonorType::setDonorInfo(const string& newFirstName, 
	const string& newLastName,int newMembershipNo, 
	double newAmountDonated)
{
	setMemberInfo(newFirstName, newLastName, newMembershipNo);
	amountDonated = newAmountDonated;
}

void DonorType::setAmountDonated(double newAmountDonated)
{
	amountDonated = newAmountDonated;
}

double DonorType::getAmountDonated() const
{
	return amountDonated;
}

void DonorType::printDonor() const
{
	printMemberInfo();
}

void DonorType::printDonation() const
{
	cout << getLastName() << ", " << getFirstName() 
		<<"\n    Donation amount: $" 
		<< setprecision(2) << fixed << amountDonated << endl;
}

bool DonorType::operator<(const DonorType& otherDonor) const
{
	return getMembershipNo() < otherDonor.getMembershipNo();
}

bool DonorType::operator==(int comparedMemberNo) const
{
	return getMembershipNo() == comparedMemberNo;
}

DonorType::~DonorType() {}
