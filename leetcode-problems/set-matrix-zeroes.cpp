#include<bits/stdc++.h>
using namespace std;

    void setZeroes(vector<vector<int>>& matrix) {
        
        bool fr = false, fc = false;
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix.size(); j++) {
                if(matrix[i][j] == 0) {
                    if(i==0) fr=true;
                    if(j==0) fc=true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                } 
            }
        }
        
        for(int i=1; i<matrix.size(); i++) {
            for(int j=1; j<matrix.size(); j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    
        if(fr) {
            for(int j=0; j<matrix.size(); j++) {
                matrix[0][j] = 0;
            }
        }
        if(fc) {
            for(int j=0; j<matrix.size(); j++) {
                matrix[j][0] = 0;
            }
        }
    }


    int main(int argc, char const *argv[])
    {
        vector<vector<int>> v = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
        setZeroes(v);
        for(int i=0; i<v.size(); i++) {
            for(int j=0; j<v.size(); j++) {
                cout << v[i][j] << "\t";
            }
            cout << endl;
        }
        return 0;
    }
    
