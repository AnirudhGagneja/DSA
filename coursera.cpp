#include <iostream>
#include <vector>
using namespace std;

long long maxPairwiseProduct(const vector<int>& nums) {
    int n = nums.size();
    int max_index1 = -1;

    // Find index of largest number
    for (int i = 0; i < n; ++i) {
        if (max_index1 == -1 || nums[i] > nums[max_index1]) {
            max_index1 = i;
        }
    }

    int max_index2 = -1;
    // Find index of second largest (not equal to max_index1)
    for (int i = 0; i < n; ++i) {
        if (i != max_index1 && (max_index2 == -1 || nums[i] > nums[max_index2])) {
            max_index2 = i;
        }
    }

    // Use long long to avoid overflow
    return static_cast<long long>(nums[max_index1]) * nums[max_index2];
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << maxPairwiseProduct(nums) << endl;
    return 0;
}
