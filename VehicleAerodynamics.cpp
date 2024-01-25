
#include <iostream>
#include <cmath>

class VehicleAerodynamics {
public:
    VehicleAerodynamics(double area, double dragCoeff) : frontalArea(area), dragCoefficient(dragCoeff) {}

    double calculateDragForce(double airDensity, double velocity) {
        return 0.5 * airDensity * std::pow(velocity, 2) * dragCoefficient * frontalArea;
    }

private:
    double frontalArea;     // in square meters
    double dragCoefficient; // dimensionless
};

int main() {
    double airDensity = 1.225; // kg/m^3 (typical value at sea level)
    double velocity = 30.0;    // m/s (example velocity)

    VehicleAerodynamics vehicle(2.5, 0.3); // example area and drag coefficient values
    double dragForce = vehicle.calculateDragForce(airDensity, velocity);

    std::cout << "Calculated Drag Force: " << dragForce << " N" << std::endl;

    return 0;
}
