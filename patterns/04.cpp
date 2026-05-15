#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    void patterns(int &n){
        for(int i = 1; i < n; i++){
            int j = 1;
            while(j <= i){
                cout << i;
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
22
333
4444
55555
666666
7777777

*/

