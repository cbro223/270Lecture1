#include <iostream>
#include <vector>

using namespace std;
int binarysearch(vector<int> &nums, int target_value, int ixlow, int ixhigh) {
    cout << "Searching for " << target_value << " in the range " << ixlow << " to " << ixhigh << endl;
    if (ixlow == ixhigh) return -1;

    int ixmid = (ixhigh + ixlow) /2;

    if (nums[ixmid] == target_value) return ixmid;

    if(nums[ixmid] < target_value) return binarysearch(nums, target_value, ixlow, ixmid -1);
    else return binarysearch(nums,target_value,ixmid + 1, ixhigh);
}
int main() {
    // Create an array of 10 numbers, between 0 and 50 in order 
    vector<int> nums;
    for (int i = 0; i < 10; i++) {
        nums.push_back(i * 5);
    }
    // Search for the number 20
    int target_value = 19;
    int ix = binarysearch(nums, target_value, 0, nums.size() - 1);
    if (ix == -1) {
        cout << "The number " << target_value << " was not found." << endl;
    } else {
        cout << "The number " << target_value << " was found at index " << ix << endl;
    }
    return 0;
}