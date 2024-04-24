#pragma once
#include<iostream>

class Client
{

private:
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
	short chairsNum;

public:
	
	Client(); // Constractor

	// Setters
	void setName();
	void setID();
	void setPhoneNum();
	void setFromCountry();
	void setToCountry();
	void setFlightType();
	void setPlan();
	void setChairsNum();

	// Getters
	std::string getName();
	std::string getID();
	std::string getPhoneNum();
	std::string getFromCountry();
	std::string getToCountry();
	std::string getFlightType();
	std::string getPlan();
	short getChairsNum();

	// Functions
	



};

