#include <iostream>
using namespace std;
int main(){
  int N=100; //Number of iterations
  int s=20; //Starting iteration number plottes
  for(double j=0; j<=4; j=j+0.01){
    double r=j;
    double x=0.5;
  for(int i=1; i<=s-1; i++){
    x=x*r*(1-x);
    
  }
    for(int k=s; k<=N+1; k++){
          cout << r<< " "<< k <<" " << x << endl;
	  x=x*r*(1-x);
  }}
  return 0;
}
  
 