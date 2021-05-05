#include <bits/stdc++.h>
using namespace std;

int main() {
	//Variaveis do dia e da frequencia de pessoas que foram vistas no dia
	int n;
	int freq[1005] = {0};
	
	//recebo a quantidade de dias e os pauzinhos com o numero de pessoas
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		freq[s.size()]++;
	}
	//iteração para ver qual a maior frequencia
	int ans = 0;
	for (int i = 0; i < 1005; i++){
		if (freq[i] > freq[ans]){
			ans = i;
		}
	}
	cout << ans << "\n";
}