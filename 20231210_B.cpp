#include <bits/stdc++.h>
using namespace std;

int main(){
  int K,G,M;
  cin>>K>>G>>M;
  
  int g=0;
  int m=0;
  int t=0;
  for(int i=0;i<K;i++){
    t=0;

    if(g==G && t==0){
      g=0;
      t++;
    }
    else if(m==0 && t==0){
      m=M;
      t++;
    }
    else if(t==0){
      if(m>G){
        m-=G-g;
        g=G;
        t++;
      }
      else{
        g=m;
        m=0;
        t++;
      }
    }
  }
  
  cout<<g<<" "<<m<<endl;
}
