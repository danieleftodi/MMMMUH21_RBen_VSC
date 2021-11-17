#include <iostream>								
#include <string>


using namespace std;

class ATM
{
private:
	int loggedInAccountLocation;
	double accountBalance = 0;
	double beginningBalance = 0;
	double lastMoneyMovement;
	char lastOperation;
	double depositAmount;
	double withdrawalAmount;
	string username = "sami";
	string password = "1234";
	string loginUsername;
	string loginPassword;

public:
	void CreateNewAccount()	//creates the user account
	{
		cout << "Enter your user name:" << endl;
		cin >> username;
		cout << "Enter your passoword: " << endl;
		cin >> password;
		cout << "**************************************************************************" << endl;
		cout << "congratulation you have new account please login with your new credentials" << endl;
		cout << "**************************************************************************" << endl;
		GetAccountLogin();
	}
	void AccountLogin()	//used to login the user using account details
	{

		cout << "Enter Username: " << endl;
		cin >> loginUsername;

		if (loginUsername == username)
		{
			cout << "Enter Password: " << endl;
			cin >> loginPassword;

			if (loginUsername == username)
			{
				if (loginPassword == password)
				{
					cout << "********************" << endl;
					cout << "Access Granted..." << loginUsername << endl;
					cout << "********************" << endl;
					AccountMenu();
				}
				if (loginPassword != password)
					cout << "*****************************************************************************" << endl;
				cout << "Access Denied.....Invalid Username/Password: Test again or create new account" << endl;
				cout << "*****************************************************************************" << endl;
				GetAccountLogin();
			}
		}
	}
	void DepositMoney()//func to deposit any amount of money to the account
	{
		cout << "Amount to be Deposited: " << endl;
		cin >> depositAmount;
		accountBalance += depositAmount;
		beginningBalance = accountBalance - depositAmount;
		AccountMenu();
	}
	void WithdrawMoney()//func to withdraw any amount of money from the account
	{
		cout << "Amount of withdrawal: " << endl;
		cin >> withdrawalAmount;
		accountBalance -= withdrawalAmount;
		beginningBalance = accountBalance + withdrawalAmount;
		AccountMenu();
	}
	void SetAccountLogin()//sets the location for the account information in the vector
	{

	}
	void SetLastMoneyMovement()//sets what the last action was for that account (dep or withdr)
	{

	}
	void SetBeginningBalance()//Func that ensures the users account starts as 0 as well as that it updates when performing withdrawal or deposit
	{

	}
	void SetLastOperation()//defines last action made by user
	{

	}
	int GetAccountLogin()//makes sure the account login is in the lis
	{
		char val;
		cout << "\t******Welcome to Lund center ATM*******" << endl;
		cout << "Please select an option from menu below " << endl;
		cout << " l-> Login" << endl;
		cout << " c-> Create New Account" << endl;
		cout << " q-> Quit" << endl;
		cin >> val;
		switch (val)
		{
		case 'l':AccountLogin(); break;
		case 'c':CreateNewAccount(); break;
		case 'q':exit(1); break;
		default:
			cout << "\t**************************" << endl;
			cout << "\tInvalid choice test agian" << endl;
			cout << "\t*************************" << endl;
			GetAccountLogin();
		}

	}
	double GetLastMoneyMovement()//gets the information on most recently performed transaction
	{

	}
	double GetAccountBalance()//shows the users account balance
	{
		cout << "********************" << endl;
		cout << "Beginning Balance: " << beginningBalance << endl;
		cout << "Your Balance is: " << accountBalance << endl;
		cout << "********************" << endl;
		AccountMenu();
		return 0;
	}
	double GetBeginningBalance()//retrieves the balance before last performed action
	{

	}
	char GetLastOperation()//gets the last action, ex withdrawal or deposit
	{

	}
	string GetUsername()//gets the username of the logged in account
	{

	}
	void AccountMenu()//representing the menu of user choices
	{
		char alphabet;
		cout << " d-> Deposit Money" << endl;
		cout << " w-> Withdraw Money" << endl;
		cout << " r-> Request Balance" << endl;
		cout << " z-> logut" << endl;
		cout << " q-> Quit" << endl;
		cin >> alphabet;
		switch (alphabet)
		{
		case 'd':DepositMoney(); break;
		case 'w':WithdrawMoney(); break;
		case 'r':GetAccountBalance(); break;
		case 'z':GetAccountLogin(); break;
		case 'q':exit(1); break;
		default:
			cout << "\t**************************" << endl;
			cout << "\tInvalid choice test agian" << endl;
			cout << "\t*************************" << endl;
			GetAccountLogin();
		}
	}


};


//int main()
//{
//	ATM user;
//	user.GetAccountLogin();
//
//
//}
