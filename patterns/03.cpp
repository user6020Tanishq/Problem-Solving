#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    void patterns(int &n){
        for(int i = 1; i < n; i++){
            int j = 1;
            while(j <= i){
                cout << j;
                j++;
            }
            cout << "\n";
        }
    }
};

int main(){
    int n;
    cin >> n;

    Solution a;
    a.patterns(n);
}
/*

T.C- O(n*n)
output-
8
1
12
123
1234
12345
123456
1234567

*/

