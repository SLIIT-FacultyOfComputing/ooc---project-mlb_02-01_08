
class advertisement{
  private:
 int date;
 int  advertisementID;
 char duration[25];
 

public:
//constructor
advertisement();
advertisement(int ad_date,int advertisement_ID, char ad_duration[] );

void setadvertisementDetails(int ad_date,int advertisement_ID, char ad_duration[]);
void displayadvertisementDetails();
//destructor
~advertisement();


};
