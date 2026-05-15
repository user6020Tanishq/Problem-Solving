#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern(int n){
        for(int i = n; i > 0; i--){
            for(int j = 1; j <= i; j++){
                cout << j;
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
1234567
123456
12345
1234
123
12
1


*/
