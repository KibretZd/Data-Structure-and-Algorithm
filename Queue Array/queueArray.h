// Queue - Array based implementation of circlular queue
const int MAX_SIZE = 5;
class Queue
{
    int rear, front, myQueue[MAX_SIZE];
    int count;
public:
    Queue() {
        rear = front = -1;
        count = 0;
    }

    void enQueue(int item);
    void deQueue();
    void getFront()const;
    int size() const;
    bool isEmpty() const;
    bool isFull()const;
};
void Queue :: enQueue(int item)
{
    if(!isFull()){
        rear = (rear + 1) % MAX_SIZE;
        myQueue[rear] = item;
        count++;//Increment the number of items in the queue
        cout<<"\n"<<item<<" inserted."<<endl;
        if(front == -1){
            front++;
        }
    }
    else{
        cout<<"\n Queue is full (overflow occured)!"<<endl;
    }
}
void Queue :: deQueue()
{
    if(!isEmpty()){
        cout<<"\n"<<myQueue[front]<<" is deleted."<<endl;
        front = (front + 1) % MAX_SIZE;
        count--;//Decrement the number ofitems in the queue
    }
    else{
        cout<<"\n Queue is empty (underflow occured)!"<<endl;
    }
}
void Queue :: getFront()const{
    if(!isEmpty()){
        cout<<"\n"<< myQueue[front]<<" is the front element."<<endl;
    }
    else{
        cout<<"\n Queue is empty!"<<endl;
    }
}
int Queue :: size() const
{
    return count;
}
bool Queue :: isEmpty() const{
    //if count ==0, then return true, otherwise return false
    return count == 0 ? true:false;
}
bool Queue :: isFull() const{
    
    //if count == Maximum Size, then return true, otherwise return false
    return count == MAX_SIZE ? true:false;
}
