#include<bits/stdc++.h>
using namespace std;

int random_index(int start, int end) {
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<int> distribution(start, end);
    return distribution(engine);
}

void quick_sort(vector<int> &nums, int start, int end) {
    if (start >= end) {
        return;
    }
    int pivot_index = random_index(start, end);
    swap(nums[end], nums[pivot_index]);
    int pivot = nums[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
        if (nums[j] >= pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[end]);
    pivot_index = i + 1;
    quick_sort(nums, start, pivot_index - 1);
    quick_sort(nums, pivot_index + 1, end);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    quick_sort(nums, 0, nums.size() - 1);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
