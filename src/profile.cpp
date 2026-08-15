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

bool validateProfileData(const std::string& name, const std::string& email) {
    bool hasAt = email.find('@') != std::string::npos;
    return !name.empty() && hasAt;
}

bool updateEmail(UserProfile& profile, const std::string& newEmail) {
    if (newEmail.find('@') == std::string::npos) {
        std::cout << "Invalid email format." << std::endl;
        return false;
    }
    profile.email = newEmail;
    std::cout << "Email updated successfully." << std::endl;
    return true;
}

void editProfile(UserProfile& profile, const std::string& newName, const std::string& newEmail) {
    if (validateProfileData(newName, newEmail)) {
        profile.name = newName;
        updateEmail(profile, newEmail);
        std::cout << "Profile updated." << std::endl;
    } else {
        std::cout << "Profile update failed: invalid data." << std::endl;
    }
}
