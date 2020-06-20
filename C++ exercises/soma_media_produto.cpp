//Soma, média e produto
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a, b, c;
	int soma, produto;
	float media;
	cout << "Digite os 3 valores: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	soma = a + b + c;
	media = soma / 3.0;
	produto = a * b * c;
	cout.setf (ios::fixed | ios::showpoint);
	cout.precision(2);
	cout << "Soma: " << soma << "\nMedia: " << setw(2) << media << "\nProduto: " << produto << endl;
	return 0;
}
