#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// using unsorted list | O(N)
vector<int> missingNumbersUnsorted(vector<int> nums) {
    vector<int> missing;
    int low = nums[0], high = nums[0];
    for(int i=1; i<nums.size(); i++) {
        if(low > nums[i]) low = nums[i];
        if(high < nums[i]) high = nums[i];
    }
    vector<int> hash(high+1, 0);
    for(int i=0; i<nums.size(); i++) {
        hash[nums[i]] = 1;
    }

    for(int i=low; i<high; i++) {
        if(hash[i] == 0) {
            missing.push_back(i);
        }
    }

    return missing;
}

// using sorted list | O(N)
vector<int> missingNumbers(vector<int> nums) {
    vector<int> missing;
    int diff = *nums.begin();
    for(int i=0; i<nums.size(); i++) {
        if(diff != nums[i] - i) {
            while(diff < nums[i]-i) {
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
    vector<int> missing = missingNumbersUnsorted(nums);
    for(int x: missing) {
        cout << x << ", ";
    }

    return 0;
}
