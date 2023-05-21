class Students
{
    Student stList[10];
    int count;
    public:
        Students(){
            count = 0;
        }
        void add(Student student, unsigned int index = -1);
        void remove(string id_no);
        int searchByIdNo(string id_no);
        void printByDepartment(string department);
        void update(Student student);
        void traverse();
};


void Students :: add(Student student, unsigned int index) 
{
    if(index == -1) 
    {       //Inserting an Element to a the end of the list
        this->stList[count++] = student;
    }
    else{     
        /* To insert a key element to a specific position in a linear array, 
        at first, it needed to move each element from the back up one position 
        until getting the specified position.
        */
        int i = this->count;
        while (i > index)
        {
            this->stList[i+1] = this->stList[i];
            i--;
        }
        this->stList[index] = student;  //Inserting an Element to a Specific Position
        this->count++;
    }
}

void Students :: remove(string id_no)
{
    bool isFound = false;
    unsigned short int i = 0;
    while(i < this->count) 
    {
        if(this->stList[i].getIdNumber() == id_no){
            isFound = true;
            break;
        }
        i++;
    }

    if(isFound){
        cout<<"The following student is deleted from the list "<<endl;
        this->stList[i].printStudent();
        while(i < count)
        {
            this->stList[i] = this->stList[i+1]; 
            i++;
        }
        
    }
    else {
        cout<<"No student found with id number "<<id_no<<endl;
    }
    
}

int Students :: searchByIdNo(string id_no)
{
    for (unsigned short int i = 0; i < this->count; i++){
        if(this->stList[i].getIdNumber() == id_no) {
            cout<<"\n____________________________________________________________________________________"<<endl;
            cout<<"Search is successful."<<endl;
            cout<<"\nFirst Name \t"<<this->stList[i].getFirstName()
                <<"\nLast Name \t"<<this->stList[i].getLastName()
                <<"\nID No. \t"<<this->stList[i].getIdNumber()
                <<"\nAge \t"<<this->stList[i].getAge()
                <<"\nDepartment\t"<<this->stList[i].getDepartment()
                <<"\nPhone No: "<<this->stList[i].getPhoneNumber()
                <<endl<<endl;
            cout<<"Student is found at position "<<(i+1)<<" in the list."<<endl;
            cout<<"\n____________________________________________________________________________________"<<endl;
            return i;
        }
    }

    return -1;
}

void Students :: printByDepartment(string department)
{
    unsigned short int sno = 0;
    for (unsigned short int i = 0; i < this->count; i++)
    {
        if(this->stList[i].getDepartment() == department) {
            cout<<++sno<<"\t";
            stList[i].printStudent();
        }
    }
    
    if(sno != 0)
    {
        cout<<"There is/are "<< sno <<" student/s found in "<< department << " department"<<endl;
    }
}

void Students :: update(Student student)
{

}


// Algorithm: Traverse (A, N)
// [A is the name of the array and N is the number of elements of the array]
// 1. Set I=0
// 2. Repeat steps 3 and 4 while I < N
// 3.  Visit A[I]
// 4. Set I=I+1
//    [End of loop]
// 5. Return
void Students :: traverse()
{
    cout<<"\n____________________________________________________________________________________"<<endl;
    cout<<"Sno. \t First Name \t Last Name \t ID No. \t Age \t Department \t Phone No: "<<endl;
    unsigned short int i = 0
    while (i < this->count)
    {
        cout<< (i+1)<<"\t";
        this->stList[i].printStudent();
        i++;
    }
    
    cout<<"\n____________________________________________________________________________________"<<endl;
}