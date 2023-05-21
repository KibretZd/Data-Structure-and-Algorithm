//Array based implementation of Stack data structure
const int MAX_SIZE = 5;

class StackArray
{
    int stack[MAX_SIZE];
    int top;
    public:
        Stack() {
            top = -1;
        }
        void push(int x);
        void pop();
        int getTop();
        int size();
};

void StackArray :: push(int x)
{
    if(top != MAX_SIZE - 1){
        top++;
        stack[top] = x;
        cout<<"\n"<<x<<" is added to the stack."<<endl;
    }
    else {
        cout<<"\nStack is overflow!"<<endl;
    }
}
void StackArray :: pop() {
    if(top != - 1){
        int x = stack[top];
        top--;
        cout<<"\n"<<x<<" is popped from the stack."<<endl;
    }
    else {
        cout<<"\nStack is empty (underflow)!"<<endl;
    }
}
int StackArray :: getTop()
{
    if(top != -1)
        return stack[top];
    
}
int StackArray :: size() {
    return (top + 1);
}