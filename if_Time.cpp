#include <iostream>
using namespace std;

int main(){
    int time;

    cout<<"Enter the time: "<<endl;
    cin>>time;

    if(time >= 1 && time < 12){
        cout<<"Good Morning!"<<endl;
    }else if(time == 12){
        cout<<"It's noon!"<<endl;
    }else if (time > 12 && time <= 18){
        cout<<"Good Evening!"<<endl;
    }else if(time > 18 && time <= 24){
        cout<<"Good Night!"<<endl;
    }else if(time == 00){
        cout<<"It's Midnight!"<<endl;
    }else{
        cout<<"Error!";
    }   

    return 0;
}