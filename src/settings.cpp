#include <iostream>
#include <map>
#include <string>

std::map<std::string, std::string> loadSettings() {
    std::cout << "Loading settings..." << std::endl;
    std::map<std::string, std::string> settings;
    settings["theme"] = "light";
    settings["notifications"] = "enabled";
    return settings;
}
