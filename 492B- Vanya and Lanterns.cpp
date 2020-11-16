#include<bits/stdc++.h>
using namespace std;
float max(int a, float b)
{
	return a>b?a:b;
}
int max(int a, int b)
{
	return a>b?a:b;
}
int main()
{
	int n,l;
	cin>>n>>l;
	int a[n];
	float ans;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int last_dist=a[0],first_dist=l-a[n-1];
	float Max=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1]>Max)
			Max=a[i]-a[i-1];
	}
	Max/=2;
	last_dist=max(last_dist, first_dist);
	ans=max(last_dist,Max);
	printf("%.10f",ans);	
	return 0;
}