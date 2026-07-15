// Minimiza |p1-x|+|p2-x|+|p3-x|+... derivando e igualando a 0 fica +-1+-1+-1+-1... = 0 ou seja, a mediana ou qualquer valor entre os dois elementos entre a mediana

// Trivialmente ordenando se resolve em O(n log n) mas tem uma solucao mais elegante e menos complexa em O(n) usando median of medians.

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	vector<int> vec;
	for(int i=0; i<n; ++i){
		int p; cin>>p;
		vec.push_back(p);
	}
	nth_element(vec.begin(), vec.begin()+n/2, vec.end());
	int t = vec[n/2];
	ll res = 0;
	for(int i=0; i<n; i++) res+= abs(vec[i]-t);
	cout<<res;
return 0;}

