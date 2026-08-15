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

bool updatePreference(std::map<std::string, std::string>& settings,
                       const std::string& key, const std::string& value) {
    if (settings.find(key) == settings.end()) {
        std::cout << "Unknown setting: " << key << std::endl;
        return false;
    }
    settings[key] = value;
    std::cout << key << " updated to " << value << std::endl;
    return true;
}

void resetToDefaults(std::map<std::string, std::string>& settings) {
    settings["theme"] = "light";
    settings["notifications"] = "enabled";
    std::cout << "Settings reset to defaults." << std::endl;
}

void saveSettings(const std::map<std::string, std::string>& settings) {
    std::cout << "Saving " << settings.size() << " settings..." << std::endl;
    for (const auto& pair : settings) {
        std::cout << "  " << pair.first << " = " << pair.second << std::endl;
    }
}
