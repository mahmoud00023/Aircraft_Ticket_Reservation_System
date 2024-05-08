
#include <iostream>
#include "Client.h"
#include "Manger.h"

// Functions

using namespace std;


int main()
{

	std::cout << "=========== WELCOME TO PHOENIX AIRCRAFT TICKET RESERVATION PROGRAM ===========" << endl << endl;

	// Taking homepage choices
	std::cout << "1.Book a Ticket      2.Manger\n";
	std::cout << std::endl;
	std::cout << "Your Choice: ";
	short choice;
	do {
		std::cin >> choice;
		std::cout << std::endl;
		switch (choice)
		{
		case 1:
			new Client();
			break;
		case 2:
			new Manger();
			break;
			
		default:
			std::cout << "Invalid number!\n";
			std::cout << "Choose a number between (1,2) : ";
		}
	} while (choice < 1 || choice > 2);
	
}

