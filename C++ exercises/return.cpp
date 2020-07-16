#include <iostream>
#include <iomanip>
using namespace std;
void instructions(void){
	char op;
	cout << "Do you want instructions?" << endl;
	op = cin.get();
	if(!(op == 'n' || op == 'N'))
		cout << "Rules: ..........." << endl;
}

int main(){
	
	instructions();
	return 0;
}
