#include<bits/stdc++.h>
using namespace std;
int s,m;
vector<int> a;
void forward_print()
{
    bool flag=false;
    auto i=a.begin();
    if(*(i)==0 and a.size()>1)
    {
        cout<<*(i)+1;
        flag=true;
        i++;
    }
    while(i!=a.end())
    {
        if(flag and *i){
            cout<<(*i)-1;
            flag=false;
        }
        else if(!flag)
           cout<<*i;
            else 
            cout<<*i;
       
       i++;
    }
}
void reverse_print()
{
    for(auto i=a.end()-1;i!=a.begin()-1;i--)
    {
        cout<<*i;
    }
}
void cal(int s, int m)
{
    if(s>9 and m!=0)
    {
        int x=s/9;
        while(x--)
        {
            a.push_back(9);
            m--;
            s=s-9;
        }
        cal(s,m);
    }
    else if(s<10 and m!=0)
    {
        a.push_back(s);
        m--;s=0;
        while(m--)
        {
            a.push_back(0);
        }
    }
}
bool can(int m, int s)
{
    if(m>0 &&  s<=9*m && s>0) return true;
    if(s>=0 and s<=9 and m==1) return true;
    else return false;
}

int main()
{
    int m,s;
    cin>>m>>s;
    bool h=false;
    h=can(m,s);
    if(h)
    {
        cal(s,m);
        sort(a.begin(),a.end());
        forward_print();
        cout<<" ";
        reverse_print();
    }
    else
    {
        cout<<"-1 -1\n";
    }
    return 0;
}