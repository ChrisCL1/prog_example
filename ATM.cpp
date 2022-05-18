#include <iostream>
using namespace std;

int doAnotherOperation;

void Operations(){
	int operation;
	float balance = 1000, withdraw, deposit;
	
		cout<<"Welcome to Chris ATM."<<endl;
		cout<<"Please select the operation you want to realice: "<<endl;
		cout<<"1 - Check Balance	2 - Deposit		3 - Withdraw"<<endl;
		cin>>operation;
		
		if(operation == 1){
			cout<<"Your balance is: "<<balance<<"$"<<endl;
		}else if(operation == 2){
			cout<<"Please enter the amount you want to deposit: "<<endl;
			cin>>deposit;
				balance = balance + deposit;
			cout<<"Your balance has been updated."<<endl;
			cout<<"Your balance is: "<<balance<<"$"<<endl;
		}else if(operation == 3){
			cout<<"Please enter the amount you want to withdraw: "<<endl;
			cin>>withdraw;
				if(withdraw>balance){
					cout<<"Your balance is: "<<balance<<endl;
					cout<<"Your balance is not enough."<<endl;
				}else{
					cout<<"Proceeding with the operation"<<endl;
						balance = balance - withdraw;
					cout<<"Your balance has been updated"<<endl;
					cout<<"Your actual balance is: "<<balance<<"$"<<endl;
				}
		}
		cout <<"Do you wish to do another operation?"<< endl;
		cout<<"1 - YES	2 - NO"<<endl;
		cin >> doAnotherOperation;
		if(doAnotherOperation == 1){
			Operations();
		}else{
			cout<<"Thank you for use Chris ATM.";
		}

}

int main() {
	Operations();
	return 0;
}