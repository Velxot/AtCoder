#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin>>N;
  
  long long i=0;
  long long j=0;
  long long k=0;
  long long I=1;
  long long J=1;
  long long K=1;
  int c=0;
  vector<long long> A(333,0);
  for(int c=0;c<333;c++){
    A[c]=I+J+K;
    if(I==J && I==K){
      i=0;
      I=1;
      j=0;
      J=1;
      k++;
      K+=pow(10,k);
    }
    else if(I==J){
      i=0;
      I=1;
      j++;
      J+=pow(10,j);
    }
    else{
      i++;
      I+=pow(10,i);
    }
  }
  cout<<A[N-1]<<endl;
}
