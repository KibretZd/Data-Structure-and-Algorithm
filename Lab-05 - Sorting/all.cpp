#include<iostream>
#include<conio.h>
using namespace std;

const unsigned short int MAX_SIZE = 100;
int arr[MAX_SIZE];
unsigned short int length = 0;

void add(int value, int index);
void update(int newValue, int index);
void remove(int index);
void traverse();
void linear_sort(int [], int n);
void bubble_sort(int [], int n);
void selection_sort(int [], int n);
void insertion_sort(int [], int n);

int main()
{
    char ch;
    int element;
    unsigned short int index;

    do{
        cout<<"\n_______________________________________________________________________"<<endl;
        cout<<"\n\t\t\tMENU"<<endl<<endl;
        cout<<"1. Add new element"<<endl;
        cout<<"2. Update an element"<<endl;
        cout<<"3. Delete an element"<<endl;
        cout<<"4. Print the list"<<endl;
        cout<<"5. Exit the program"<<endl;
        cout<<"\n\tEnter your choice from 1-5: ";
        cin>>ch;
        switch (ch)
        {
        case '1':
            cout<<"\n\tEnter an element: ";
            cin>>element;
            cout<<"\n\tEnter the position where to insert "<<element<<": ";
            cin>>index;
            add(element, index);
            getche();
            break;
        
        case '2':
            cout<<"\n\tEnter new element: ";
            cin>>element;
            cout<<"\n\tEnter the position  of the element to be updated: ";
            cin>>index;
            update(element, index);
            getche();
            break;

        case '3':
            cout<<"\n\tEnter the position  of the element to be deleted: ";
            cin>>index;
            remove(index);
            getche();
            break;
            
        case '4':
            print();
            getche();
            break;

        case '5':
            break;

        default:
            cout<<"\n\t\tYou have enter an invalid choice!"
            <<"\n\t\tPlease enter a choice between 1 to 5."<<endl;
            getche();
            break;
        }//end of switch

    }while(ch != '5');

    return 0;
}//end of main function

void add(int value, int index)
{
    if (index < 0 || index > length){
        cout<<"\n\tInsertion not successfull!"<<endl;
        cout<<"\t\tThe index of the element is invalid!"<<endl;
        return;
    }
    
    int loc = length;
    while (loc > index)
    {
        arr[loc] = arr[loc-1];
        loc = loc - 1;
    }
    
    arr[index] = value;
    length++;
    cout<<"\n\tThe element "<<value<<" has been added successfuly."<<endl;
    cout<<"\n\tEnter any key to return to main menu.";
}//end of function add

void update(int newValue, int index)
{
    if (index < 0 || index >= length){
        cout<<"\n\t\tUpdating an element is not successfull!"<<endl;
        cout<<"\tThe index of the element is invalid!"<<endl;
        return;
    }
    
    int oldValue = arr[index];    
    arr[index] = newValue;
    cout<<"\n\tThe element "<<oldValue<<" has been replaced by "
        <<newValue<<" successfuly."<<endl;
    cout<<"\n\tEnter any key to return to main menu.";
}

void remove(int index)
{
    if (index < 0 || index >= length){
        cout<<"\n\t\tDeletion not successfull!"<<endl;
        cout<<"\tThe index of the element is invalid!"<<endl;
        return;
    }
    
    int delElement = arr[index];
    int loc = index;
    while (loc < length)
    {
        arr[loc] = arr[loc+1];
        loc = loc + 1;
    }
    length--;
    cout<<"\n\tThe element "<<delElement<<" has been deleted successfuly."<<endl;
    cout<<"\n\tEnter any key to return to main menu.";
    
}
void traverse(){
    if(length == 0){
        cout<<"\n\t\t The list is empty!"<<endl;
        return;
    }
    cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"\n\t\tThe elements in the list are as follows"<<endl<<"\t";
    for(int i = 0; i < length; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<"\n\n\tTotal number of elements in the list: "<<length<<endl;
    cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"\n\tEnter any key to return to main menu.";
}

void linear_sort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n-1; j++)
        {
            if(a[j] < a[i])
            {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
}
void bubble_sort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if(a[j] < a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}

void selection_sort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n - 1; j++)
        {
            if(a[j] < a[smallest])
            {
                smallest = j;
            }
        }

        int t = a[i];
        a[i] = a[smallest];
        a[smallest] = t;
    }
}

void insertion_sort(int a[], int n) 
{
    for(int i = 0; i < n-1; i++)
    {
        int t = a[i];
        int j = i;
        while(j > 0 && a[j] > t)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j] = t;
    }
}