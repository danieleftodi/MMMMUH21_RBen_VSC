#include<iostream>
#include<string>
#include<vector>
using namespace std;


struct ATM

{
	void CreateNewAccount(string newUsername, string newPassword)
	{
		for (int i = 0; i < 2; i++)
		{

		}
	}
	void AccountLogin(string loginUsername, string loginPassword)
	{

	}
	void DepositMoney(double depositAmount)
	{

	}
	void WithdrawMoney(double withdrawalAmount)
	{

	}
	void SetAccountLogin(int setAccountLocation)
	{

	}
	void SetLastMoneyMovement(int accountID, double amount)
	{

	}
	void SetBeginningBalance(int accountID)
	{

	}
	void SetLastOperation(int accountID, char userInput)
	{

	}
	void AccountMenu()
	{

	}
	int GetAccountLogin() const
	{

	}
	double GetLastMoneyMovement(int accountID) const
	{

	}
	double GetAccountBalance(int accountID) const
	{

	}
	double GetBeginningBalance(int accountID) const
	{

	}
	char GetLastOperation(int accountID) const
	{

	}
	string GetUsername(int accountID) const
	{

	}
	int loggedInAccountLocation;
	double accountBalance;
	double beginningBalance;
	double lastMoneyMovement;
	char lastOperation;
	string username;
	string password;
};

//int main()
//{
//	string username;
//	string password;
//	cout << "Welcome to Lund center ATM" << endl;
//	cout << "Please select an option from menu below " << endl;
//	cout
//
//}