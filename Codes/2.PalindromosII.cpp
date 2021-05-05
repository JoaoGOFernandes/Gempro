#include <bits/stdc++.h>
using namespace std;
//Dado uma palivra identifica quantas letras tem que mudar para se tornar um palindromo

int main () {
	//variavel que informa o tamanho e qual apalavra de entrada
	int n; cin >> n;
	string s; cin >> s;
	

	//variavel que checa quando letras tem que mudar
	int ans = 0;
	for(int i = 0, j = n-1; i < j; i++, j--){
		if(s[i] != s[j]){
			ans++;
		}
	}
	cout << ans << "\n";
}