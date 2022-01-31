#include <iostream>
#include <string.h>
#include "RegulareUser.h"
using namespace std;

RegulareUser::RegulareUser()
{
    strcpy(userName, "");
}

RegulareUser::RegulareUser(char uName[], char fName[], char lName[], char Email[], char pw[]) : User(fName,lName,Email,pw){
    
    strcpy(userName,uName);
    
}

 int buyApp(char userName[],Payment*p){

     

 }
int rateForApp(){

}
int reportApp(){

}



RegulareUser::~RegulareUser(){

}