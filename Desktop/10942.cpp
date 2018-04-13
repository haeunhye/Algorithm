#include<iostream>
using namespace std;
int a[2000];
bool d[2000][2000];
int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		d[i][i] = true;
	} //길이가 1인 경우
	for(int i=0; i<n-1; i++){
		if(a[i]==a[i+1]){
			d[i][i+1]=true;
		}
	} // 길이가 2인경우
	for(int k=3; k<=n; k++){ //k는 길이를 의미
		for(int i=0; i<=n-k; i++){
			int j = i+k-1;
			if(a[i]==a[j]&&d[i+1][j-1]){
				d[i][j] = true;
			}
		}
	}
    int m;
    cin >> m;
    while(m--){
    	int s, e;
    	scanf("%d %d", &s, &e);
    	printf("%d\n", d[s-1][e-1]);
    }
    return 0;
}