#include "Airspace.hpp"
#include <vector>
using namespace std;

const double M_PI = 3.14159265358979323846;

Airspace::Airspace() : airspaceClass('A'), radius(0.0), height(0.0)
{};

Airspace::Airspace(char A_class, double r, double h) : airspaceClass(A_class), radius(r), height(h)
{};

Airspace::~Airspace() {};

void Airspace::addAircraft(const Aircraft& airplane) {
	aircrafts.push_back(airplane);
}

void Airspace::removeAircraft(const string& airplaneToRemove)
{
	aircrafts.erase(remove_if(aircrafts.begin(), aircrafts.end(), [&airplaneToRemove](const Aircraft& airplane) {
		return airplane.getCallSign() == airplaneToRemove; }), aircrafts.end());
}

vector<Aircraft> Airspace::getAircrafts() const
{
	return aircrafts;
}

void Airspace::updateAllPosi(double time) 
{
	vector<Aircraft>::iterator ptr;
	for (ptr = aircrafts.begin(); ptr < aircrafts.end(); ptr++)
	{
		ptr->updatePosi(time);
	}
}

const double Airspace::area()
{
	return M_PI * radius * radius;
}

void Airspace::displayAirspace()
{
	vector<Aircraft>::iterator point;
	for (point = aircrafts.begin(); point < aircrafts.end(); point++)
	{
		point->displayStatus();
	}
}

//int main()
//{
//	Airspace airspace1('A', 2, 60000);
//	Aircraft plane1("AC64", 2, 4, 12000, 800, 90, 1100);
//	Aircraft plane2("AC66", -2, -6, 32000, 880, 123, 900);
//	airspace1.addAircraft(plane1);
//	airspace1.addAircraft(plane2);
//	
//	airspace1.displayAirspace();
//
//	airspace1.updateAllPosi(12);
//
//	airspace1.displayAirspace();
//
//	airspace1.removeAircraft("AC64");
//
//	airspace1.displayAirspace();
//
//	return 0;
//}