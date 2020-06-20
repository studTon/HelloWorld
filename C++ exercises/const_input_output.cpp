//Constantes
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
#define Pi 3.1415926535897932384626433
int main(){
	float raio;
	float Perimetro;
	cout << "Digite o raio da circ.:" << endl;
	cin >> raio;
	Perimetro = 2*Pi*raio;
	cout << "Perimetro da circ.: " << Perimetro << endl;
	return 0;
}
