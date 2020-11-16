#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int co=0,ce=0,lco=0,lce=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			ce++;
			lce=i+1;
		}
		else
		{
			co++;
			lco=i+1;
		}
	}
	if(co==1) cout<<lco<<"\n";
	else cout<<lce<<"\n";
	return 0;
}