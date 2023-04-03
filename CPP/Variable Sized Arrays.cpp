#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arr_amount, quer_amount;
    cin >> arr_amount >> quer_amount;
    
    vector<vector<int>> vctrs(arr_amount);
    
    for (int i = 0; i < quer_amount; i++) {
        int qr_size;
        cin >> qr_size;
        
        vector<int> temp_vector(qr_size);
        vctrs[i] = temp_vector;
        
        for (int j = 0; j < qr_size; j++) {
            cin >> vctrs[i][j];
        }
    }
    
    for (int i = 0; i < quer_amount; i++) {
        int arr_index, qer_index;
        cin >> arr_index >> qer_index;
        
        cout << vctrs[arr_index][qer_index] << endl;
    }
    
    return 0;
}
