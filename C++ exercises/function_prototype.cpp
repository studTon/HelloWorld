//Functions prototypes
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
float area(float, float);

float area(float width, float length){
	return width * length;
}

int main(void){
	float x, y;
	
	cout << "Type any number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	
	cout << "Area: " << area(x,y) << " units" << endl;
	return 0;
}

