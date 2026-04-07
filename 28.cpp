#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
int main()
{    
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int>a(n);
    for(int i=0;i<n;i++)       
     scanf("%d", &a[i]);
    sort(a.begin(),a.end());
    long long cha=0;
   long long c=1000000;
    for(int i=0;i<n-m;i++)
    {
        cha=0;
        for(int j=i;j<i+m-1;j++)
        {
     
         cha+=a[j+1]*a[j+1]-a[j]*a[j];
         
        }   
        c=min(c,cha);
    }
    printf("%d",c);
    return 0;
}
