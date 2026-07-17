// A ideia aqui eh soh um floodfill, implementei bem bobo com DFS

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

bool seen[1000][1000];
char tab[1000][1000];

int n,m;
void dfs(int i, int j){
	if(seen[i][j]==true || i>=n || j>=m || i<0 || j<0 || tab[i][j]!='.') return;
	seen[i][j]=true;
	dfs(i+1,j);
	dfs(i,j+1);
	dfs(i-1,j);
	dfs(i,j-1);}	
int main(){__
	cin>>n>>m;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>tab[i][j];
	int res = 0;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(!seen[i][j] && tab[i][j]=='.'){
		res++;
		dfs(i,j);
	}
	cout<<res;
return 0;}
 
