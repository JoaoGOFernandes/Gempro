#include <bits/stdc++.h>
using namespace std;
//Identifica se é um palindromo

int main () {
	string s; cin >> s;
	int n = s.size();
	

	//checo se é palindromo
	bool ans = true;
	for(int i = 0, j = n-1; i < j; i++, j--){
		if(s[i] != s[j]){
			ans = false;
		}
	}
	if(ans) cout << "Palindromo\n";
	else cout << "Nao eh\n";
}