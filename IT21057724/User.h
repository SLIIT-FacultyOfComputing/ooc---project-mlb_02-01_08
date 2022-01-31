#include <iostream>
#include "App.h"
#include "NewsFeed.h"
using namespace std;
#define SIZE 10

class User
{
protected:
    char firstName[50];
    char lastName[50];
    char email[50];
    char password[50];
    App * app[SIZE];

public:
    User();
    User(char fName[], char lName[], char Email[], char pw[]);
    void setUserDetail(char fName[], char lName[], char Email[], char pw[]);
    void editProfile();
    void viewNewsFeed(NewsFeed * newsfeed);
    ~User();
};