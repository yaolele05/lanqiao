#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin>>num;
    int res=0;
    int cur=num;
    int sum;
    while(num)
    {
        cur=num;
         sum=0;
         while(cur)
         {
        sum+=cur%10;
        cur/=10;
         }
       num-=sum;
       res++;
    }
    cout<<res<<flush;
    return 0;
} 