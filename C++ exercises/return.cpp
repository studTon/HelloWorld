#include <iostream>
#include <iomanip>
using namespace std;
void instructor(void){
	char op;
	cout << "Do you want instructions?" << endl;
	op = cin.get();
	if(op == 'n' || op == 'N')
		return;
	else
		cout << "Rules: ..........." << endl;
}

int main(){
	
	instructor();
	return 0;
}
