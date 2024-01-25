
#include <iostream>
#include <map>
#include <string>

class DragReductionSimulator {
public:
    DragReductionSimulator(double baseDrag) : baseDragCoefficient(baseDrag) {}

    void applyStrategy(const std::string& strategy, double improvement) {
        double newDragCoefficient = baseDragCoefficient * (1 - improvement);
        strategies[strategy] = newDragCoefficient;
    }

    void simulateImpact() {
        for (const auto& strategy : strategies) {
            std::cout << "Strategy: " << strategy.first << std::endl;
            std::cout << "New Drag Coefficient: " << strategy.second << std::endl;
            // Here, you can add calculations for vehicle speed and fuel efficiency improvements
            std::cout << std::endl;
        }
    }

private:
    double baseDragCoefficient;
    std::map<std::string, double> strategies; // Strategy name and its new drag coefficient
};

int main() {
    DragReductionSimulator simulator(0.3); // Example base drag coefficient

    // Apply different drag reduction strategies
    simulator.applyStrategy("Vortex Generators", 0.05);
    simulator.applyStrategy("Underbody Panels", 0.07);
    simulator.applyStrategy("Rear Diffuser Adjustment", 0.04);

    simulator.simulateImpact();

    return 0;
}
