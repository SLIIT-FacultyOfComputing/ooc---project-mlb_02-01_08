#include <iostream>
#include "User.h"
using namespace std;

class Developer : public User
{
private:
    char developername[20];
public:
    Developer(char developername ,char fName[], char lName[], char Email[], char pw[], char devName[]);
    char uploadApp();
    char updateApp();
    char deleteApp();

    ~Developer();
};
