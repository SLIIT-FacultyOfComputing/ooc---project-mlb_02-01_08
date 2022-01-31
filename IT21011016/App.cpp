#include<iostream>
#include<string.h>
#include "App.h"

App::App(int pAppID, const char pappName[], const char previews[], double pprice, User* puser)
{
	AppID = pAppID;
	strcpy_s(appName, pappName);
	strcpy_s(reviews, previews);
	price = pprice;
	user = puser;
	user->addApp(this);
}

void App::displayApps()
{
	cout << "AppID = " << AppID << endl;
	cout << "AppName =" << appName << endl;
	if (price <= 1)
	{
		cout << "FREE APP" << endl;
	}
	else
	{
		cout << "$" << price << endl;
	}
	cout << reviews << endl;
	cout << "----------------------------------------" << endl;
}
