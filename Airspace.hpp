#pragma once
#include "Aircraft.hpp"
#include <vector>

using namespace std;

class Airspace {
private:
	char airspaceClass;
	double radius, height; // knots and feet 
	vector<Aircraft> aircrafts;
	
public:
	Airspace();
	Airspace(char, double, double);
	~Airspace();

	const double area();

	void addAircraft(const Aircraft&);
	void removeAircraft(const string&);


	vector<Aircraft> getAircrafts() const;

	void updateAllPosi(double);

	void displayAirspace();
};