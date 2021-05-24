#include "TransportFabric.h"




Transport CarFabric::createDefaultTransport() {
	return Car();
}



Transport CarFabric::createCustomTransport(std::tuple<int, int, double> tuple, int dist) {
	return Car(tuple, dist);
}


Transport PlaneFabric::createDefaultTransport() {
	return Plane();
}

Transport PlaneFabric::createCustomTransport(std::tuple<int, int, double> tuple, int dist) {
	return Plane(tuple, dist);
}


Transport TrainFabric::createDefaultTransport() {
	return Train();
}

Transport TrainFabric::createCustomTransport(std::tuple<int, int, double> tuple, int dist) {
	return Train(tuple, dist);
}
