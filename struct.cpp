#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

struct Account
{
	Account(const char *id, const char *n, int bal)
	{
		strcpy_s(account, id);
		strcpy_s(name, n);
		balance = bal;
	}
	void Print()
	{
		printf("°è ÁÂ : %s, ¼ÒÀ¯ÀÚ : %s",
			account, name);
		printf(", ÀÜ¾× : %i\n", balance);
	}

	void Deposit(int money)
	{
		balance += money;
	}

	void Withdraw(int money)
	{
		balance -= money;
	}

	char account[20];
	char name[20];
	int balance;
};

int main()
{
	char id[] = "120-345-129099";
	char name[] = "È«±æµ¿";
	Account hong = Account(id, name, 60000);
	hong.Withdraw(10000);
	hong.Print();
	return 0;
}
