#include"advertisement.h"
#define SIZE 15;
class advertiser{
  private:
  advertisement*AD['SIZE'];
  char advertiserName;
  int advertiserID;
public:
//constructor
advertiser();
//overload constructor
advertiser(int date1,int adID1,char duration1[]);
void setAdvertiserDetails();
void DisplayAdvertiserDetails();
void uploadavdertisement();
void renewAdvertisement();
~advertiser();
};