#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	
	//Creating the matrix
	cout<<"Digite el numero de filas: "<<endl;
	cin>>filas;
	
	cout<<"Digite el numero de columnas: "<<endl;
	cin>>columnas;
	
	//storing the elements of each component
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
		cout<<"\n";
	}
	
	//printing the original matrix
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n\n";
	
	//Printing the matrix transpose
	
	for(int i=0; i<columnas; i++){
		for(int j=0; j<filas; j++){
			cout<<numeros[j][i];
		}
		cout<<"\n";
	}
	
	return 0;
}
