#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    long long a,b,c,k;
    for(long long i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
        for(long long j=0;j<min(k,100);j++)
        {
            long long m,n,l;
            m=a,n=b,l=c;
            a=(n+l)/2;
            b=(m+l)/2;
            c=(m+n)/2;
        }
        printf("%lld %lld %lld\n", a, b, c);
    }
    return 0;
}