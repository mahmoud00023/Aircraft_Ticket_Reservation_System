#pragma once
#include<iostream>
#include<vector>

class Client
{

private:

	int seatsNum;
	static std::vector <std::string> name;
	static std::vector <std::string> id;
	static std::vector <std::string> phoneNum; // string -> regex -> 11 number

	std::string availableCountries[10] = {
		"Emirates", "America", "England", "Brazil", "China",
		"France", "Egypt", "Saudi Arabia", "Germany", "Russia"
	};

	static std::vector <std::string> fromCountry;
	static std::vector <std::string> toCountry;
	static std::vector <std::string> flightType; // Round-trip or One-way ticket
	static std::vector <std::string> plan;

	

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

