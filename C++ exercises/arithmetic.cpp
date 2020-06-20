//Aritmética
#include <iostream>
using namespace std;
int main(){
	float force, mass;
	float const gravity = 9.8; 
	cout << "Type the force in N" << endl;
	cin >> force; 
	mass = force/gravity;
	cout << "The mass is equal: " << mass << "Kg." << endl;
	 
	return 0;
}
