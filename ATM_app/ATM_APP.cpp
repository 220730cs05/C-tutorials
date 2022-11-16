// ATM_APP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void ShowMenu() {
	cout << "**********MENU**********" << endl << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "0. Quit" << endl << endl;
	cout << "************************" << endl;
}


void main()
{
	int option;
	double balance = 512.204;
	int usersPin = 7777, pin, errorCounter = 0;
	do {
		cout << "Pin: ";
		cin >> pin;
		if (usersPin != pin)
			cout << "Incorrect pin! Enter again.\n";
		errorCounter++;
	} while (errorCounter < 3 && pin != usersPin);

	system("cls");

	if (errorCounter < 3)
		ShowMenu();
	else
		cout << "Blocked!\n";
	
	
	do
	{ 
		
		cout << "Option: ";
		cin >> option;

		system("cls");

		ShowMenu();

		switch (option)
		{
		case 1:
			cout << "Balance: $" << balance << endl;
			break;
		case 2:
			cout << "Deposit amount: ";
			double deposit;
			cin >> deposit;
			if (deposit > 0)
				balance += deposit;
			else
				cout << "Error!";
			break;
		case 3:
			cout << "Withdraw amount: ";
			double withdraw;
			cin >> withdraw;
			if (withdraw < balance)
				balance -= withdraw;
			else
				cout << "Not enough money!";
			break;
		case 0:
			system("cls");
			cout << "Thank you for using our services." << endl;
			break;
		default:
			cout << "You have entered wrong digit. Please use again.";
			break;
		}
		cout << endl;

	} while (option != 0);

	system("pause>0");
}

