#include<iostream>
using namespace std;
int main()
{
    int num1 = 5;
    cout << num1 <<" ";
    int num2 = 10;  
    cout << num2 <<" ";
    cout<< num1 + num2 <<" ";
    cout<< num1 * num2 <<" ";
    cout<< num1 - num2 <<" ";
    cout<< num1 / num2; //!It will not give the ans in decimal as we put "int" instead of  "float"
                         
    return 0;
} 