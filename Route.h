#pragma once
#include "Transport.h"
#include <list>
using std::list;
class Route
{
	double cost;
	double time;
	int volume;


public:
	Route();
	
	Route(Transport transport1, int volume);

	Route(Transport transport1, Transport transport2, Transport transport3, int volume);

	Route(Transport transport1, Transport transport2, Transport transport3, Transport transport4, Transport transport5, int volume);

	Route(Transport transport1, Transport transport2, Transport transport3, Transport transport4, Transport transport5, Transport transport6, Transport transport7, int volume);

	Route(Transport* transports, int volume);

	Route(list<Transport>, int);
	double getCost();
	~Route();
};

