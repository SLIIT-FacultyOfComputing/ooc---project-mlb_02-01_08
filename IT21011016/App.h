#include <iostream>
#include<string.h>
#define SIZE 10;
using namespace std;

class App
{
private:
	int AppID;
	char appName [10];
	char reviews [20];
	double price;
	User* user;
public:
	App(int pAppID,const char pappName[],const char previews[], double pprice, User* puser);
	void displayApps();
};

