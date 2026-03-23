#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long p=3;
    long long c=3;
    long long sum=1;
    long long re=20230610;
    long long res=1;

    
    while(sum<=re)
    {
      
        res++;
        sum+=p;
        p+=c;
        c++;
        
    }
    if(sum>re)
    res--;

    cout<<res<<endl;
    return 0;
}