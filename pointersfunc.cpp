//!..Function Parameters...
#include<iostream>
using namespace std;
void fun(int *p) {
    *p = *p + 5;
}
int main() {
    int n = 10;
    fun(&n);
    cout<<n<<endl;
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
void fun(string *s) {
    cout<<*s;
}
int main() {
    string n = "hello world";
    fun(&n);
}