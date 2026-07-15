// Se eu consigo fazer todas as moedas ate X abrem dois casos

// Proximo numero N eh entre 1 e X+1
// Sei que consigo fazer 1,2,3...X, agora consigo tambem 1,2,3..X+N (Ex. quero fazer X+2, basta fazer X-N+2 e depois somar N)

//Proximo numero N eh maior que X+1
//Como eu fazia X+1? sei fazer X-N+1 -> nao pq eh negativo -> nao da pra fazer

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n; cin>>n;
	vector<int> vec;
	for(int i=0; i<n; ++i){
		int x;cin>>x;
		vec.push_back(x);
	}
	sort(vec.begin(),vec.end());
	ll res = 0;
	int idx = 0;
	while(idx<n){
		if(vec[idx] > res+1){
			cout<<res+1;
			return 0;
		}
		else res+=vec[idx++];
	}
	cout<<res+1;
return 0;}

