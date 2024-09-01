#include "Runway.hpp"

Runway::Runway() : status(true), length(0.0), ILSsupport(true), heading(0), counterHeading(0), ID(0) {};

Runway::Runway(bool active, double l, bool ILS, int heading, int C_Heading, int id) : status(active), length(l), ILSsupport(ILS), heading(heading), counterHeading(C_Heading), ID(id) {};

Runway::~Runway() {};

bool Runway::getStatus()
{
	return status;
}

double Runway::getLength()
{
	return length;
}

bool Runway::getILS()
{
	return ILSsupport;
}

int Runway::getHeading()
{
	return heading;
}

int Runway::getC_Heading()
{
	return counterHeading;
}

int Runway::getID()
{
	return ID;
}

void Runway::setCounterHeading()
{
	if (heading >= 180)
	{
		counterHeading = heading - 180;
	}
	else
		counterHeading = heading + 180;
}

void Runway::setStatus(const bool& st)
{
	status = st;
}
