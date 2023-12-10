#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,S,K;
  cin>>N>>S>>K;
  vector<int> P(N);
  vector<int> Q(N);
  for(int i=0;i<N;i++){
    cin>>P[i]>>Q[i];
  }
  
  int x=0;
  for(int i=0;i<N;i++){
    x+=P[i]*Q[i];
  }
  
  if(x<S){
    x+=K;
  }
  
  cout<<x<<endl;
}
