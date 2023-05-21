//Linked list implementaion of stack Data structure
struct Node
{
    int data;   //Item to be stored
    Node *next; //Stores address of a node
};

class StackLinked
{
private:
    Node *top;  //To store address of the top node from the stack
    int count; //To count the number of nodes added to the list
public:
    StackLinked();      //Constructor
    ~StackLinked();     //Destructor
    void push(int x);   //Inserts x into the stack
    void pop();         //Deletes the top element from the stack.
    void getTop();      //Prints the top element
    int size();         //returns the number of items in the stack
    void traverse();    //Prints all the elements available in the stack
};

StackLinked::StackLinked()
{
    top = NULL;
    count = 0;
}

StackLinked::~StackLinked()
{
    Node *dNode;
    while(top) {
        dNode = top;
        top = top->next;
    }
}

void StackLinked :: push(int x)
{
    Node * nn = new Node;
    nn->data = x;
    nn->next = top;
    top = nn;
    count++;
    cout<<"\n"<<x<<" is pushed to the stack."<<endl;
}
void StackLinked :: pop()
{
    if(top == NULL){
        cout<<"\nStack underflow!"<<endl;
        return;
    }

    Node *dnode = top;
    top = top->next;
    cout<<"\nThe popped element from the stack is "
        <<dnode->data<<endl;
    count--;
    delete dnode;
}
void StackLinked :: getTop()
{
    if(top == NULL){
        cout<<"\nStack is empty!"<<endl;
        return;
    }

    cout<<"\nThe top element from the stack is "<<
        top->data<<endl;
}
int StackLinked :: size()
{
    return count;
}
void StackLinked :: traverse()
{
    if(top == NULL){
        cout<<"\nStack is empty!"<<endl;
        return;
    }
    cout<<"\nThe contents of the stack are as follows"<<endl;
    Node* cNode = top;
    while(cNode){
        cout<<cNode->data<<", ";
        cNode = cNode->next;
    }
    cout<<endl;
}