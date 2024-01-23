#include<iostream>
using namespace std;

int main(){
    int num;
    cin>> num;
    int originalNum = num;
    int revNum =0;
    while(num>0){
        revNum = revNum*10 + num % 10;
        num = num/10;
    }
    if (originalNum == revNum){
        cout<< "True";
    }
    else{
        cout<<"False";
    }
    return 0;
}