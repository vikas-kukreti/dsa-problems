#include <iostream>
#include <vector>
using namespace std;

void findSumPair(vector<int> list, int sum) {
    for(int i=0; i<list.size()-1 ; i++) {
        for(int j=i; j<list.size(); j++) {
            if(list[i] + list[j] == sum) {
                cout << "i=" << i << " j=" << j << endl;
                return;
            }
        }
    }
}

int main(int argc, char const *argv[])
{

    vector<int> list = {10, 12, 13, 9, 5, 1};
    findSumPair(list, 10);
    
    return 0;
}
