#include <iostream>
#include <vector>

bool isSorted(std::vector<int> &arr) {
    for(int i=1; i<arr.size(); i++) {
        if(arr.at(i) < arr.at(i-1))
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {12, 14, 15, 21, 22};
    std::cout << isSorted(arr) << " " << arr.back();
    return 0;
}
