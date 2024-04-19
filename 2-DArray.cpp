//TODO:..2-D Array using Pointers/Row/Column.....
#include<iostream>
#include<memory>
using namespace std;
int main() {
//!::.Array in Row & Column....
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    int i,j;
    for(i=0;i<3;i++) {
        for(j=0;j<4;j++) {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//!..Array in Pointers
    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    for(i=0;i<3;i++) {
        for(j=0;j<4;j++) {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//!..Array in double pointers...
    int **c;
    c=new int *[3];
    c[0]=new int[4];
    c[1]=new int[4];
    c[2]=new int[4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}