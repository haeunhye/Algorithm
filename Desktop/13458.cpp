#include<iostream>
using namespace std;
int a[1000001];
int min[1000001];
int b, c;
int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	cin >> b >> c;
	long long result = 0;

	for(int i=1; i<=n; i++){
		a[i] = a[i] - b;
		result ++;
		if(a[i]>0){
			if(a[i]%c==0){
				result += (a[i]/c);
			} else{
				result += (a[i]/c)+1;
			}
		}
	}
   cout << result << '\n';
   return 0;
}