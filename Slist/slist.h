struct Node{
    int item;
    Node *link;
    Node() {
        link = NULL;
    }
};

class Slist{
    Node *HEAD;
    int size;
    public:
        Slist() {
            HEAD = NULL;
            size = 0;
        }
        ~Slist() {
            destroy();
        }

        void create();
        Node* getNode(int item);
        void add(int item, int position);
        void remove(int item);
        void destroy();
        int search(int searchKey);
        void traverse();
        int getSize(){return size;}
};

void Slist :: destroy(){
    Node *dn;
    while(HEAD) {
        dn = HEAD;
        HEAD = HEAD->link;
        delete dn;
    }
    size = 0;
}

void Slist :: create() {

    char ch;
    if(HEAD){
        cout<<"\nAre you sure you want to delete the list? [y/n] ";
        cin>>ch;
        if (ch == 'y' || ch == 'Y')
            destroy();
        else 
            return;
    }
    size = 0;
    int x;
    Node *nn, *pn = HEAD;
    begin:
        cout<<"\nEnter an integer to add: ";
        cin>>x;
        nn = getNode(x);
        if(!HEAD){
            HEAD = nn;
        }
        else
            pn->link = nn;
        pn = nn;
        size++;
        cout<<"\nDo you want to continue? [y/n]: ";
        cin>>ch;
        if (ch == 'y' || ch == 'Y')
            goto begin;
}

Node* Slist :: getNode(int item){
    Node * nn = new Node;
    nn->item = item;
    return nn;
}

void Slist :: add(int item, int position) {

    if(position > size){
        cout<<"\nInvalid position!\nPosition should not be less that zero or greater than the size of the list."<<endl;
        return;
    }
    int count = 1;
    Node *pn = HEAD;
    while(pn && position > count){
        pn = pn->link;
        count++;
    }
    Node *nn = getNode(item);
    if(position == 0){
        nn->link = pn;
        HEAD = nn;
    }else{
        nn->link = pn->link;
        pn->link = nn;
    }

    cout<<"\n"<<item<<" is inserted."<<endl;
    size++;

}

void Slist :: remove(int item) {

    if(!HEAD) {
        cout<<"\nThe list is empty!"<<endl;
        return;
    }
    
    Node *dn = HEAD, *pn = NULL;
    while (dn && dn->item != item)
    {
        pn = dn;
        dn = dn->link;
    }
    if(dn){
        if(dn == HEAD){
            HEAD = HEAD->link;
        }
        else {
            pn->link = dn->link;
        }
        delete dn;
        cout<<"\n"<<item<<" is deleted from the list successfully."<<endl;
        size--;
    }
    else{
        cout<<"\n"<<item <<" not found from the list!"<<endl;
    }
}

int Slist :: search(int searchKey) {
    int loc = 1;
    if(HEAD){
        Node *sn = HEAD;        
        while(sn && sn->item != searchKey){
            sn = sn->link;
            loc++;
        }
        return loc;
    }
    return 0;
}

void Slist :: traverse() {
    if(!HEAD){
        cout<<"\nThe list is empty!"<<endl;
        return;
    }
    Node *temp = HEAD;
    cout<<"\n__________________________________________________________________"<<endl;
    cout<<"\nThe contents of the list are as follows.\n"<<endl;
    while (temp)
    {
        cout<<temp->item<<"  ";
        temp = temp->link;
    }
    cout<<endl;
    cout<<"\nThere are "<<size<<" items in the list.\n"<<endl;
    cout<<"\n__________________________________________________________________"<<endl;
}