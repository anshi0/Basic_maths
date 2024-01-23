#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void someAlgorithm(int n) {
    for(int i=1; i<=n; i++){
        // unit operation thus its tc not calculated 
        if(n%i ==0){
            cout<<i<<" ";
        }
    }
  // code for the algorithm
}

int main() {
  int n;
  cin >> n;

  auto start = high_resolution_clock::now();
  someAlgorithm(n);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop &mdash; start);

  cout << "Time taken by function: "
       << duration.count() << " microseconds" << endl;
  return 0;
}