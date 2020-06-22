//Pythagoras' theorem and triangle verification
#include <iostream>
using namespace std;
int main(){
	float sideA, sideB, sideC;
	
	cout << "Type all sides of the triangle: " << endl;
	cin >> sideA >> sideB >> sideC;
	
	if(sideA + sideB > sideC && sideA + sideC > sideB &&
	sideB + sideC > sideA){
		cout << "It's a triangle!" << endl;
		if(
		sideA * sideA + sideB * sideB == sideC * sideC ||
		sideA * sideA + sideC * sideC == sideB * sideB ||
		sideB * sideB + sideC * sideC == sideA * sideA	)
			cout << "It's a right triangle!" << endl;
		else{
			if(
			(sideA == sideB && sideA != sideC) ||
			(sideA == sideC && sideA != sideB) ||
			(sideB == sideC && sideB != sideA)	)
				cout << "It's a isosceles triangle!" << endl;
			else if(sideA == sideB && sideA == sideC)
					cout << "It's a equilateral triangle!" << endl;
				else
					cout << "It's a scalene triangle!" << endl;
		}		
	}
	else
		cout << "It's not a triangle." << endl;
}
