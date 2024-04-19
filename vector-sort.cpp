//TODO:...Hackerrank Qna...
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    vector<int> N; //!..Create an empty vector 
    int n, x;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {    //!..where x is an integer.The size increases by 1 after this.
        cin >> x;
        N.push_back(x);
    }
    
    sort(N.begin(),N.end());  //!..Sort all element in the vector...
    
    for(int i = 0; i < n; i++) {
        cout << N[i] << " ";
    }
    
    return 0;
}