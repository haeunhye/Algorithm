#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	vector<int> d(n);
	for(int i=n-1; i>=0; i--){
		d[i] = 1;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i] && d[i] < d[j] + 1){
				d[i] = d[j] + 1;
			}
		}
	}
	cout << *max_element(d.begin(), d.end()) << '\n';
	return 0;
}