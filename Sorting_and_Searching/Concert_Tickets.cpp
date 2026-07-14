// Fiz online a solucao, o problema dela eh que apesar de ser facil ver qual o ticket menor ou igual o preco maximo nao eh facil saber se ja foi escolhido, para isso, usei union-find para achar o menor elemento ainda nao escolhido.

// O(n log n) para ordenar os precos
// O(m log(n)) para achar o ticket
// O(m alpha(n)) achar o ticket que pode ser usado, lembrando que O(alpha(n)) approx O(1)

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;

vector<pair<int,int>> h;

int find(int i){
	if(i < 0) return -1;
	if(h[i].second == i) return i;
	return h[i].second = find(h[i].second);
}

int main(){__
	int n, m; cin>>n>>m;
	for(int i=0; i<n; i++){
		int preco; cin>>preco;
		h.push_back({preco,0});
	}
	sort(h.begin(),h.end());
	for(int i=0; i<n; i++) h[i].second = i;
	for(int i=0; i<m; ++i){
		int t; cin>>t;
		auto idx = lower_bound(h.begin(),h.end(),pair<int,int>{t,INT_MAX});
		if(idx == h.begin()){
			cout<<-1<<"\n";
		}
		else{
			int pos = (idx-h.begin()) -1;
			h[pos].second = find(h[pos].second);
			if(h[pos].second != -1){
				cout<<h[h[pos].second].first<<"\n";
				h[h[pos].second].second = find(h[pos].second-1);
			}
			else{
				cout<<-1<<"\n";
			}
		}
	}
return 0;}

