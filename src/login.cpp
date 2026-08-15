#include <iostream>
#include <string>

bool validateCredentials(const std::string& user, const std::string& pass) {
    return !user.empty() && pass.length() >= 6;
}
