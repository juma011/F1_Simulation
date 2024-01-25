
#include <iostream>
#include <vector>
#include <string>

// Structure to represent wind tunnel test data for a vehicle component
struct WindTunnelTestData {
    std::string componentName;
    double airSpeed; // Speed of air in m/s
    double airPressure; // Pressure in Pascal
    double dragForce; // Drag force in Newtons
};

// Class to analyze wind tunnel test data
class WindTunnelDataAnalyzer {
public:
    WindTunnelDataAnalyzer(const std::vector<WindTunnelTestData>& data) : testData(data) {}

    void analyzeData() {
        for (const auto& data : testData) {
            std::cout << "Component: " << data.componentName << std::endl;
            std::cout << "Air Speed: " << data.airSpeed << " m/s" << std::endl;
            std::cout << "Air Pressure: " << data.airPressure << " Pa" << std::endl;
            std::cout << "Drag Force: " << data.dragForce << " N" << std::endl;
            std::cout << std::endl;
        }
    }

    // Additional analysis functions can be added here

private:
    std::vector<WindTunnelTestData> testData;
};

int main() {
    std::vector<WindTunnelTestData> testDataSet = {
        {"Front Wing", 30.0, 101325, 500},
        {"Rear Wing", 30.0, 101325, 600},
        // Add more test data here
    };

    WindTunnelDataAnalyzer analyzer(testDataSet);
    analyzer.analyzeData();

    return 0;
}
