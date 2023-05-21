//Array based implementation of Stack data structure

const int MAX_SIZE = 5;

class Stack
{
    int list[MAX_SIZE];
    int top;
    public:
        Stack() {
            top = -1;
        }
        void push(int x);
        void pop();
        void getTop();
        int size();
        void traverse();
};

void Stack :: push(int x)
{
    if(top != MAX_SIZE - 1){
        top++;
        list[top] = x;
        cout<<"\n"<<x<<" is added to the stack."<<endl;
    }
    else {
        cout<<"\nStack is overflow!"<<endl;
    }
}
void Stack :: pop() {
    if(top != - 1){
        int x = list[top];
        top--;
        cout<<"\n"<<x<<" is popped from the stack."<<endl;
    }
    else {
        cout<<"\nStack is empty (underflow)!"<<endl;
    }
}
void Stack :: getTop()
{
    if(top != -1)
        cout<<"\nThe top element from the stack is "<<list[top]<<endl;
    else
        cout<<"\nThe stack is empty!"<<endl;
    
}
int Stack :: size() {
    return (top + 1);
}

void Stack :: traverse() {
    if(top == -1){
        cout<<"\nThe stack is empty."<<endl;
        return;
    }
    for(int i = 0; i <= top; i++){
        cout<<list[i]<<", ";
    }
    cout<<endl;
}