#include<iostream>
using namespace std;
int a[10001];
int d[10001];
int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	d[1] = a[1];
	d[2] = a[1] + a[2];
	for(int i=3; i<=n; i++){
		d[i] = d[i-1]; // 0번연속
		if(d[i]<d[i-2]+a[i]){
			d[i] = d[i-2] + a[i]; 
		} //1번연속
		if(d[i]<d[i-3]+a[i-1]+a[i]){
			d[i] = d[i-3] + a[i] + a[i-1];
		}//2번연속
	}

	cout << d[n] << '\n';
	return 0;
}