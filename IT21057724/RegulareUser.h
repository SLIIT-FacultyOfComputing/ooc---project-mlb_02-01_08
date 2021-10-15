#include <iostream>
#include"User.h"
#include"Payment.h"
using namespace std;


class RegulareUser : public User
{
private:
    char userName[50];
    
    

public:
    RegulareUser();
    RegulareUser(char uName[], char fName[], char lName[], char Email[], char pw[]);
    void downloadApp(char appName[]);
    int buyApp(char userName[],Payment*p);
    int rateForApp();
    int reportApp();
    ~RegulareUser();
};
