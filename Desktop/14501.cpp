#include<iostream>
using namespace std;
int d[16];
int p[16];
int t[16];

int main(){
      int n;
      cin >> n;
      for(int i=1; i<=n; i++){
      	cin >> t[i] >> p[i];
      	d[i] = p[i];
      }

      for(int i=2; i<=n; i++){
      	for(int j=1; j<i; j++){
      		if(i>=t[j]+j){
      		d[i] = max(d[i], p[i]+d[j]);	
      	   }
      	 }
      }

      int result = d[0];
      for(int i=1; i<=n; i++){
      	if(i+t[i]-1<=n){
            if(result<d[i]){
      		result = d[i];
            }
      	} 
      }
      cout << result; 
      return 0;     
}