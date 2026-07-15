// Ideia: se eu passo por i+1 antes de i, sinal que preciso de um novo round
#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fl <<"\n"
#define INF LLONG_MAX
#define SS <<" "<<
typedef long long ll;
int main(){__
	int n;cin>>n;
	int arr[n+1];
	for(int i=0; i<n; ++i){
		int x;cin>>x;
		arr[x]=i;
	}
	int res = 1;
	for(int i=1; i<n; i++) if(arr[i]>arr[i+1]) res++;
	cout<<res;
return 0;}

