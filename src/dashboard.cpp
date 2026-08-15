#include <iostream>
#include <vector>

struct StatEntry {
    std::string label;
    int value;
};

void loadDashboard() {
    std::cout << "Loading dashboard..." << std::endl;
}

void displayStats(const std::vector<StatEntry>& stats) {
    for (const auto& stat : stats) {
        std::cout << stat.label << ": " << stat.value << std::endl;
    }
}

int refreshWidgets(int widgetCount) {
    std::cout << "Refreshing " << widgetCount << " widgets..." << std::endl;
    return widgetCount;
}
