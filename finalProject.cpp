//============================================================================
// Name        : finalProject.cpp
// Author      : Hamad Ahmed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
using namespace std;

// Creates a clear screen void function.
void clearScreen() { // start clearScreen which clears the screen.
	for(int i = 0; i < 64; i++){
		cout<<endl;
	}
}// end clear screen

//====================================================================================================================

// creates a setData function that prompts for
void setData(string sfirstName[], string slastName[], int saccountNumber[], int spinNum[], int sBalance[], int SSIZE)
{//start setData
	for (int i = 0; i < SSIZE; i++)
	{
		cout << "Enter your first name: \n";
		cin >> sfirstName[i];
		cout << "Enter your last name: \n";
		cin >> slastName[i];
		cout << "Enter the account Number: \n";
		cin >> saccountNumber[i];
		cout << "Enter the pin number: \n";
		cin >> spinNum[i];
		cout << "Enter your balance: \n";
		cin >> sBalance[i];
		// clearScreen();
	}
}// end setData

//============================================================================

// Creates a display menu which will display the menu.
int displayMenu() {// start displayMenu
  int answer;
	cout <<"Welcome to Siesko's Automated Teller Machine" << endl;
	cout <<"Enter 1 - 4" << endl << endl;
	cout <<"1. Deposit" << endl;
	cout <<"2. Withdraw" << endl;
	cout <<"3. Check Account Balance" << endl;
	cout <<"4. Exit" << endl;
	cin >> answer;
	if (answer < 1 || answer > 4)
	{
		cout <<"Please enter a number between 1-4\n";
		cout <<"Press any key and enter to continue\n";
		cin.get();
		clearScreen();
		// if invalid run the function again
		displayMenu();
	}
	return answer;
}// end displayMenu

//=======================================================================================

// creates a login function that will check if the account number and pin number matches.
void login(int laccountNum[],int lpinNum[], int dsize)
{// start login()
	int accountNum, pinNum;
	cout << "Enter the account number: " << endl;
	cin >> accountNum;
	cout << "Enter the pin number: " << endl;
	cin >> pinNum;
	for (int i = 0; i < dsize; i++ ) {
		if (accountNum == laccountNum[i] && pinNum == lpinNum[i]) {
			cout << "Login Successful!" << endl;
		} else {
			cout << "Account not found!" << endl;
		}
	}
}// end login()

//============================================================================

// creates a deposit function that will deposit the money to the account.
void deposit(int daccountNum[], int dpinNum[], int ebalance[], int dsize)
{// start deposit()
	int deposit;
	cout << "How much would you like to deposit: \n";
	cin >> deposit;
	if (deposit < 0) {
		cout << "Invalid deposit!" << endl;
	} else {
		ebalance[dsize] = deposit + ebalance[dsize];
	}
	cout << "Your balance is: " << ebalance[dsize] << endl;

}// end deposit()

//===========================================================================================

// creates a withDraw function that will withdraw the valid amount of money from the account.
void withdraw(int waccountNum[], int wpinNum[], int wbalance[], int wsize)
{// start withdraw()
	int withdraw;
	cout << "Enter the amount you would like to withdraw: \n";
	cin >> withdraw;
	for (int i = 0; i < wsize; i++) {
		if (withdraw < 0 || withdraw > wbalance[i]) {
			cout << "Invalid Entry!" << endl;
		} else {
			wbalance[i] = wbalance[i] - withdraw;
			cout << "Your balance after the withdraw is: " << wbalance[i] << endl;
		}
	}
}//end withdraw()

//===============================================================================================

// Creates a checkAccount function that will the display the balance of the account.
void checkAccount(int caccountNum[], int cpinNum[], int cbalance[], int csize)
{// start checkAccount
	cout << "Your current account balance is: " << cbalance[csize] << endl;
}// end checkAccount

//===============================================================================================

// creates a executeAnswer function that will execute the function from the display menu.
void executeAnswer(int eanswer, int eaccountNum[], int epinNum[], int ebalance[], int esize)
{// start executeAnswer
	switch(eanswer) {
		case 1:
			deposit(eaccountNum, epinNum, ebalance, esize);
			break;
		case 2:
			withdraw(eaccountNum, epinNum, ebalance, esize);
			break;
		case 3:
			checkAccount(eaccountNum, epinNum, ebalance, esize);
			break;
	}
}//end executeAnswer

//====================================================================================

int main() {
	const int SIZE = 2;
	string fName[SIZE], lName[SIZE];
	int accountNum[SIZE], pinNum[SIZE], balance[SIZE];
	int index = -1;
	int answer = 0;

	setData(fName, lName, accountNum, pinNum, balance, SIZE);
	// login(accountNum, pinNum, SIZE);
	answer = displayMenu();

	while(answer != 4) {
		executeAnswer(answer, accountNum, pinNum, balance, SIZE);
		answer = displayMenu();
	}

	return 0;
}
