#include <iostream>
#include <string>

bool validateCredentials(const std::string& user, const std::string& pass) {
    return !user.empty() && pass.length() >= 6;
}

void showLoginPrompt() {
    std::cout << "Please enter your username and password." << std::endl;
}
