#include <bits/stdc++.h>

using namespace std;
const int N=1e5+5;
//#define N 100005//不能用1e5+5，因为define只是简单的文本替换 
int main()
{
  int n,s,num=0;
  cin>>n;
  int h[N],c[N]={0};
  //这里用h[n]当动态数组栈（上线1e5）会崩掉，导致未定义行为 
  for(int i=1;i<=n;i++){
    cin>>h[i];
    for(int j=1;j*j<=h[i];j++){//时间复杂度为O(n*sqrt(n)) 
      if(h[i]%j==0){//类似桶排序，将最大公约数个数存入对应的数组下标中 
        c[j]++;
        if(j*j!=h[i])
        c[h[i]/j]++;
      }
    }
  }
  for(int i=N-5;i>=1;i--){//找最大的公因数（有3个以上的倍数） 
    if(c[i]>=3){
      s=i;
      break;
    }
  }
  sort(h+1,h+n+1);//sort(h.begin(),h.end()) //begin是本位，end是下一位 
  for(int i=1;i<=n;i++){//找最小的 
    if(h[i]%s==0){
      cout<<h[i]<<' ';
      num++;
    }
    if(num==3)
    break;
  }
  return 0;
}
