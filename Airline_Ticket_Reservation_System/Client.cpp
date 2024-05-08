#include "Client.h"

Client::Client()
{
	std::cout << "====================== PHOENIX ======================\n\n";

	setSeatsNum();
	for (int i = 0; i < seatsNum; i++)
	{
		setName();
		setID();
		setPhoneNum();
		std::cout << "\n====================== PHOENIX ======================\n";
		setFromCountry();
		setToCountry();
		


	}
	

}

void Client::setSeatsNum()
{
	std::cout << "How many seats will you take: ";
	int seatNum;
	

	do
	{
		std::cin >> seatNum;
		if (seatNum < 1 || seatNum > 16) {
			std::cout << "You should choose a number between (1-16): ";
		}
		else {
			this->seatsNum = seatNum;
		}
	} while (seatNum < 1 || seatNum > 16);

}

void Client::setName()
{
	std::cout << "Enter your name : ";
	std::string name;
	std::cin >> name;
	this->id.push_back(name);
}

void Client::setID()
{
	std::cout << "Enter your ID : ";
	std::string id;
	std::cin >> id;
	this->id.push_back(id);
}

void Client::setPhoneNum()
{
	std::cout << "Enter your phone number : ";
	std::string phoneNum;
	std::cin >> phoneNum;
	this->id.push_back(phoneNum);
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
	this->fromCountry.push_back(availableCountries[fromCountryNum - 1]);

	std::cout << fromCountry.back() << '\n';
}

void Client::setToCountry()
{

	// Getting from country 
	short fromCountryIndex{};
	for (int i = 0; i < 10; i++)
	{
		if (availableCountries[i] == fromCountry.back()) {
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

		// Optimizing number of spaces between countries
		for (int j = 0; j < 14 - availableCountries[i].length(); j++) {
			std::cout << ' ';
		}

		// Check if the from country reserved
		if (fromCountryIndex == i + 1) {
			i++;
			isReserved++;
		}

		if (i != 9) {
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
		this->toCountry.push_back(availableCountries[toCountryNum]);
	}
	else {
		this->toCountry.push_back(availableCountries[toCountryNum - 1]);
	}

	std::cout << toCountry.back() << '\n';
}

void Client::setFlightType()
{

}

void Client::setPlan()
{
	
}

void Client::chooseSeat() {

}




