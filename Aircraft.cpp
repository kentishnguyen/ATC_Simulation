#include <iostream>
#include "Aircraft.hpp"
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

Aircraft::Aircraft() : callSign(""), state(""), x(0.0), y(0.0), z(0.0), speed(0.0), heading(0.0), rate(0.0)
{};

Aircraft::Aircraft(string id, string State, double X, double Y, double Z, double Speed, double Heading, double Rate) : callSign(id), state(State), x(X), y(Y), z(Z), speed(Speed), heading(Heading), rate(Rate) {};

Aircraft::~Aircraft() {};

string Aircraft::getCallSign() const
{
	return callSign;
}

string Aircraft::getState() const
{
	return state;
}

double Aircraft::getX() const
{
	return x;
}

double Aircraft::getY() const
{
	return y;
}

double Aircraft::getZ() const
{
	return z;
}

double Aircraft::getSpeed() const
{
	return speed;
}

double Aircraft::getHeading() const
{
	return heading;
}

double Aircraft::getRate() const
{
	return rate;
}

void Aircraft::updatePosi(double time) // time in minutes
{
	double distance_travelled = speed * time; // knots
	x += cos((heading * PI) / 180.0) * distance_travelled;
	y += sin((heading * PI) / 180.0) * distance_travelled;
	z += rate * time;
}

void Aircraft::updateState(const string& newState)
{
	state = newState;
}

void Aircraft::changeHeading(double newHeading)
{
	heading = newHeading;
}

void Aircraft::changeAltitude(double newAltitude)
{
	z = newAltitude;
}

void Aircraft::displayStatus() const
{
	cout << "Call sign: " << callSign << endl;
	cout << "Current position: " << x << " x " << y << endl;
	cout << "Altitude: " << z << endl;
	cout << "Speed: " << speed << endl;
	cout << "Heading: " << heading << endl;
	cout << "Climb rate: " << rate << endl;
	cout << "State: " << state << endl << endl;
}

//int main()
//{
//	Aircraft plane1("AC64", 2, 4, 12000, 800, 90, 1100);
//	plane1.updatePosi(12);
//	plane1.changeAltitude(30000);
//	plane1.changeHeading(180);
//	plane1.updatePosi(10);
//	plane1.displayStatus();
//
//	return 0;
//}