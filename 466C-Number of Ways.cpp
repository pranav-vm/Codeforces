#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int a[n],Count[n]={0};
    long long sum = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        sum+= a[i];
    }
    if (sum % 3 != 0) cout << "0\n";
    else 
    {
        sum /= 3;
        long long ss = 0;
        for(int i = n-1; i >= 0 ; --i)
        {
            ss += a[i];
            if (ss == sum)
                Count[i] = 1;
        }
        for(int i = n-2 ; i >= 0 ; --i)
            Count[i] += Count[i+1];
        
        long long ans = 0;
        ss = 0;
        for(int i = 0 ; i+2 < n ; ++i) {
            ss += a[i];
            if (ss == sum)
                ans += Count[i+2];
        }
        cout << ans << "\n";
    }
    return 0;
}