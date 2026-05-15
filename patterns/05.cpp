#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern(int n){
        for(int i = n; i > 0; i--){
            for(int j = 0; j < i; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }
     
};

int main() {
    int n;
    cin >> n;
    Solution a;
    a.pattern(n);

}

/*

T.C- O(n*n)
output-
7
*******
******
*****
****
***
**
*


*/
