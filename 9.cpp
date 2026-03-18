#include <bits/stdc++.h>
using namespace std;
#include<algorithm>
int main()
{
  int a[26];
  
  int k,sum=0;
  string s;
  cin>>k>>s;
  int c=s.size()/k;
  for(int i=0;i<c;i++)
  {
    int nummax=0;
   fill(a,a+26,0);
    int j=i;
    while(j<s.size()-1)
    {
       a[s[j]-'a']++;
            nummax=max(nummax,a[s[j]-'a']);
      j+=c;
    }
   sum+=k-nummax;
  }
  cout<<sum;
  return 0;
}