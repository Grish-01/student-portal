#include <iostream>
#include <string>

bool validateCredentials(const std::string& user, const std::string& pass) {
    return !user.empty() && pass.length() >= 6;
}

void showLoginPrompt() {
    std::cout << "Please enter your username and password." << std::endl;
}

bool authenticateUser(const std::string& user, const std::string& pass) {
    showLoginPrompt();
    if (validateCredentials(user, pass)) {
        std::cout << "Login successful." << std::endl;
        return true;
    }
    std::cout << "Login failed." << std::endl;
    return false;
}
