//TODO://PATTERN...
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter N: ";
	cin>>n;
	
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n-i)
		{
			cout<<" ";
			j++;
		}
		int k=1;
		while(k<=2*i-1)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
		i++;
	}
}