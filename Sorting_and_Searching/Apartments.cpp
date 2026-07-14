// A ideia aqui eh que a solucao gulosa sempre funciona, nao importa se A ou B vao pegar quarto, desde que um quarto va pra so uma pessoa
// Ordenando os tamanhos dos quartos e as exigencias, eh facil ver que se o cliente 1 nao consegue pegar o quarto 1 pq o quarto 1 eh mto pequeno, os clientes 2,3,4.. tambem nao conseguem
//Entao basta achar o primeiro quarto que o 1 consegue pegar e para garantir que nenhum outro pegue, tira ele do range de busca

//O(n log n) ordena cliente
//O(m log m) ordena a capacidade
//O(n log m) procura os quartos para cada cliente

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n, m, k; cin>>n>>m>>k;
	vector<int> a,b;
	for(int i=0; i<n; ++i){
		int ap; cin>>ap;
		a.push_back(ap);
	}
	for(int i=0; i<m; ++i){
		int sz; cin>>sz;
		b.push_back(sz);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	int res = 0;
	auto idx = b.begin();
	for(int i=0; i<n; i++){
		auto pos = lower_bound(idx,b.end(),a[i]-k);
		if(pos != b.end() && *pos <= a[i]+k){
			++res;
			idx = ++pos;
		}
	}
	cout<<res;	
return 0;}

