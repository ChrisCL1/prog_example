#include<iostream>
using namespace std;

int main(){
	//int x[3][4] = { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} };
	int i, j;
	int y[i][j];
	cout<<"Introduce el primer valor de la fila: "<<endl;
	cin>>i;
	cout<<"Introduce el primer valor de la columna: "<<endl;
	cin>>j;
		for(int i=0; i<=3; i++){
			for(int j=0; i<=4; j++){
				cin>>y[i][j];
				cout<<y<<endl;
			}
		}
	
	cout<<"El valor de la matriz es: "<<endl;
	
	return 0;
}
