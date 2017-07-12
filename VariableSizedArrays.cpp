#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    vector<vector<int>> inputs(n);
    for(int i = 0; i < n; i++) {        
        int size;
        cin >> size;
        vector<int> temp(size);
        for (int j = 0; j < size; j++) {
            int number;
            cin >> number;
            temp.at(j) = number;
        }
        inputs.at(i) = temp;
    }
    for (int i = 0; i < q; i++) {
        int index, subIndex;
        cin >> index >> subIndex;
        cout << inputs.at(index).at(subIndex) << endl;
    }    
    return 0;
}
