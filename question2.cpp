//TODO:print its characters at even indices(index starts at 0)..
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter any characters: ";
    cin >> s;
    for(int i=0; i<s.length(); i=i+2){
        cout<<s[i]<<" ";
    }
    return 0;
}
    