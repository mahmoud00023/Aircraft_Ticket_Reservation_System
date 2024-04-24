#include "Client.h"

Client::Client()
{
	std::cout << "============ PHOENIX ============\n\n";
	setName();
	setID();
	setPhoneNum();
	setFromCountry();
	setToCountry();


}



void Client::setName()
{
	std::cout << "Enter your name : ";
	std::string name;
	std::cin >> name;
	this->name = name;
}

void Client::setID()
{
	std::cout << "Enter your ID : ";
	std::string ID;
	std::cin >> ID;
	this->ID = ID;
}

void Client::setPhoneNum()
{
	std::cout << "Enter your phone number : ";
	std::string phoneNum;
	std::cin >> phoneNum;
	this->phoneNum = phoneNum;
}

void Client::setFromCountry()
{
	std::cout << "\nWhich country will you start from? :-\n\n";
	for (int i = 0; i <= 8; i+=2)
	{
		std::cout << i + 1 << '.' << availableCountries[i];
		
		// Optimizing number of spaces between countries
		for (int j = 0; j < 14 - availableCountries[i].length(); j++) {
			std::cout << ' ';
		}
		std::cout << i + 2 << '.' << availableCountries[i + 1];
		
		std::cout << '\n';
	}
	std::cout << std::endl;
	std::cout << "Choose a country : ";
	static short fromCountryNum;
	std::cin >> fromCountryNum;
	while (fromCountryNum < 1 || fromCountryNum > 10) {
		std::cout << "Invalid number!\n";
		std::cout << "Choose a country between (1,10) : ";
		std::cin >> fromCountryNum;
		std::cout << std::endl;
	}
	this->fromCountry = availableCountries[fromCountryNum - 1];

	std::cout << fromCountry << '\n';
}

void Client::setToCountry()
{

	// Getting from country 
	short fromCountryIndex{};
	for (int i = 0; i < 10; i++)
	{
		if (availableCountries[i] == fromCountry) {
			fromCountryIndex = i;
			break;
		}
	}


	std::cout << "\nWhich country will you go to? :-\n\n";
	// Reserved country
	short isReserved = 0; // x is bool to indicate if from country reserved
	for (int i = 0; i <= 9; i += 2)
	{

		// Check if the from country reserved
		if(fromCountryIndex == i){
			i++;
			isReserved++;
		}
		std::cout << i + 1 - isReserved << '.' << availableCountries[i];

		// Check if the from country reserved
		if (fromCountryIndex == i + 1) {
			i++;
			isReserved++;
		}

		if (i != 9) {

			// Optimizing number of spaces between countries
			for (int j = 0; j < 14 - availableCountries[i].length(); j++) {
				std::cout << ' ';
			}

			std::cout << i + 2 - isReserved << '.' << availableCountries[i + 1];
		}

		std::cout << '\n';
	}
	std::cout << std::endl;
	std::cout << "Choose a country : ";
	short toCountryNum;
	std::cin >> toCountryNum;
	while (toCountryNum < 1 || toCountryNum > 9) {
		std::cout << "Invalid number!\n";
		std::cout << "Choose a country between (1,9) : ";
		std::cin >> toCountryNum;
		std::cout << std::endl;
	}

	// Optimizing to country number after adding reserved from country
	if (toCountryNum >= fromCountryIndex + 1) {
		this->toCountry = availableCountries[toCountryNum];
	}
	else {
		this->toCountry = availableCountries[toCountryNum - 1];
	}

	std::cout << toCountry << '\n';
}

void Client::setFlightType()
{
}

void Client::setPlan()
{
}

void Client::setChairsNum()
{
}



std::string Client::getName()
{
	return std::string();
}

std::string Client::getID()
{
	return std::string();
}

std::string Client::getPhoneNum()
{
	return std::string();
}

std::string Client::getFromCountry()
{
	return std::string();
}

std::string Client::getToCountry()
{
	return std::string();
}

std::string Client::getFlightType()
{
	return std::string();
}

std::string Client::getPlan()
{
	return std::string();
}

short Client::getChairsNum()
{
	return 0;
}
