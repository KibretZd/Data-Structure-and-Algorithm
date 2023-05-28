#include<iostream>
#include<conio.h>
using namespace std;

#include"queueArray.h"
void showMenu();

int main() {
    int item;
    Queue queue;
    char ch;
    do{
        showMenu();
        ch = getche();
        cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        switch (ch)
        {
        case '1':
            cout<<"\nEnter an item to add: ";
            cin>>item;
            queue.enQueue(item);
            getche();
            break;

        case '2': 
            queue.deQueue();
            getche();
            break;

        case '3':
            queue.getFront();
            getche();
            break;

        case '4':
            cout<<"\nThe number of items in the queue is ";
            cout<<queue.size()<<endl;
            getche();
            break;
        
        case '5':
            cout<<"\nPress any key to exit!"<<endl;
            getche();
            break;
        
        default:
            break;
        }
    }while(ch != '5');
    
    
    return 0;
}

void showMenu() {
    cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"\n\t\tQueue Data Structure"<<endl;
    cout<<"\n1. Add item"<<endl;
    cout<<"2. Delete an item"<<endl;
    cout<<"3. Get front item"<<endl;
    cout<<"4. Size of the queue"<<endl;
    cout<<"5. Exit the program"<<endl;
    cout<<"Enter your choice here: ";
}