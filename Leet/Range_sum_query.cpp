// Leet code question number 303
#include <iostream>
#include <vector>
using namespace std;

//initialise prefix vector
vector<int> prefix;

class NumArray {
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n+1); // Initialize prefix sum array with size (n+1)

        //compute prefix sum
        prefix[0] = 0;
        prefix[1] = nums[0];
        for(int i = 1; i < n; i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};
int main() {
    // Sample input: nums = [-2, 0, 3, -5, 2, -1]
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    
    // Creating the NumArray object
    NumArray obj(nums);
    
    // Example test cases
    cout << "sumRange(0, 2) = " << obj.sumRange(0, 2) << endl;  // Output: 1
    cout << "sumRange(2, 5) = " << obj.sumRange(2, 5) << endl;  // Output: -1
    cout << "sumRange(0, 5) = " << obj.sumRange(0, 5) << endl;  // Output: -3

    return 0;
}