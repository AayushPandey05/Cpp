//TODO:Printing the inverted righttriangle pattern....
#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    for (int i = 1; i <= s; i++) {  //!..Print the row...
        for (int j = 1; j <= s - i + 1; j++) //!..Print the column..
            cout << "* ";
        
    }
     cout << endl;
    return 0;
}
