#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minDifference(vector<int> candies, int students)
{
    sort(candies.begin(), candies.end());
    int packets = candies.size();
    if (packets == 0 || students == 0)
    {
        return 0;
    }
    if (packets < students)
    {
        return -1;
    }
    int minDiff = INT16_MAX;
    for (int i = 0; i < packets - students + 1; i++)
    {
        minDiff = min(candies[i + students - 1] - candies[i], minDiff);
    }
    return minDiff;
}

int main(int argc, char const *argv[])
{

    vector<int> candies = {2, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    cout << "Minumum difference: " << minDifference(candies, 7);
    return 0;
}
