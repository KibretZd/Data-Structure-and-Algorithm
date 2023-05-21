#include<iostream>
#include<conio.h>
using namespace std;

#include"stacklinked.h"
void showMenu();

int main() {
    int item;
    StackLinked stack;
    char ch;
    do{
        showMenu();
        ch = getche();
        cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        switch (ch)
        {
        case '1':
            cout<<"\nEnter an item to push: ";
            cin>>item;
            stack.push(item);
            getche();
            break;

        case '2': 
            stack.pop();
            getche();
            break;

        case '3':
            stack.getTop();
            getche();
            break;

        case '4':
            cout<<"\nThe number of items in the stack is ";
            cout<<stack.size()<<endl;
            getche();
            break;
        
        case '5':
            stack.traverse();
            getche();
            break;
        
        case '6':
            cout<<"\nPress any key to exit!"<<endl;
            getche();
            break;
        
        default:
            break;
        }
    }while(ch != '6');
    
    
    return 0;
}

void showMenu() {
    cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

    cout<<"\n1. Push an item"<<endl;
    cout<<"2. Pop the top element"<<endl;
    cout<<"3. Get Top element"<<endl;
    cout<<"4. Size of the stack"<<endl;
    cout<<"5. Traverse stack"<<endl;
    cout<<"6. Exit the program"<<endl;
    cout<<"Enter your choice here: ";
}