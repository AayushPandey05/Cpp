//TODO:..Table of difference.....
/*....PRINTING TABLE AFTER FINDING DIFFERENCE OF N1&N2...*/
#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int ans;
    for(int i=1;i<=10;i++){
        ans= (n1-n2)*i;
        cout << ans <<" ";
    }
    return 0;
}
