#include <iostream>
using namespace std;
int main()
{
    int testCases, n, m;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        cin >> n >> m;
        char matrix[n + 2][m + 2];
        int count1 = 0, count2 = 0;
        int max1 = 0, max2 = 0;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                cin >> matrix[j][k];
            }
        }
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                if (matrix[j][k] == '#' && matrix[j - 1][k] != '#')
                {
                    count1++;
                }
                else
                {
                    if (count1 > max1)
                        max1 = count1;
                    count1 = 0;
                }
                if (count1 > max1)
                {
                    max1 = count1;
                }
            }
        }
        for (int k = 1; k <= m; k++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (matrix[j][k] == '#' && matrix[j][k+1] != '#')
                {
                    count1++;
                }
                else
                {
                    if (count2 > max2)
                        max2 = count2;
                    count2 = 0;
                }
                if (count2 > max2)
                {
                    max2 = count2;
                }
            }
        }
        cout << max(max1, max2) << endl;
    }
}