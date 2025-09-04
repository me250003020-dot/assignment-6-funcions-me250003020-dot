#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptIndex(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, 1);

    // Prefix product
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefix;
        prefix *= arr[i];
    }

    // Suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= arr[i];
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> result = productExceptIndex(arr);

    for (int val : result) {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}

	
