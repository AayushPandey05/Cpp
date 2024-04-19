//TODO: Understanding Break...
//?:To find the smallest divisor greater than 1...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    for(int x=2;x<=n;x++){
        if(n%x==0){
            cout<<"Smallest Divisor is: "<<x;
            break;
        }
    }
    return 0;
}
/*If the statement get true in first loop only then output will be printed  and loop will be break
  otherwise the loop continues until it is true */