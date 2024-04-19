//TODO:..Table of Number...
#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n>>m;
    int ans;
    for(int i=1;i<=m;i++){
        ans= n*i;
        cout <<ans<<" ";
    }
}