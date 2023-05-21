//Linked list implementaion of stack Data structure

struct Node
{
    int data;
    Node *next;
    Node() {
        next = NULL;
    }
};

class StackLinked
{
private:
    Node *top;  //To store address of the top node from the stack
    int count; //To count the number of nodes added to the list
public:
    StackLinked();
    ~StackLinked();
    void push(int x);
    void pop();
    int getTop();
    int size();
    void traverse();
};

StackLinked::StackLinked()
{
    top = NULL;
    count = 0;
}

StackLinked::~StackLinked()
{
}

void StackLinked :: push(int x)
{

}
void StackLinked :: pop()
{

}
int StackLinked :: getTop()
{

}
int StackLinked :: size()
{

}
void StackLinked :: traverse()
{
    
}