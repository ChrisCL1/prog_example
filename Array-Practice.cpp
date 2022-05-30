// array [10] llenar manualmente con un ciclo for para que el usuario escoja 
//cuáles numeros poner.
//ejemplo:
// 6, 0, 1, 3, 5, 8, 5, 7, 2, 6 almacenar en un array
//imprimir el primer, el quinto y el décimo lugar.
//6,8,6

#include<iostream>

using namespace std;

int main (){
	int n, i;
	
int array [10];//definir el tamaño del array

cout << "Insert 10 numbers: "<< "\n";//Instrucción al usuario

for(int i=0; i<10; i++){ //ciclo for para ingresar los 10 numeros.
	
	cout <<"";//Ingresar los numeros del array
	cin>> array[i]; //lugar en donde se van a almacenar los numeros del array
}

cout << "1st position: "<< array [0]<<"\n"; //Imprimir el numero que está en la primera posición
cout << "5th position: "<< array [4]<<"\n"; //Imprimir el numero que está en la quinta posición
cout << "10th position: "<< array [9]<<"\n"; // Imprimir el numero que está en la décima posición

}
