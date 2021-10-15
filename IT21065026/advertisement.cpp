#include"advertisement.h"
#include<cstring>


advertisement::advertisement(int ad_date,int advertisement_ID, char ad_duration[] )
{
date=ad_date;
advertisementID=advertisement_ID;
 strcpy(duration,ad_duration);
};