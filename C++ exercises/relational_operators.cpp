//Operadores relacionais
#include <iostream>
using namespace std;
int main(){
	int age;
	cout << "Digite sua idade: " << endl;
	cin >> age;
	cout << "Pode tirar carteira de motorista." << (age >= 18) << endl;
	cout << "Proibido tirar carteira de motorista." << !(age >= 18) << endl;
}
