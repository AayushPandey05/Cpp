//TODO:: Decimal to Binary........
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;  //!..Storing value in vector...
    while(n>0){
        int t=n%2;
        v.push_back(t);  //!..Pushing the remainder into the vector...
        n=n/2;
    }
    for(int i=v.size()-1; i>=0; i--){   //!.."v.size()-1" use for reversing the answer...
        cout << v[i];
}
return 0;
}