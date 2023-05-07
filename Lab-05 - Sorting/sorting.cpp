#include<iostream>
// #include<conio.h>

using namespace std;

class SortType {
    private:
        int myarray[100];
        int length; //counts the number of elements
    public:
        SortType() // Constructor
        {
            length = 0;
        }

        void linear_sort();
        void bubble_sort();
        void selection_sort();
        void insertion_sort();
        void getInputs(int n); //This member function will read elements of the array
        void traverse();
};

void SortType :: linear_sort() {
    for(int i = 0; i < length - 1; i++) {
        for(int j = i+1; j < length; j++) {
            if(myarray[j] < myarray[i]) {
                int temp = myarray[j];
                myarray[j] = myarray[i];
                myarray[i] = temp;
            }
        }
        // cout<<"\nPass "<<(i+1)<<": ";
        // traverse();
    }
}
void SortType :: bubble_sort() {
    for(int i = 0; i < length - 1; i++) {
        for(int j = 0; j < length - i - 1; j++) {
            if(myarray[j] > myarray[j+1]) {
                int temp = myarray[j];
                myarray[j] = myarray[j+1];
                myarray[j+1] = temp;
            }
        }
        // cout<<"\nPass "<<(i+1)<<": ";
        // traverse();
    }
}//end for bubble_sort member funtion

void SortType :: selection_sort()
{
    for(int pass = 0; pass < length; pass++){
        int smallest = pass;
        for(int j = pass + 1; j < length; j++) {
            if(myarray[j] < myarray[smallest]) {
                smallest = j;
            }
        }
        int t = myarray[smallest];
        myarray[smallest] = myarray[pass];
        myarray[pass] = t;

        // cout<<"\nPass "<<(pass+1)<<": ";
        // traverse();
    }
}
void SortType :: insertion_sort()
{

}

void SortType :: getInputs(int n)
{
    length = n;
    for(int i = 0; i < length; i++){
        cout<<"\nEnter the "<< (i+1)<<" element: ";
        cin>>myarray[i];
    }
}
void SortType :: traverse()
{
    cout<<endl;
    for(int i = 0; i< length; i++){
        cout<<myarray[i]<<", ";
    }
    cout<<endl;
}

int main() 
{
    SortType st;

    //read array elements
    st.getInputs(5);

    //print the array elements before sorting
    cout<<"\nElements before sorting:";
    st.traverse();

    //apply sorting on the st object
    // st.linear_sort();
    st.bubble_sort();
    // st.selection_sort();
    // st.insertion_sort();

    cout<<"\nElements after sorting:";
    st.traverse();

     return 0;
}