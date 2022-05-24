#include<iostream>
using namespace std;

int main(){
	int row, column;
	float average = 0.0f;
	
	cout<<"Enter the number of students: ";
	cin>>row;
	
	cout<<"Enter the number of grades: ";
	cin>>column;
	
	float matriz[row][column + 1] = {0.0f};
	
	for(int i = 0; i < row; i++){
		cout<<"\nStudent "<<i + 1<<":"<<endl;
		for(int j = 0; j < column; j++){
			cout<<"Grade "<<j + 1<<":"<<endl;
			cin>>matriz[i][j];
			matriz[i][column] += matriz[i][j];
			average += matriz[i][j];
		}
	}
	
	for(int i = 0; i < row; i++){
		cout<<"\nStudent "<<i + 1<<": "<<"Average: "<<matriz[i][column] / column;
	}
	
	cout<<"\nAverage of the class: "<<average / (row * column)<<endl;
			
	return 0;
}
