#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int current = 0;
    for(int i=0; i<nums.size(); i++) {
        if(val != nums[i]) {
            nums[current++] = nums[i];
        }
    }
    return current;
}

void testAnswer(vector<int>& nums, int val, int size) {
    for(int i=0; i<size; i++) {
        if(nums[i] == val) {
            cout << "Test Failed!";
            return;
        }
    }
    cout << "Test Pass";
}

main() {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int size = removeElement(nums, val);
    testAnswer(nums, val, size);
    return 0;
}