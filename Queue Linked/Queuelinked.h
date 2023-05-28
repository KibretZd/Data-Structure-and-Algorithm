//Queue: Linked list implementaion of queue Data structure
struct Node
{
    int data;   //Item to be stored
    Node *next; //Stores address of a node
    Node(){
        next = NULL;
    }
};

class QueueLinked
{
private:
    Node *front;  //To store address of the first node from the queue
    Node *rear;  //To store address of the last node from the queue
    int count; //To count the number of nodes added to the list
public:
    QueueLinked();      //Constructor
    ~QueueLinked();     //Destructor
    void enQueue(int x);   //Inserts x into the queue
    void deQueue();         //Deletes the front element from the queue.
    void getFront() const;      //Prints the front element
    int size()const;         //returns the number of items in the queue
};

QueueLinked::QueueLinked()
{
    front = rear = NULL;
    count = 0;
}

QueueLinked::~QueueLinked()
{
    Node *dNode;
    while(front) {
        dNode = front;
        front = front->next;
    }
}

void QueueLinked :: enQueue(int x)
{
    Node * nn = new Node;
    nn->data = x;

    if(front == NULL){
        front = nn;
    }
    else{
        rear->next = nn;
    }
    
    rear = nn;
    count++;
    cout<<"\n"<<x<<" is enqueued to the queue."<<endl;
}
void QueueLinked :: deQueue()
{
    if(front == NULL){
        cout<<"\nQueue underflow (empty)!"<<endl;
        return;
    }

    Node *dnode = front;
    front = front->next;
    cout<<"\nThe dequeued element from the queue is "
        <<dnode->data<<endl;
    count--;
    delete dnode;
}
void QueueLinked :: getFront() const
{
    if(front == NULL){
        cout<<"\nQueue is empty!"<<endl;
        return;
    }

    cout<<"\nThe front element from the queue is "<<
        front->data<<endl;
}
int QueueLinked :: size()const
{
    return count;
}