#include <bits/stdc++.h>
using namespace std;
bool canr[1000001] = {false};
int main()
{
 int a,b;
 cin>>a>>b;

 for(int x=0;x*a<=a*b;x++)
 {
    for(int y=0;y*b<=a*b;y++)
    {
        canr[x*a+y*b]=1;
    }
 }
 int maxc=0;
 for(int i=0;i<=a*b;i++)
 {
    if(!canr[i])
    maxc=i;
 }
 cout<<maxc<<endl;
 return 0;
}