#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number";
	cin>>n;
	
	int i;
	cout<<"Prime numbers between 1 to "<<n<<" are as follows \n ";
	for(int j=i; j<=n; j++)
	{
		for(i=2; i<=j/2; i++)
		{
			if(j%i==0)
			break;
		}
		if(i>j/2)
		cout<<j<<" ";
	}
	return 0;
}