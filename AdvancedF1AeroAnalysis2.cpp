
#include <iostream>
#include <vector>
#include <string>

// Structure to store aerodynamic data for a component of an F1 vehicle
struct AeroData {
    std::string componentName;
    double dragCoefficient;
    double liftCoefficient;
    double area;
};

// Class to analyze and compare aerodynamic data
class AeroAnalysis {
public:
    AeroAnalysis(const std::vector<AeroData>& data) : aeroData(data) {}

    void analyzeData() {
        for (const auto& data : aeroData) {
            std::cout << "Component: " << data.componentName << std::endl;
            std::cout << "Drag Coefficient: " << data.dragCoefficient << std::endl;
            std::cout << "Lift Coefficient: " << data.liftCoefficient << std::endl;
            std::cout << "Area: " << data.area << " m^2" << std::endl;
            std::cout << std::endl;
        }
    }

    // Additional analysis functions can be added here

private:
    std::vector<AeroData> aeroData;
};

int main() {
    // Different sample data for F1 vehicle aerodynamics components
    std::vector<AeroData> components = {
        {"Sidepod", 0.85, 1.1, 1.4},
        {"Floor", 0.65, 2.1, 2.5},
        {"Bargeboard", 0.75, 1.7, 1.0},
        {"Engine Cover", 0.55, 1.2, 1.3}
    };

    AeroAnalysis analysis(components);
    analysis.analyzeData();

    // Additional analyses can be performed here

    return 0;
}
