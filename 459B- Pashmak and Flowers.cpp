#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,ub,lb,max,min;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    min=a[0]; max=a[n-1];
    if(max==min) cout<<"0 "<<((n*(n-1))/2)<<endl;
    else
    {
        ub=count(a,a+n,min);
        lb=count(a,a+n,max);
        cout<<(max-min)<<" "<<(ub*lb)<<endl;   
    }
	return 0;
}