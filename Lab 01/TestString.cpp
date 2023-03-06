#include <iostream>
// Include the string library
#include <string>

using namespace std;
#include"student.h"

string readString( string msg)
{
   string text;
   cout<<msg<<": ";
   getline(cin, text);   
   return text;
}

unsigned int readPhoneNumber(string msg)
{
   unsigned int number;
   cout<<msg<<": ";
   cin>>number;
   cin.ignore();
   return number;
}

unsigned short int readAge(string msg)
{
   unsigned short int number;
   cout<<msg<<": ";
   cin>>number;
   cin.ignore();
   return number;
}


int main () {

   cout<<"Test Student class"<<endl;
   Student st1;
   st1.setFirstName(readString("First Name"));
   st1.setLastName(readString("Last Name"));
   st1.setIdNumber(readString("ID Number"));
   st1.setAge(readAge("Age"));
   st1.setPhoneNumber(readPhoneNumber("Phone Number"));
   st1.setDepartment(readString("Department"));

   st1.printStudent();

   return 0;
}