#include<iostream>
#include<queue>
using namespace std;
#define max 201
bool check[max][max];
bool ans[max];

int main(){
	int a, b, c;
	cin >> a>> b >> c;
	int sum = c;
	queue<pair<int,int>> q;
	q.push(make_pair(0,0));
	 check[0][0]=true;
	 ans[c] = true;

	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		int z = sum - x - y;
		q.pop();
		int nx, ny, nz;

		//x->y
		nx = x; ny = y; nz = z;
		ny = ny + nx;
		nx = 0;
		if(ny>=b){
			nx = ny - b;
			ny = b;
		}
		if(check[nx][ny]==false){
			check[nx][ny]=true;
			q.push(make_pair(nx,ny));
			if(nx==0){
				ans[nz]=true;
			}
		}

		//x->z
		nx = x; ny = y; nz = z;
		nz = nz + nx;
		nx = 0;
		if(nz>=c){
			nx = nz - c;
			nz = c;
		}
		if(check[nx][ny]==false){
			check[nx][ny]=true;
			q.push(make_pair(nx,ny));
			if(nx==0){
				ans[nz]=true;
			}
		}

		//y->x
		nx = x; ny = y; nz = z;
		nx = nx + ny;
		ny = 0;
		if(nx>=a){
			ny = nx - a;
			nx = a;
		}
		if(check[nx][ny]==false){
			check[nx][ny]=true;
			q.push(make_pair(nx,ny));
			if(nx==0){
				ans[nz]=true;
			}
		}

		//y->z
		nx=x; ny=y; nz=z;
		nz = nz + ny;
		ny = 0;
		if(nz>=c){
			ny = nz - c;
			nz = c;
		}
		if(check[nx][ny]==false){
			check[nx][ny]=true;
			q.push(make_pair(nx,ny));
			if(nx==0){
				ans[nz]=true;
			}
		}

		//z->x
		nx=x; ny=y; nz=z;
		nx = nx + nz;
		nz = 0;
		if(nx>=a){
			nz = nx - a;
			nx = a;
		}
		if(check[nx][ny]==false){
			check[nx][ny]=true;
			q.push(make_pair(nx,ny));
			if(nx==0){
				ans[nz]=true;
			}
		}

		//z->y
		nx=x; ny=y; nz=z;
		ny = ny + nz;
		nz = 0;
		if(ny>=b){
			 nz = ny - b;
			 ny = b;
		}
		if(check[nx][ny]==false){
			check[nx][ny]=true;
			q.push(make_pair(nx,ny));
			if(nx==0){
				ans[nz]=true;
			}
		}
	}

	for(int i=0; i<=c; i++){
		if(ans[i]){
		cout << i << ' ';
	   }
	}

	return 0;
}