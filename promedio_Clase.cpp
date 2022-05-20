#include<iostream>
using namespace std;

int main(){
	int fila, columna;
	float promedio = 0.0f;
	
	cout<<"Introduzca el numero de alumnos: ";
	cin>>fila;
	
	cout<<"Introduzca el numero de calificaciones: ";
	cin>>columna;
	
	float matriz[fila][columna + 1] = {0.0f};
	
	for(int i = 0; i < fila; i++){
		cout<<"\nAlumno "<<i + 1<<":"<<endl;
		for(int j = 0; j < columna; j++){
			cout<<"Calificacion "<<j + 1<<":"<<endl;
			cin>>matriz[i][j];
			matriz[i][columna] += matriz[i][j];
			promedio += matriz[i][j];
		}
	}
	
	for(int i = 0; i < fila; i++){
		cout<<"\nAlumno "<<i + 1<<": "<<"Promedio: "<<matriz[i][columna] / columna;
	}
	
	cout<<"\nPromedio de la clase: "<<promedio / (fila * columna)<<endl;
			
	return 0;
}
