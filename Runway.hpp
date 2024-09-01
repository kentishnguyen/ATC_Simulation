#pragma once
#include<string>

using namespace std;

class Runway {
private:
	bool status; // either active or inactive
	double length; // in meters
	bool ILSsupport; 
	int heading, counterHeading; 
	int ID; // runway number in an airport

public:
	Runway();
	Runway(bool, double, bool, int, int, int);
	~Runway();
		
	bool getStatus();
	double getLength();
	bool getILS();
	int getHeading();
	int getC_Heading();
	int getID();

	void setStatus(const bool&);
	void setCounterHeading();
};
