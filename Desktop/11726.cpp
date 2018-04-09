#include<iostream>
using namespace std;
int d[1001];

int main(){
	int n;
	cin >> n;
	d[0]=1; // 2x1은 세로로 하나 놓기 1개, 근데 2x2는 총 세개이므로 결국 2x0도 1이라고 생각해줘야함
	d[1]=1;
	for(int i=2; i<=n; i++){
		d[i] = d[i-1] + d[i-2];
		d[i] = d[i] % 10007;
	}
   
   cout << d[n] << '\n';
   return 0;
}