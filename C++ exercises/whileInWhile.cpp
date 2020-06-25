//Testing while in while
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num;
	int linha, coluna;
	
	linha = 1;
	while(linha < 5){
		coluna = 1;
		while(coluna < 5){
			cout << setw(4) << linha * coluna;
			coluna++;
		}
		cout << endl;
		linha++;
	}
	return 0;
}
