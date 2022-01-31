#include "NewsFeed.h"
#include<iostream>
#include<cstring>
using namespace std;

void NewsFeed::setNewsfeedDetails(int nID, const char nTopic[],int nDate, const char nDuration[])
{
  newsID = nID;
  strcpy(newsTopic, nTopic);
  date = nDate;
  strcpy(duration, nDuration);
}

void NewsFeed::displayNewsfeedDetails()
{
  cout << "News ID = " << newsID << endl;
  cout << "News Topic = " << newsTopic << endl;
	cout << "Date = " << date << endl;
	cout << "Duration = " << duration<< endl;
	cout << endl;
}