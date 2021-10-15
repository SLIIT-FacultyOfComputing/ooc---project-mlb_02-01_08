#include"advertiser.h"
#include"advertisement.h"
 

 

advertiser::advertiser(){
  AD[0]=new advertisement(0,0,0);
  AD[1]=new advertisement(0,0,0);
   //.......
};

advertiser::advertiser(int date1,int adID1,char duration1[]){
   AD[0]=new advertisement(date1, adID1,duration1 );
   AD[1]=new advertisement(date1, adID1,duration1);
  };

