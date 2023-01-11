
#include <bits/stdc++.h>
using namespace std;

void shiftLeft(vector<int> &nums, int start, int diff, int size)
{
    for (int i = start; i < size - diff; i++)
    {
        nums[i] = nums[i + diff];
    }
}

int removeDuplicates(vector<int> &nums)
{
    int size = nums.size();
    for (int i = 0; i < size - 1;)
    {
        if (nums[i] == nums[i + 1])
        {
            int start = i;
            int end = i + 1;
            while (end < size - 1 && nums[start] == nums[end + 1])
            {
                end = end + 1;
            }
            int diff = end - start;
            shiftLeft(nums, start, diff, size);
            size -= diff;
        }
        else
        {
            i++;
        }
    }
    return size;
}

int main()
{
    vector<int> v = {1, 1};
    int size = removeDuplicates(v);
    cout << size;
    return 0;
}