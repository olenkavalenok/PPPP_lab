#include "Transport.h"




Train::Train()
{
	this->transportPrice = 200;
	this->transportSpeed = 100;
	this->transportVolume = 500;
	this->distance = 0;
}

Transport::Transport(std::tuple<int, int, double> tuple, int dist) {
	this->transportPrice = std::get<0>(tuple);
	this->transportSpeed = std::get<1>(tuple);
	this->transportVolume = std::get<2>(tuple);
	this->distance = dist;
}

Train::Train(std::tuple<int, int, double> tuple, int dist) : Transport(tuple, dist)
{
	
}

Train::~Train()
{

}

double Transport::sumCost(int mass, int dist)
{
	return (mass / transportVolume) * sumTime(dist) * transportPrice;
}

double Transport::sumTime(int dist)
{
	return dist / transportSpeed;
}

int Transport::getDistance()
{
	return this->distance;
}

Car::Car()
{
	this->transportPrice = 100;
	this->transportSpeed = 60;
	this->transportVolume = 50;
	this->distance = 0;
}

Car::Car(std::tuple<int, int, double> tuple, int dist) : Transport(tuple, dist)
{
	
}

Car::~Car()
{

}




Plane::Plane()
{
	this->transportPrice = 500;
	this->transportSpeed = 300;
	this->transportVolume = 100;
	this->distance = 0;
}

Plane::Plane(std::tuple<int, int, double> tuple, int dist) :Transport(tuple, dist)
{
	
}

Plane::~Plane()
{

}

