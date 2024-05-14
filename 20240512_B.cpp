#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  cin>>N>>S;
  
  int m=0;
  string t="";
  
  int X=N-1;
  check:
  for(int i=X;i>=0;i--){
    if(S.substr(i,1)=="1"){
      X=i-1;
      for(int j=0;j<=i;j++){
        t+="A";
        m++;
      }
      break;
    }
    else if(i==0){
      X=-1;
    }
  }
  for(int i=X;i>=0;i--){
    if(S.substr(i,1)=="0"){
      X=i-1;
      for(int j=0;j<=i;j++){
        t+="B";
        m++;
      }
      break;
    }
    else if(i==0){
      X=-1;
    }
  }
  if(X!=-1){
    goto check;
  }
  
  cout<<m<<endl<<t<<endl;;
}
