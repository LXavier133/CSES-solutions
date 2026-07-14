// Se a crianca mais pesada nao consegue ir com a mais leve, ela tem que ir sozinho, se nn, as duas podem ir juntas
// Ordena os pesos, e vai com esse two-pointer para fazer os pares

// O(n log n) para ordenar
// O(n) para achar os pares

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n,x; cin>>n>>x;
	vector<int> peso;
	for(int i=0; i<n; ++i){
		int p; cin>>p;
		peso.push_back(p);
	}
	sort(peso.begin(), peso.end());
	int ini = 0;
	int fim = n-1;
	int res = 0;
	while(fim > ini){
		if(peso[ini] + peso[fim] <= x) ++ini;
		--fim;
		++res;
	}
	if(ini == fim) ++res;
	cout<<res;
return 0;}

