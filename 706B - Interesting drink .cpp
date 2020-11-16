#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    long int x[t];
    for(int i=0;i<t;i++)
    {
        cin>>x[i];
    }
    sort(x,x+t);
    long int q,m;
    cin>>q;
    while(q--)
    {
        cin>>m;
        cout<<upper_bound(x,x+t,m)-x<<endl;
    }
    return 0;
}