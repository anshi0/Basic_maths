#include <iostream>
#include <vector>
using namespace std;
/*int main()
{
    int num;
    cin >> num;
    int count = 0;
    int originalNum;
    vector<int> v;
    originalNum = num;
    while (num > 0)
    {
        int lastDigit = num % 10;
        if (lastDigit > 0 && originalNum % lastDigit == 0)
        {
            count++;
            v.push_back(lastDigit);
        }
        num = num / 10;
    }

    /*vector<int> v2;
    for (int i = 0; i < v.size(); i++)
    {
        if (num % v[i] = 0)
        {
            v2.push_back(v[i]);
        }
        else
        {
            v2.push_back(v[i]);
        }
    }*/
    /*
    cout << v.size();
    return 0;
}*/

int countDigits(int n){
	int count = 0;
	int originalNum;
	originalNum = n;
	while(n>0){
		int lastDigit = n%10;
		if(lastDigit >0 && originalNum % lastDigit == 0){
			count++;
		}
		n=n/10;
	}
	cout<<count;
    return count;
	// Write your code here.	
}

int main(){
    int num;
    cin>>num;
    countDigits(num);
    return 0;
    }