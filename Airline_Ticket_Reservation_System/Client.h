#pragma once
#include<iostream>

class Client
{

private:

	int seatsNum;
	std::string name;
	std::string ID;
	std::string phoneNum; // string -> regex -> 11 number

	std::string availableCountries[10] = {
		"Emirates", "America", "England", "Brazil", "China",
		"France", "Egypt", "Saudi Arabia", "Germany", "Russia"
	};

	std::string fromCountry;
	std::string toCountry;
	std::string flightType; // Round-trip or One-way ticket
	std::string plan;

	

public:
	
	Client(); // Constractor

	// Setters
	void setSeatsNum();
	void setName();
	void setID();
	void setPhoneNum();
	void setFromCountry();
	void setToCountry();
	void setFlightType();
	void setPlan();
	void chooseSeat();


	// Getters


	// Functions
	



};

