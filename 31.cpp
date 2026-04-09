#include<bits/stdc++.h>
using namespace std;
long long pow(int n)
{
    long long ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=2;
    }
    return ans;
}
int main()
{
    int n;
    double d;
    scanf("%d %lf",&n,&d);
    double fact=d*pow(n);   
    long long c=round(fact);
    printf("%lld",c);
return 0;
}