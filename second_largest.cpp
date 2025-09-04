#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) { if (arr.size() < 2) return -1;

    int largest = INT_MIN, second = INT_MIN;

    for (int val : arr) {
        if (val > largest) {
            second = largest;
            largest = val;
        } else if (val > second && val != largest) {
            second = val;
        }
    }

    return (second == INT_MIN) ? -1 : second;
}
    // TODO: complete the function as per instructions



int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}

