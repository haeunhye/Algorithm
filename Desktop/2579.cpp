#include<iostream>
#define max(a,b) (((a)>(b))?(a):(b))
using namespace std;
int d[301];
int a[301];
int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	d[1] = a[1];
	d[2] = a[1] + a[2];
	for(int i=3; i<=n; i++){
		d[i] = max(d[i-2]+a[i],d[i-3]+a[i]+a[i-1]);
	}
	cout << d[n] << '\n';
	return 0;
}