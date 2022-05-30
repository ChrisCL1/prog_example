//Make a Fibonacci series (serie en donde se le va sumando el digito anterior, iterando)
// 1,1,2,3,4,5,7,13..., n
// x, y, z, n=y+z

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	unsigned long long n, x=0, y=1, z=0;
	cout << "Enter the number of elements: ";
	cin >> n;
	
	cout << "1";
	
	for(int i=1; i<n; i++){
		z = x+y;
		cout <<z<< " ";
		x = y;
		y = z;
		cout << "" <<endl;
	}
	
	return 0;	
}
