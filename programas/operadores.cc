#include <iostream>

using namespace std;

int main(){
	int numero1, numero2; 
	int r;
	cout << "Walescko Software Solutions \n" ;
	cout << "Digite o primeiro número: ";
	cin >> numero1;
	cout << "Digete o segundo número: ";
	cin >> numero2;
	r = numero1 + numero2;
	cout << "A soma dos números é " << r << endl;
	r = numero1 - numero2;
	cout << "A diferença dos números é " << r << endl;
	r = numero1 * numero2;
	cout << "A multiplicação dos números é " << r << endl;
	r = numero1/numero2;
	cout << "A divisão de a/b é " << r << endl;
	r = numero1 % numero2;
	cout << "O resto da divisão a/b é " << r << endl;

	cout <<"Fim do programa" << endl;
	return 0;
}
