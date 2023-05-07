#include<iostream>
#include<conio.h>
using namespace std;
#include"slist.h"
void showMenu();
int main() {
    int item, pos;
    Slist list;
    char ch;
    do{
        showMenu();
        ch = getche();
        cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        switch (ch)
        {
        case '1':
            list.create();
            getche();
            break;

        case '2':
            cout<<"\nEnter an item to insert: ";
            cin>>item;
            cout<<"\nEnter position where to insert "<< item <<": ";
            cin>>pos;
            list.add(item, pos);
            getche();
            break;

        case '3': 
            cout<<"\nEnter an item to delete: ";
            cin>>item;
            list.remove(item);
            getche();
            break;

        case '4':
            cout<<"\nEnter an item to search: ";
            cin>>item;
            pos = list.search(item);
            if(pos > 0)
                cout<<"\nSearch is successful.\n\t "<<item<<" is found at position "<<pos<<endl;
            else
                cout<<"\nSearch is not successful! \n\t"<<item<<" is not found!"<<endl;
    
            getche();
            break;

        case '5':
            list.destroy();
            getche();
            break;
        
        case '6':
            list.traverse();
            getche();
            break;
        
        case '7':
            cout<<"\nPress any key to exit!"<<endl;
            getche();
            break;
        
        default:
            break;
        }
    }while(ch != '7');
    
    
    return 0;

}

void showMenu() {
    cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

    cout<<"\n1. Create a list"<<endl;
    cout<<"2. Add an item"<<endl;
    cout<<"3. Delete an item"<<endl;
    cout<<"4. Search an item"<<endl;
    cout<<"5. Destroy a list"<<endl;
    cout<<"6. Traverse the list"<<endl;
    cout<<"7. Exit the program"<<endl;
    cout<<"Enter your choice here: ";
}