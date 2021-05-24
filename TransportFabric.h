#pragma once
#include "Transport.cpp"
class TransportFabric
{
public:
	Transport createDefaultTransport() {};
	Transport createCustomTransport(std::tuple<int, int, double>, int) {};
};
class CarFabric : public TransportFabric {
	Transport createDefaultTransport();
	Transport createCustomTransport(std::tuple<int, int, double> tuple, int dist);
};
class PlaneFabric : public TransportFabric {
	Transport createDefaultTransport();
	Transport createCustomTransport(std::tuple<int, int, double> tuple, int dist);
};
class TrainFabric : public TransportFabric {
	Transport createDefaultTransport();
	Transport createCustomTransport(std::tuple<int, int, double> tuple, int dist);
};

