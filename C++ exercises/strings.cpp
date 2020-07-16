//Working with strings
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
int main(void){
	string phrase = "I'm doing a great laugh!";
	cout << phrase << endl;
	cout << phrase.length() << " characters." << endl;
	cout << phrase.find("laugh", 0) << " index" << endl;
	return 0;
}
