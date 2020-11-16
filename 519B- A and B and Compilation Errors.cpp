#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	long long int a[t],b[t-1],c[t-2];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<t-1;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<t-2;i++)
	{
		cin>>c[i];
	}
	sort(a,a+t);
	sort(b,b+t-1);
	sort(c,c+t-2);
    int i=0,j=0;
    while(i<t)
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
        }
        if(a[i]!=b[j])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    i=0;
    j=0;
    while(i<t-1)
    {
        if(b[i]==c[j])
        {
            i++;
            j++;
        }
        else
        {
            cout<<b[i]<<endl;
            break;
        }       
    }
	return 0;
}