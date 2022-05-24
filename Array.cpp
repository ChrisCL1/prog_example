#include<iostream>
using namespace std;

int main(){
	int array[10];
	
	for(int i=0; i<10; i++){
		cout<<"Enter a number: "<<i+1<<":"<<endl;
		cin>>array[i];
	}
	
	cout<<"First Number: "<<array[0]<<endl;
	cout<<"Fifth Number: "<<array[4]<<endl;
	cout<<"Tenth Number: "<<array[9]<<endl;
	
	return 0;
}
