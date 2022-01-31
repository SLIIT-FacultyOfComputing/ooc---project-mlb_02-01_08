#include <iostream>
#include <string>
#define SIZE 10
using namespace std;

class User;
class App;

class User
{
private:
	string firstname;
	string lastname;
	string email;
	string password;
	App* app[SIZE];
	int noOfApps;

public:
	User();
	User(string fname, string lname, string pemail, string pPassword);
	void editProfile();
	void addApp(App* A);
	void displayUser();
	~User();
};

class App
{
private:
	string AppID;
	string appName;
	string reviews;
	double price;
	User* user;

public:
	App(string pAppID, string pappName, string previews, double pprice, User*puser);
	void displayApps();
};

App::App(string pAppID, string pappName, string previews, double pprice, User* puser)
{
	AppID = pAppID;
	appName = pappName;
	reviews = previews;
	price = pprice;
	user = puser;
	user->addApp(this);
}

void App::displayApps()
{
	cout << "AppID = " << AppID << endl;
	cout << "AppName =" << appName << endl;
	if (price<1)
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

User::User(string fname, string lname, string pemail, string pPassword)
{
	firstname = fname;
	lastname = lname;
	email = pemail;
	password = pPassword;
	noOfApps = 0;
}

void User::addApp(App* A)
{
	if (noOfApps < SIZE)
		app[noOfApps] = A;
	noOfApps++;
}

void User::displayUser()
{
	cout << "User First Name =" << firstname << endl;
	cout << "Last name =" << lastname << endl;
	cout << "e-mail : " << email << endl;
	cout << "Password : " << password << endl;

	for (int i = 0; i < noOfApps; i++)
	{
		app[i]->displayApps();
	}
}

int main()
{
	char ua;
	User* U1 = new User("Perera", "HTR", "pererahtr@gmail.com", "Perera123#");
	User* U2 = new User("Sakuni", "samara", "sakusamara@gmail.com", "Ssamra123#");
	App* A1 = new App("A001", "Facebook", "Positive", 0.00, U1);
	App* A2 = new App("A002", "NewStates", "Good", 5.00, U2);
	cout << "Apps of" << endl;
	U1->displayUser();
	U2->displayUser();
	cin >> ua;
}