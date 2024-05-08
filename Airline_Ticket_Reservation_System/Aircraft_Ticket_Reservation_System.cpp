
#include <iostream>
#include "Client.h"
#include "Manger.h"
using namespace std;

// Functions



int main()
{

	cout << "--------- <<< WELCOME TO PHOENIX AIRCRAFT TICKET RESERVATION SYSTEM >>> ---------" << endl << endl << endl;

	// Taking homepage choices
	int choice;
	cout << "*** PLEASE SELECT YOUR STATUS ***" << endl << endl;;
	cout << "1.BOOK A TICKET      2.MANAGER" << endl;
	cout << "ENTER YOUR CHOOES: ";
	cin >> choice;
	cout << endl;	
	
	cout << endl;
	do {
		switch (choice)
		{
		case 1:
			new Client();
			break;
		case 2:
			new Manger();
			break;
			
		default:
			cout << "INVALID NUMBER!" << endl;
			cout << "CHOSSE A NUMBER BETWEEN { 1 , 2 }: " ;
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 0:
				ExitPhoenix();
			case 1:
				new Client();
				break;
			case 2:
				new Manger();
				break;
			}
		}
	} while (choice < 1 || choice > 2);
	
}

