#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int num;
    cin>>num;
    int orin = num;
    int obnum =0;
    while(num>0){
        int lastDigit = num%10;
        obnum = obnum + lastDigit*lastDigit*lastDigit;
        num = num /10;
    }
    if(orin == obnum){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}*/

bool checkArmstrong(int n){
	int copy = n;
	int var = 0;
	int count = 0;
	while(n>0){
		float lastDigit = n%10;
		n = n/10;
		count ++;
        for(int i =1; i<= count; i++);{
            lastDigit = lastDigit*lastDigit;
        }
		var = var + lastDigit;
	}
	if(copy == var) return true;
	else return false;
}


int main(){
    checkArmstrong(371);
    return 0;
}