#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  int maxx;
  cin>>N;
   int ans=0;
  for(int i=1;i<=N;i++)
  {
   int c=i;
   maxx=i;
  while(c!=1)
  {
      if(c%2==0)
      {
        c/=2;
        
      }
      else 
      {
        c=c*3+1;
       
      }
      maxx=max(c,maxx);
  }
    ans=max(maxx,ans);
  }
  cout<<ans<<endl;
  return 0;
}