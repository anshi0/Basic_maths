#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    int n;
    cin>>n;
    for(int j=1; j<=n; j++){
        //int i=j;
        for(int i=j; i>0; i--){
            int lastDigit = i%10;
            if(lastDigit == 1){
                count++;
            }
            i = i/10;
        }
    }
    cout<< count;
    return 0;
}