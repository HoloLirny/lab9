#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int y,h,b;
    cout<<"Enter your age: ";
    cin>>y;
    if(y<=25){
        cout<<"Enter your height: ";
        cin>>h;
        if(h<100){
            cout<<"Your character = Chopper";
            return 0;
        }else if(h<180){
            cout<<"Your character = Usopp";
            return 0;
        }
        cout<<"Enter your bounty: ";
        cin>>b;
        if(b>1100000000){
            cout<<"Your character = Zoro";
            return 0;
        }else{
             cout<<"Your character = Sanji";
             return 0;
        }
    }else if(y<60){
        cout<<"Enter your bounty: ";
        cin>>b;
        if(b>500000000){
            cout<<"Your character = Jinbe";
            return 0;
        }else{
            cout<<"Your character = Franky";
            return 0;
        }
    }else{
        cout<<"Your character = Brook";
            return 0;
    }

}
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
