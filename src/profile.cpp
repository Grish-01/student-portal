#include <iostream>
#include <string>

struct UserProfile {
    std::string name;
    std::string email;
};

void viewProfile(const UserProfile& profile) {
    std::cout << "Name: " << profile.name << std::endl;
    std::cout << "Email: " << profile.email << std::endl;
}
