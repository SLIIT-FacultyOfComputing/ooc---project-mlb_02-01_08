=#include <iostream>
#include <string.h>
#include "NewsFeed.h"
#include "User.h"
using namespace std;

User::User()
{
    strcpy(firstName, "");
    strcpy(lastName, "");
    strcpy(email, "");
    strcpy(password, "");
}

User::User(char fName[], char lName[], char Email[], char pw[])
{
    strcpy(firstName, fName);
    strcpy(lastName, lName);
    strcpy(email, Email);
    strcpy(password, pw);
    
}
void User::setUserDetail(char fName[], char lName[], char Email[], char pw[])
{ 
    strcpy(firstName, fName);
    strcpy(lastName, lName);
    strcpy(email, Email);
    strcpy(password, pw);
    

}

void User::editProfile()
{
}
void User::viewNewsFeed(NewsFeed*newsfeed)
{
}

User::~User()
{
}
