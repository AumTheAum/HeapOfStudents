#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
	month = 1;
	day = 1;
	year = 2000;
}

void Date::init(std::string dateString){
	std::stringstream converter;
	std::string sMonth;
	std::string sDay;
	std::string sYear;
	
	converter.str(dateString);
	getLine(converter, sMonth, '/');
	getLine(converter, sDay, '/');
	getLine(converter, sYear);
	converter.clear();
	converter.str(" ");
	converter << sMonth << " " << sDay << " " sYear;
	converter >> month >> day >> year;
	//mm/dd/yyyy
}

void Date::printDate(){
	std::cout << month << " " << day << " " << year << std::endl;
}

