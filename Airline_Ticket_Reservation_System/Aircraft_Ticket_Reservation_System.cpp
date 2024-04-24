
#include <iostream>
#include "Client.h"
#include "Manger.h"

// Functions



int main()
{

	std::cout << "\nWelcome to PHOENIX Aircraft Ticket Reservation Program!\n\n";
	std::cout << "============ PHOENIX ============\n\n";

	// Taking homepage choices
	std::cout << "1.Book a Ticket      2.Manger\n";
	std::cout << std::endl;
	std::cout << "Your Choice: ";
	short choice;
	std::cin >> choice;
	std::cout << std::endl;
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
			std::cout << "Invalid number!\n";
			std::cout << "Choose a number between (1,2) : ";
			std::cin >> choice;
			std::cout << std::endl;
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

