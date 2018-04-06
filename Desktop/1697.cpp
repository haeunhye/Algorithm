#include<iostream>
#include<queue>
using namespace std;

#define max 200000
bool check[max];
int dist[max];

int main(){
	int n, k;
	cin >> n >> k;
	check[n]=true;
	dist[n]=0;
	queue<int> q;
	q.push(n);
	while(!q.empty()){
		int now = q.front();
		q.pop();
		if(now-1>=0){
			if(check[now-1]==false){
				q.push(now-1);
				check[now-1]=true;
				dist[now-1]=dist[now]+1;
			}
		}
		if(now+1<max){
			if(check[now+1]==false){
				q.push(now+1);
				check[now+1]=true;
				dist[now+1]=dist[now]+1;
			}
		}
		if(now*2<max){
			if(check[now*2]==false){
				q.push(now*2);
				check[now*2]=true;
				dist[now*2]=dist[now]+1;
			}
		}
	}
	cout << dist[k] << '\n';
	return 0;
}