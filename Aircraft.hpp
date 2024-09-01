#pragma once

#include <string>
using namespace std;

class Aircraft {
private:
	string callSign;
	string state; // either on the ground or in the sky
	double x, y, z; // x, y: degree, z: ft (feet)
	double speed; // knots
	double heading; // degree
	double rate; // feet/min

public:
	Aircraft();
	Aircraft(string, string, double, double, double, double, double, double);

	~Aircraft();

	string getCallSign() const;
	string getState() const;
	double getX() const;
	double getY() const;
	double getZ() const;
	double getSpeed() const;
	double getHeading() const;
	double getRate() const;

	void updateState(const string&);
	void updatePosi(double);

	void changeHeading(double);
	void changeAltitude(double);

	void displayStatus() const;
};