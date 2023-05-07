/*
#include <iostream>

using namespace std;

int main()
{
    int x[3][3] = {{5, 7, 9}, {2, 6, 8},
        {12, 24, 7}};

    //Display the matrix elements
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout<<x[row][col]<<" ";
        }
        cout<<endl;
    }

    int sum = 0;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col <= row; col++){
            sum = sum + x[row][col];
        }
    }
    cout<<"The sum is: "<<sum;
    return 0;
}
*/
