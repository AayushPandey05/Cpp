#include<iostream>
using namespace std;
int main()
{
    cout<<"GFG\n";
    main();
}
/*..it is an example of stack overflow problem,because main is 
calling itself infinite times..*/