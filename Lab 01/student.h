
class Student{


        string first_name;
        string last_name;
        string department;
        string id_no;
        char sex;
        unsigned int phone_Number;
        unsigned short  int age;

    public:
        Student(string first_name = "", string last_name = "", string id_no = "", 
            unsigned short  int age = 18, string department = "", 
            unsigned int phone_Number = 0)
         {
            this->first_name = first_name;
            this->last_name = last_name;
            this->id_no = id_no;
            this->age = age;
            this->department = department;
            this->phone_Number = phone_Number;
        }

        void setFirstName(string first_name);
        void setLastName(string last_name);
        void setIdNumber(string id_no);
        void setAge(unsigned short int age=18);
        void setPhoneNumber(unsigned int phone_Number);
        void setDepartment(string department)
        {
            this->department = department;
        }

        string getFirstName();
        string getLastName();
        string getDepartment();
        unsigned short int getAge();
        unsigned int getPhoneNumber();
        string getIdNumber(); 

        void printStudent();
};

void Student ::setFirstName(string first_name)
{
    this->first_name = first_name;
}

void Student ::setLastName(string last_name)
{
    this->last_name = last_name;
}

void Student ::setIdNumber(string id_no)
{
    this->id_no = id_no;
}

void Student :: setPhoneNumber(unsigned int  phone_Number)
{
    this->phone_Number = phone_Number;
}

void Student :: setAge(unsigned short int age)
{
   this->age = age;
}


string Student :: getFirstName()
{
   return this->first_name;
}

string Student :: getLastName()
{
   return this->last_name;
}

string Student :: getDepartment()
{
   return this->department;
}

unsigned short int Student :: getAge()
{
   return this->age;
}

unsigned int Student :: getPhoneNumber()
{
   return this->phone_Number;
}

string Student :: getIdNumber()
{
   return this->id_no;
}

void Student :: printStudent(){
   cout<<this->first_name<<"\t" <<this->last_name<<"\t"<<this->id_no<<"\t"
        <<this->age<<"\t"<<this->department<<"\t"<<this->phone_Number<<endl;
}