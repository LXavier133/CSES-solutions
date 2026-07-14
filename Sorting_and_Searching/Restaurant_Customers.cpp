// A ideia eh somar um na chegada e subtrair um na saida e retornar quando esse valor fica maximo, a operacao fica O(n log n)

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n; cin>>n;
	vector<pair<int,int>> vec;
	for(int i=0; i<n; ++i){
		int a,b;cin>>a>>b;
		vec.push_back({a,1});
		vec.push_back({b,-1});
	}
	sort(vec.begin(),vec.end());
	int count = 0;
	int res = 0;
	for(int i=0; i<2*n; i++){
		count += vec[i].second;
		res = max(res,count);
	}
	cout<<res;
return 0;}

