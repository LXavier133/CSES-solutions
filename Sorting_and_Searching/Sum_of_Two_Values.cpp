//Problema classico de two pointers

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,x;cin>>n>>x;
	vector<pair<int,int>> vec;
	for(int i=0; i<n; i++){
		int a;cin>>a;
		vec.push_back({a,i+1});
	}
	sort(vec.begin(), vec.end());
	int ini = 0;
	int fim = n-1;
	while(ini < fim){
		int sum = vec[ini].first + vec[fim].first;
		if(sum == x){
			cout<<vec[ini].second<<" "<<vec[fim].second;
			return 0;
		}
		else if(sum > x){
			--fim;
		}
		else if(sum < x){
			++ini;
		}
	}
	cout<<"IMPOSSIBLE";
return 0;}

