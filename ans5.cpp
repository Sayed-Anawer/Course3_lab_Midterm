#include <bits/stdc++.h>
using namespace std;

int find_max(vector<int> arr, int start, int end) {
    if (start == end) {
        return arr[start];
    }
    int mid = (start + end) / 2;
    int left_max = find_max(arr, start, mid);
    int right_max = find_max(arr, mid + 1, end);
    return max(left_max, right_max);
}

int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << find_max(arr, 0, arr.size() - 1) << endl;
    return 0;
}



