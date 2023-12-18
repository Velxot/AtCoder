#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<char> S(4);
  vector<int> N(4);
  for(int i=0;i<4;i++){
    cin>>S[i];
    if(S[i]=='A'){
      N[i]=0;
    }
    else if(S[i]=='B'){
      N[i]=1;
    }
    else if(S[i]=='C'){
      N[i]=2;
    }
    else if(S[i]=='D'){
      N[i]=-2;
    }
    else if(S[i]=='E'){
      N[i]=-1;
    }
  }
  int x,y;
  x=abs(N[1]-N[0]);
  if(x==4){
    x=1;
  }
  if(x==3){
    x=2;
  }
  
  y=abs(N[3]-N[2]);
  if(y==4){
    y=1;
  }
  if(y==3){
    y=2;
  }  
  if(x==y){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}
