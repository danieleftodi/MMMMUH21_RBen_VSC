#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class ATM
{
private:
	int loggedInAccountLocation;
	double accountBalance;
	double beginningBalance;
	double depositAmount;
	double withdrawalAmount;
	string username;
	string password;
	string loginUsername;
	string loginPassword;
	int last;
public:
	friend void Menu();
	void CreateNewAccount(string newUsername, string newPassword);//creates the user account
	void AccountLogin(string loginUsername, string loginPassword);//used to login the user using account details
	void DepositMoney(double depositAmount);//func to deposit any amount of money to the account
	void WithdrawMoney(double withdrawalAmount);//func to withdraw any amount of money from the account
	void SetAccountLogin(int setAccountLocation);//sets the location for the account information in the vector
	void SetBeginningBalance(int accountID);//Func that ensures the users account starts as 0 as well as that it updates when performing withdrawal or deposit
	void SetLastOperation(int accountID, char userInput);//defines last action made by user
	void AccountMenu();//representing the menu of user choices
	int GetAccountLogin() const;//makes sure the account login is in the list
	double GetAccountBalance(int accountID) const;//shows the users account balance
	double GetBeginningBalance(int accountID) const;//retrieves the balance before last performed action
	char GetLastOperation(int accountID) const;//gets the last action, ex withdrawal or deposit
	string GetUsername(int accountID) const;//gets the username of the logged in account
};

ATM account;
vector<ATM> users;
void Menu()
{
	char userInput;
	string loginUsername, loginPassword, newUsername, newPassword;
	cout << "\t******Welcome to Lund center ATM*******" << endl;
	cout << "Please select an option from menu below " << endl;
	cout << " l-> Login" << endl;
	cout << " c-> Create New Account" << endl;
	cout << " q-> Quit" << endl;
	cin >> userInput;;
	switch (userInput)
	{
	case 'l': account.AccountLogin(loginUsername, loginPassword); break;
	case 'c':
	{
		cout << "Enter your user name:" << endl;
		cin >> newUsername;
		cout << "Enter your passoword: " << endl;
		cin >> newPassword;
		users.push_back(account);
		account.CreateNewAccount(newUsername, newPassword);
		cout << "**************************************************************************" << endl;
		cout << "congratulation you have new account please login with your new credentials" << endl;
		cout << "**************************************************************************" << endl;
		Menu();
		break;
	}
	case 'q':exit(1); break;
	default:
		cout << "\t**************************" << endl;
		cout << "\tInvalid choice test agian" << endl;
		cout << "\t*************************" << endl;
		Menu();
	}
}
void ATM::CreateNewAccount(string newUsername, string newPassword)
{
	int ID = users.size();
	users.at(ID - 1).username = newUsername;
	users.at(ID - 1).password = newPassword;
	users.at(ID - 1).accountBalance = 0;
}
void ATM::AccountLogin(string loginUsername, string loginPassword)
{
	int ID = users.size();
	int setAccountLocation = 0;
	bool successlogin = false;
	cout << "Enter Username: " << endl;
	cin >> loginUsername;
	cout << "Enter Password: " << endl;
	cin >> loginPassword;
	for (int i = 0; i < ID; i++)
	{
		if ((loginUsername == users.at(i).username) && (loginPassword == users.at(i).password))
		{
			successlogin = true;
			setAccountLocation = i;
		}
	}
	if (successlogin == true)
	{
		cout << "********************" << endl;
		cout << "Access Granted..." << loginUsername << endl;
		cout << "********************" << endl;
		SetAccountLogin(setAccountLocation);
		AccountMenu();
	}
	if (successlogin != true)
	{
		cout << "*****************************************************************************" << endl;
		cout << "Access Denied.....Invalid Username/Password: Test again or create new account" << endl;
		cout << "*****************************************************************************" << endl;
		Menu();
	}
}
void ATM::DepositMoney(double depositAmount)//func to deposit any amount of money to the account
{
	users.at(loggedInAccountLocation).accountBalance += depositAmount;
	users.at(loggedInAccountLocation).beginningBalance = users.at(loggedInAccountLocation).accountBalance - depositAmount;
	return;
}
void ATM::WithdrawMoney(double withdrawalAmount)//func to withdraw any amount of money from the account
{
	users.at(loggedInAccountLocation).accountBalance -= withdrawalAmount;
	users.at(loggedInAccountLocation).beginningBalance = users.at(loggedInAccountLocation).accountBalance + withdrawalAmount;
	return;
}
void ATM::SetLastOperation(int accountID, char userInput)
{
	users.at(loggedInAccountLocation).last = userInput;
}
void ATM::SetAccountLogin(int setAccountLocation)
{
	loggedInAccountLocation = setAccountLocation;
}
void ATM::SetBeginningBalance(int accountID)
{
	users.at(accountID).beginningBalance = users.at(loggedInAccountLocation).accountBalance;
}
void ATM::AccountMenu()
{
	char userInput;
	cout << " d-> Deposit Money" << endl;
	cout << " w-> Withdraw Money" << endl;
	cout << " r-> Request Balance" << endl;
	cout << " z-> logout" << endl;
	cout << " q-> Quit" << endl;
	cin >> userInput;
	switch (userInput)
	{
	case 'd':
	{
		cout << "Amount to be Deposited: " << endl;
		cin >> depositAmount;
		DepositMoney(depositAmount);
		SetLastOperation(GetAccountLogin(), userInput);
		AccountMenu();
		break;
	}
	case 'w':
	{
		cout << "Amount of withdrawal: " << endl;
		cin >> withdrawalAmount;
		if (withdrawalAmount > users.at(loggedInAccountLocation).accountBalance)
		{
			cout << "**********************************************************" << endl;
			cout << "you have little money in your account exit or deposit money" << endl;
			cout << "**********************************************************" << endl;
			AccountMenu();
		}
		else
		{
			WithdrawMoney(withdrawalAmount);
			SetLastOperation(GetAccountLogin(), userInput);
			AccountMenu(); break;
		}
	}
	case 'r':
	{
		cout << "******************" << endl;
		cout << "Beginning Balance: " << users.at(loggedInAccountLocation).beginningBalance << endl;
		if ((GetLastOperation(GetAccountLogin()) == 'd') && (depositAmount > 0))
		{
			cout << "Deposit Amount: " << depositAmount << endl;
		}
		if ((GetLastOperation(GetAccountLogin()) == 'w') && (withdrawalAmount > 0))
		{
			cout << "Withdraw Amount: " << withdrawalAmount << endl;
		}
		cout << "Your Balance is: " << users.at(loggedInAccountLocation).accountBalance << endl;
		cout << "******************" << endl;
		AccountMenu();
		break;
	}
	case 'z':Menu(); break;
	case 'q':exit(1); break;
	default:
		cout << "\t**************************" << endl;
		cout << "\tInvalid choice test agian" << endl;
		cout << "\t*************************" << endl;
		AccountMenu();
	}
}
double ATM::GetAccountBalance(int accountID) const
{
	return users.at(loggedInAccountLocation).accountBalance;
}
double ATM::GetBeginningBalance(int accountID) const
{
	return users.at(accountID).beginningBalance;
}
int ATM::GetAccountLogin() const
{
	return loggedInAccountLocation;
}
char ATM::GetLastOperation(int accountID) const
{
	return users.at(accountID).last;
}
string ATM::GetUsername(int accountID) const
{
	return users.at(GetAccountLogin()).username;
}



int main() {

	Menu();
}

