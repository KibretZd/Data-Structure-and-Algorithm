#include <iostream>
// Include the string library
#include <string>

using namespace std;
#include"student.h"
#include"students.h"

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


int main () 
{

   cout<<"Test Student class"<<endl;
   Student student;

   Students studentList;

   for (short i = 0; i < 3; i++)
   {
      student.setFirstName(readString("First Name"));
      student.setLastName(readString("Last Name"));
      student.setIdNumber(readString("ID Number"));
      student.setAge(readAge("Age"));
      student.setPhoneNumber(readPhoneNumber("Phone Number"));
      student.setDepartment(readString("Department"));

      studentList.add(student);
   }

   studentList.traverse();
   studentList.printByDepartment("CS");
   return 0;
}