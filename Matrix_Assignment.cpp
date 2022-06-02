#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randomArray[10][10];
void generate_random();
void find_Biggest();
void find_most_Repeated();

int main(){
	generate_random();
	find_Biggest();
	find_most_Repeated();
	return 0;
}

void generate_random(){
	srand(time(0));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10;j++){
			randomArray[i][j] =rand() % 201;
		}
	}
	
	for(int i=0; i<10; i++){
		cout<<"\n";
		for(int j=0; j<10; j++){
			cout<<randomArray[i][j]<<" ";
		}
	}
	
}

void find_Biggest(){
	int max = -1;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(randomArray[i][j] > max){
				max = randomArray[i][j];
			}
		}
	}
	cout<<"\n\nMax number is: "<<max<<endl;
}

void find_most_Repeated(){
	int maxFrequency = 0;
	int mostFrequent = -1;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			int frequency = 0;
			
			for(int k=0; k<10; k++){
				for(int l=0; l<10; l++){
					if(randomArray[i][j] == randomArray[k][l]){
						frequency++;
					}
				}
			}
			
			if(maxFrequency < frequency){
				maxFrequency = frequency;
				mostFrequent = randomArray[i][j];
			}
		}
	}
	
	cout<<"\nMost frequent number is: "<< mostFrequent<<endl;
	cout<<"With "<<maxFrequency<<" repetitions"<<endl;
	
}
