#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,C,D,E,F,N;
  cin>>A>>B>>C>>D>>E>>F>>N;
  
  vector<int> X(N);
  for(int i=0;i<N;i++){
    cin>>X[i];
  }
  int i=0;
  while(i<N){
    if(X[i]>=500 &&F>0){
      X[i]-=500;
      F--;
    }
    else if(X[i]>=100 &&E>0){
      X[i]-=100;
      E--;
    }
    else if(X[i]>=50 &&D>0){
      X[i]-=50;
      D--;
    }
    else if(X[i]>=10 &&C>0){
      X[i]-=10;
      C--;
    }
    else if(X[i]>=5 &&B>0){
      X[i]-=5;
      B--;
    }
    else if(X[i]>=1 &&A>0){
      X[i]-=1;
      A--;
    }
    else{
      break;
    }
    if(X[i]==0){
      i++;
    }
  }
  
  if(i==N){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}
