//?..Pratitce Qna-1.......
#include<iostream>
using namespace std;
void fun()
{
static int x = 1; //!.Since it is static tha's why it will be executed only once...
int y=1;
x++; 
y++;
cout<<x<<" "<<y<<endl;
} 
int main()
{
 fun();
 fun();
 fun();
 return 0;
}