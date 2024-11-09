#include "User.h"

User::User() : account(""), password(""), gmail(""), full_name(""), role(2) {}

User::User(const string& account, const string& password, const string& gmail, const string& full_name, int role)
    : account(account), password(password), gmail(gmail), full_name(full_name), role(role) {}

string User::getAccount() const {
    return account;
}

void User::setAccount(const string& acc) {
    account = acc;
}

string User::getPassword() const {
    return password;
}

void User::setPassword(const string& pass) {
    password = pass;
}

string User::getGmail() const {
    return gmail;
}

void User::setGmail(const string& mail) {
    gmail = mail;
}

string User::getFullName() const {
    return full_name;
}

void User::setFullName(const string& name) {
    full_name = name;
}

int User::getRole() const {
    return role;
}

void User::setRole(int r) {
    role = r;
}

bool User::isRole(int roleToCheck) const {
    return role == roleToCheck;
}

bool User::authenticate(const string& acc, const string& pass) const {
    return (account == acc && password == pass);
}

void User::displayInfo() const {
    cout << "Account: " << account << "\n"
         << "Full Name: " << full_name << "\n"
         << "Gmail: " << gmail << "\n"
         << "Role: " << (role == 1 ? "Admin" : "Normal User") << endl;
}

void User::inputInfo() {
    cout << "Enter account: ";
    getline(cin, account);

    cout << "Enter password: ";
    getline(cin, password);

    cout << "Enter gmail: ";
    getline(cin, gmail);

    cout << "Enter full name: ";
    getline(cin, full_name);

    cout << "Enter role (1 = Admin, 2 = Normal User): ";
    cin >> role;
    cin.ignore(); // Bỏ qua ký tự xuống dòng còn lại trong bộ đệm
}
