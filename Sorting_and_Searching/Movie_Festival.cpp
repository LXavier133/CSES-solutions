// O problema classico das atividas, escolhe a que acaba primeiro e vai escolhendo as proximas se acabar dps dessa

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	vector<pair<int,int>> mv;
	for(int i=0; i<n; i++){
		int a,b;cin>>a>>b;
		mv.push_back({b,a});
	}
	sort(mv.begin(), mv.end());
	int ult = 0;
	int res = 1;
	for(int i=1; i<n; i++) if(mv[i].second >= mv[ult].first){
			++res;
			ult = i;
	}
	cout<<res;
return 0;}

