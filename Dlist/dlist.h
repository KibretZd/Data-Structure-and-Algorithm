struct Node{
    Node *prev;
    int data;
    Node *next;
    Node() {
        next = NULL;
        prev = NULL;
    }
};

class Dlist{
    Node *head, *tail;
    int size;
    public:
        Dlist() {
            head = tail = NULL;
            size = 0;
        }
        ~Dlist() {
            destroy();
        }

        void create();
        Node* getNode(int data);
        void insert(int data, int position);
        void remove(int data);
        void destroy();
        int search(int searchKey);
        void traverse();
        int getSize(){return size;}
};

void Dlist :: destroy(){
    Node *curNode;
    while(head) {
        curNode = head;
        head = head->next;
        delete curNode;
    }
    size = 0;
    tail = NULL;
}

void Dlist :: create() {

    char ch;
    if(head){
        cout<<"\nAre you sure you want to delete the list? [y/n] ";
        cin>>ch;
        if (ch == 'y' || ch == 'Y')
            destroy();
        else 
            return;
    }
    size = 0;
    int x;
    Node *nn;
    begin:
        cout<<"\nEnter an integer to add: ";
        cin>>x;
        nn = getNode(x);
        nn->prev = tail;
        if(tail == NULL) {
            head = nn;
        }
        else
            tail->next = nn;
        tail = nn;
        size++;
        cout<<"\nDo you want to continue? [y/n]: ";
        cin>>ch;
        if (ch == 'y' || ch == 'Y')
            goto begin;
}

Node* Dlist :: getNode(int data){
    Node * nn = new Node;
    nn->data = data;
    return nn;
}

void Dlist :: insert(int data, int position) {
    if(position < 0){
        cout<<"\n Position should not be negative!"<<endl;
        return;
    }
    
    Node *nn = getNode(data);
    if(head == NULL){
        head = tail = nn;
    }
    else if(position == 0){
        nn->next = head;
        head->prev = nn;
        head = nn;
    } 
    else {
        int count = 1;
        Node *curNode = head;
        while(curNode && position > count){
            curNode = curNode->next;
            count++;
        }
        if (curNode) {
            nn->next = curNode->next;
            nn->prev = curNode;
            
            if(curNode != tail) {
                curNode->next->prev = nn;
            }
            else { 
                tail = nn;
            }
            curNode->next = nn;
        }
        else {
            cout<<"\nPosition should not be greater than the size of the list."<<endl;
            return;
        }
    }
    cout<<"\n"<<data<<" is inserted."<<endl;
    size++;
}

void Dlist :: remove(int data) {
    if(!head) {
        cout<<"\nThe list is empty!"<<endl;
        return;
    }
    
    Node *delNode = head, *curNode = NULL;
    while (delNode && delNode->data != data)
    {
        curNode = delNode;
        delNode = delNode->next;
    }
    if(delNode){
        if(delNode == head){
            head = head->next;
            if (head == NULL) {
                tail = NULL;
            }
            else {
                head->prev = NULL;
            }
        }
        else {
            curNode->next = delNode->next;
            if(delNode != tail)
                delNode->next->prev = curNode;
            else
                tail = curNode;
        }
        
        delete delNode;
        cout<<"\n"<<data<<" is deleted from the list successfully."<<endl;
        size--;
    }
    else{
        cout<<"\n"<<data <<" not found from the list!"<<endl;
    }
}

int Dlist :: search(int searchKey) {
    int count = 1;
    Node *curNode = head;        
    while(curNode && curNode->data != searchKey){
        curNode = curNode->next;
        count++;
    }
    if(curNode) //if Search us success, curNode is not null
        return count;//SearchKey is found at position count
    return 0;
}

void Dlist :: traverse() {
    if(!head){
        cout<<"\nThe list is empty!"<<endl;
        return;
    }
    Node *curNode = head;
    cout<<"\n__________________________________________________________________"<<endl;
    cout<<"The list in forward.\n"<<endl;
    while (curNode)
    {
        cout<<curNode->data<<"  ";
        curNode = curNode->next;
    }
    cout<<endl;
    cout<<"\nThe list in backward.\n"<<endl;
    curNode = tail;
    while (curNode)
    {
        cout<<curNode->data<<"  ";
        curNode = curNode->prev;
    }
    cout<<endl;
    cout<<"\nThere are "<<size<<" items in the list.\n"<<endl;
    cout<<"__________________________________________________________________"<<endl;
}