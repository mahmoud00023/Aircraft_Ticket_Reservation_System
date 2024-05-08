#include "Client.h"
using namespace std;

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
		setFlightType();
		setPlan();
		chooseSeat();

		


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
	int choose_type;
	string flight_Type;
	std::cout << "Choose your flight type : " << std::endl;
	std::cout << "1) One-way          2) Round-trip" << std::endl;
	std::cout << "Enter your choose : ";
	std::cin >> choose_type;
	if (choose_type == 1)
	{
		flight_Type = "One_way";
		std::cout << "One_way" << std::endl;
		std::cout << "\n====================== PHOENIX ======================\n";
	}
	else if (choose_type == 2)
	{
		flight_Type = "Round-trip";
		std::cout << "Round-trip" << std::endl;
		std::cout << "\n====================== PHOENIX ======================\n";
	}
	this->flight_Type = flight_Type;
}

void Client::setPlan()
{
      int PLAN;
	int plan1 = 7500;
	int plan2 = 10000;
	int plan3 = 15000;
	int plan4 = 25000;

	if (flight_type == "One-way")
	{

		cout << "                 --> CHOOSE THE PLAN YOU WANT FOR ONE-WAY <--                " << endl << endl << endl;

		cout << "   *********************************     *********************************   " << endl;
		cout << "   *                               *     *                               *   " << endl;
		cout << "   *           PLAN ( 1 )          *     *           PLAN ( 2 )          *   " << endl;
		cout << "   *       { ECONOMY CLASS }       *     *   { PREMIUM ECONOMY CLASS }   *   " << endl;
		cout << "   *                               *     *                               *   " << endl;
		cout << "   *    7,500 LE   --->   150 $    *     *    10,000 LE   --->   200 $   *   " << endl;
		cout << "   *                               *     *                               *   " << endl;
		cout << "   *********************************     *********************************   " << endl << endl << endl;

		cout << "   *********************************     *********************************   " << endl;
		cout << "   *                               *     *                               *   " << endl;
		cout << "   *           PLAN ( 3 )          *     *           PLAN ( 4 )          *   " << endl;
		cout << "   *      { BUSINESS CLASS }       *     *        { FIRST CLASS }        *   " << endl;
		cout << "   *                               *     *                               *   " << endl;
		cout << "   *    15,000 LE   --->   300 $   *     *    25,000 LE  --->   500 $    *   " << endl;
		cout << "   *                               *     *                               *   " << endl;
		cout << "   *********************************     *********************************   " << endl << endl << endl;

		cout << "Enter your plan number : ";
		cin >> PLAN;
		while (PLAN < 0 || PLAN > 4)
		{
			cout << "Invalid number, Enter your plan number again : ";
			cin >> PLAN;
		}

		switch (PLAN)
		{
		case 1:
			PLAN = plan1;
			cout << endl << "{ ECONOMY CLASS } The price is : " << plan1 << " LE" << endl;
			break;
		case 2:
			PLAN = plan2;
			cout << endl << "{ PREMIUM ECONOMY CLASS } The price is : " << plan2 << " LE" << endl;
			break;
		case 3:
			PLAN = plan3;
			cout << endl << "{ BUSINESS CLASS } The price is : " << plan3 << " LE" << endl;
			break;
		case 4:
			PLAN = plan4;
			cout << endl << "{ PREMIUM ECONOMY CLASS } The price is : " << plan4 << " LE" << endl;
			break;
		default:
			cout << "Invalid number, Please try a again" << endl;
			cin >> PLAN;
			break;
		}
	}
	else if (flight_type == "Round-trip")
	{

	    cout << "                 --> CHOOSE THE PLAN YOU WANT FOR ROUND-TRIP <--                " << endl << endl << endl;
	    
	    cout << "   *********************************     *********************************   " << endl;
	    cout << "   *                               *     *                               *   " << endl;
	    cout << "   *           PLAN ( 1 )          *     *           PLAN ( 2 )          *   " << endl;
	    cout << "   *       { ECONOMY CLASS }       *     *   { PREMIUM ECONOMY CLASS }   *   " << endl;
	    cout << "   *                               *     *                               *   " << endl;
	    cout << "   *    15,000 LE   --->   300 $   *     *    20,000 LE   --->   400 $   *   " << endl;
	    cout << "   *                               *     *                               *   " << endl;
	    cout << "   *********************************     *********************************   " << endl << endl << endl;
	    
	    cout << "   *********************************     *********************************   " << endl;
	    cout << "   *                               *     *                               *   " << endl;
	    cout << "   *           PLAN ( 3 )          *     *           PLAN ( 4 )          *   " << endl;
	    cout << "   *      { BUSINESS CLASS }       *     *        { FIRST CLASS }        *   " << endl;
	    cout << "   *                               *     *                               *   " << endl;
	    cout << "   *    30,000 LE   --->   600 $   *     *    50,000 LE  --->  1,000 $   *   " << endl;
	    cout << "   *                               *     *                               *   " << endl;
	    cout << "   *********************************     *********************************   " << endl << endl << endl;

        cout << "Enter your plan number : ";
        cin >> PLAN;
        while (PLAN < 0 || PLAN > 4)
        {
            cout << "Invalid number, Enter your plan number again : ";
            cin >> PLAN;
        }
	    
        switch (PLAN)
        {
        case 1:
            PLAN = plan1;
            cout << endl <<"{ ECONOMY CLASS } The price is : " << plan1 * 2 << " LE" << endl;
            break;
        case 2:
            PLAN = plan2;
            cout << endl << "{ PREMIUM ECONOMY CLASS } The price is : " << plan2 * 2 << " LE" << endl;
            break;
        case 3:
            PLAN = plan3;
            cout << endl << "{ BUSINESS CLASS } The price is : " << plan3 * 2 << " LE" << endl;
            break;
        case 4:
            PLAN = plan4;
            cout << endl << "{ PREMIUM ECONOMY CLASS } The price is : " << plan4 * 2 << " LE" << endl;
            break;
        default:
            cout << "Invalid number, Please try a again" << endl;
            cin >> PLAN;
            break;
        }
	}
	
}

void Client::chooseSeat()
{
	int seat;
	cout << endl;
	cout << "                             ----> CHOOSE THE SEAT YOU WANT <----                         " << endl << endl << endl;


	cout << "   /                                                                                  \\  " << endl;
	cout << "  /                                                                                    \\  " << endl;
	cout << "  *                                                                                     *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *   |      1      |   |      2      |      .      |      3      |   |      4      |   *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *    \\___________/     \\___________/       .       \\___________/     \\___________/    *  " << endl;
	cout << "  *                                                                                     *  " << endl;
	cout << "  *                                                                                     *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *   |      5      |   |      6      |      .      |      7      |   |      8      |   *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *    \\___________/     \\___________/       .       \\___________/     \\___________/    *  " << endl;
	cout << "  *                                                                                     *  " << endl;
	cout << "  *                                                                                     *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *   |      9      |   |      10     |      .      |      11     |   |     12      |   *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *    \\___________/     \\___________/       .       \\___________/     \\___________/    *  " << endl;
	cout << "  *                                                                                     *  " << endl;
	cout << "  *                                                                                     *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *   |      13     |   |      14     |      .      |      15     |   |     16      |   *  " << endl;
	cout << "  *   |             |   |             |      .      |             |   |             |   *  " << endl;
	cout << "  *    \\___________/     \\___________/       .       \\___________/     \\___________/    *  " << endl;
	cout << "  *                                                                                     *   " << endl;
	cout << "   \\                                                                                   /  " << endl;
	cout << "    \\                                                                                 /  " << endl << endl;

	cout << "Enter your seat number : ";
	cin >> seat;

	while (seat < 0 || seat > 16)
	{
		cout << "SORRY, INVALID SEAT NUMBER, TRY ENTER THE SEAT NUMBER AGAIN: " << endl;
		cin >> seat;
	}
	this-> seat = seat;
	cout << "DONE, WE SAVE YOUR ANSWER" << endl << endl;
	cout << "\n==================================== PHOENIX ====================================\n";
}




