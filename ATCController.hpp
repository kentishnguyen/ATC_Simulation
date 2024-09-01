#pragma once
#include "Airspace.hpp"

class ATC {
private:
	Airspace airspace;

public:
	//ATC();
	ATC(const Airspace&);

	~ATC();

	void takeoffClearance(const string&);
	void landingClearance(const string&);
	void changeAircraftHeading(const string&, double);
	void changeAircraftAltitude(const string&, double);

	void controlAirspace();

};