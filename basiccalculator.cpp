//TODO:.Designing a basic calculator...
//![FOR OP 1-ADDITION],[FOR OP 2-SUBSTRACTION],[FOR OP 3-MULTIPLICATION]*/
#include<iostream>
using namespace std;
int main()
{
    int op, x, y;
    cin >> op >> x >> y;
    if (op==1)
     cout<<"Addition is:"<<x+y;
    else if (op==2)
      cout<<"Subtraction is:"<<x-y;
    else if (op==3)
      cout<<"Multiplication is:"<<x*y;
    else if (op==4)
      cout<<"Division is:"<<x/y;
    else
      cout<< "Invalid Input";
    return 0; 
}