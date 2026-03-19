/*#include <bits/stdc++.h>
//哈希表
using namespace std;
int main()
{
    int n;
    string s;
    map<char,int> mp;
    mp['I']=1,mp['V']=5,mp['X']=10,mp['C']=100,mp['D']=500,mp['M']=1000;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int len=s.size();
        int k=mp[s[len-1]];
        for(int i=len-1;i>0;i--)
        {
            if(mp[s[i]]>mp[s[i-1]])
            k-=mp[s[i-1]];
            else
            k+=mp[s[i-1]];
        }
        cout<<k<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int n;
string s;
map<char,int> mp;
int main(){
    mp['I']=1,mp['V']=5,mp['X']=10,mp['L']=50,mp['C']=100,mp['D']=500,mp['M']=1000;
    cin>>n;
    while(n--){
        cin>>s;
        int len=s.size();
        int k=mp[s[len-1]];
        for(int i=len-1;i>0;i--){
          if(mp[s[i]]>mp[s[i-1]]) k-=mp[s[i-1]];
          if(mp[s[i]]<=mp[s[i-1]]) k+=mp[s[i-1]];
    }
     cout<<k<<endl;
}
    return 0;
}