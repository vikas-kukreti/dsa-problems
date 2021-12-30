#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// using sorted list | O(n)
vector<int> missingNumbers(vector<int> nums) {
    vector<int> missing;
    int diff = *nums.begin();
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > diff + i) {
            while(nums[i] > diff + i) {
                missing.push_back(i + diff);
                diff++;
            }
        }
    }
    return missing;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 5, 6, 10};
    vector<int> missing = missingNumbers(nums);
    for(int x: missing) {
        cout << x << ", ";
    }

    return 0;
}
