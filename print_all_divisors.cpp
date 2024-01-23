#include<bits/stdc++.h>
using namespace std;

//Method 1:-
      //having time complexity of O(N)
/*int main(){
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        // unit operation thus its tc not calculated 
        if(num%i ==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
*/
//Method 1:-
      //having time complexity of O(sqrt(N))
int main(){
    int num;
    cin>>num;
    vector<int> v;
    for(int i=1; i<=sqrt(num); i++){
        // unit operation thus its tc not calculated 
        if(num%i ==0){
            if(i == num/i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(num/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it: v){
        cout<< it<<" ";
    }
    return 0;
}