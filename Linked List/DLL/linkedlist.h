
/// Define a Double linked list node here

struct Node
{
    Node *prev; //Pointer to store address of predecessor node
    int data;   //Item to be stored
    Node *next; //Pointer to store address of successor node
};


//Define a Double linked list here
class linkedlist
{
    Node *head, *tail;

    public:
        linkedlist() {
            head = tail = NULL;
        }

        ~linkedlist() {
            destroy(); // Call this function
        }

        void insert(int value, int pos);
        void remove(int value);
        void traverse();
        void destroy();
        int search(int key);
};
 