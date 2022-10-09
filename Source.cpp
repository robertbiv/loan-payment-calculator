//----------------------------------------------------------
//  Name: Robert Bennethum
//  E-mail Address: rmb6287@psu.edu 
//  Class: CMPSC 121 
//  Project #19
//  Due Date: September 17, 2021
//  Brief Project Description: Summary of Loan Amount
//----------------------------------------------------------

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
	//initilize variables
	double L, interestRate, monthInterestRate, monthlyPayment, totalAmount, interestCost;
	int N;

	//Get inputs for the loan amount, interest ratem and the payment amount
	cout << "How much is the loan?: $";
	cin >> L; //loan amount
	cout << "What is the yearly interest rate? (decimal form): ";
	cin >> interestRate; // interest rate	
	cout << "How many monthly payments do you have?: ";
	cin >> N; //amount of payments

	//Set output to only show hundreths
	cout.precision(2);
	
	//Calculate Data Points
	monthInterestRate = interestRate / 12; //Find the monthly interest
	monthlyPayment = ((monthInterestRate * pow(1 + monthInterestRate, N)) / (pow(1 + monthInterestRate, N) - 1)) * L; //Find monthly cost
	totalAmount = monthlyPayment * N; //Find total price by finding payment cost times payments
	interestCost = totalAmount - L; //Find how much interest cost by taking final price and subtracting the amount the loan was cut for

	//Output
	cout << "Loan Amount: " << fixed << setw(30) << "$ " << L << endl;
	cout << "Monthly Interest Rate: "<< fixed << setw(21) << int(monthInterestRate * 100) << "%" << endl;
	cout << "Number of Payments: "<< fixed << setw(25) << N << endl;
	cout << "Monthly Payment: "<< fixed << setw(26) << "$ " << monthlyPayment << endl;
	cout << "Amount Paid Back: "<< fixed << setw(25) << "$ " << totalAmount << endl;
	cout << "Interest Paid: "<< fixed << setw(28) << "$ " << interestCost << endl;
	
	
	
	return 0;
}