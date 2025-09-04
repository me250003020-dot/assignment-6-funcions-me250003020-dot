#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) { int sum = 0;
    for (int val : arr) {
        sum += val;
    }
    return  sum;}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
        cin >> arr[i];

    cout << sumArray(arr) << "\n";
    return 0;
}

