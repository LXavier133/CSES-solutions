// A ideia aqui eh bem basica, so adiciona tudo em um set em n * O(log n) depois retorna o size em O(1)

#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	set<int> difNum;
	int n; cin>>n;
	while(n--){
		int x; cin>>x;
		difNum.insert(x);
	}
	cout<<difNum.size();
return 0;}



