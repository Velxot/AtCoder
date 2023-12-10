#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin>>N>>M;
  string S;
  cin>>S;
  
  int x=0;//着用済みTシャツ
  int T=0;//購入ロゴ入りTシャツ
  int t=0;//着用済みロゴ入りTシャツ
  for(int i=0;i<N;i++){
    if(S.substr(i,1)=="0"){
      x=0;
      t=0;
    }
    else if(S.substr(i,1)=="1"){
      if(x<M){
        x++;
      }
      else if(t<T){
        t++;
      }
      else{
        T++;
        t++;
      }
    }
    else if(S.substr(i,1)=="2"){
      if(t<T){
        t++;
      }
      else{
        T++;
        t++;
      }
    }
  }
  
  cout<<T<<endl;
}
