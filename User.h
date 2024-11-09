#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
using namespace std;

class User {
private:
    string account;
    string password;
    string gmail;
    string full_name;
    int role; // 1 = admin, 2 = normal user

public:
    User();
    User(const string& account, const string& password, const string& gmail, const string& full_name, int role);

    // Getter và Setter
    string getAccount() const;
    void setAccount(const string& acc);

    string getPassword() const;
    void setPassword(const string& pass);

    string getGmail() const;
    void setGmail(const string& mail);

    string getFullName() const;
    void setFullName(const string& name);

    int getRole() const;
    void setRole(int r);

    bool isRole(int role) const;

    // Phương thức xác thực và hiển thị thông tin
    bool authenticate(const string& acc, const string& pass) const;
    void displayInfo() const;
    void inputInfo();
};

#endif // USER_H

