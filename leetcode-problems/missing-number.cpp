#include <iostream>
#include <vector>
using namespace std;

// [0-n]
int missingNumber(vector<int>& nums) {
    int sum = 0;
    for(int i=0; i<nums.size(); i++) {
        sum += nums[i];
    }
    
    int n = nums.size();
    return (n*(n+1)/2) - sum;
}

int main(int argc, char const *argv[])
{
    vector<int> nums ={0, 1, 3};
    cout << missingNumber(nums);
    return 0;
}
