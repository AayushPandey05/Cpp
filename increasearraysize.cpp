#include<iostream>
#include<memory>
using namespace std;
int main() {
    int *p = new int[5];
    p[0]=2;p[1]=4;p[2]=6;p[3]=8;p[4]=10;
    
    int *q = new int[10]; //!..Array of larger size..
    for (int i = 0; i<5;i++){
        q[i]=p[i];
    }
    delete[] p; //!..Deleting the array p as it is changed to sized q...
     p=q;
     q=0;
    for (int i = 0; i < 5; i++) {
        cout<<p[i]<<endl;
    }
   
}