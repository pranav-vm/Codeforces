#include<iostream>
using namespace std;


int main()
{
	int n,m,a,b,cost1=0,cost2=0;
	cin>>n>>m>>a>>b;
	if(m*a<=b) cout<<n*a<<"\n";
	else
		cout<<(n/m)*b+min((n%m)*a,b)<<"\n";
	return 0;
}