#include <bits/stdc++.h>

class Solution {
public:
    void pattern(int n){
        for(int i = 0; i < n; i++){
            std::cout << "*****\n";
        }
    }
     
};

int main() {
    int n = 5;
    Solution a;
    a.pattern(n);

}

/*
output-
T.C- O(5*n)

*****
*****
*****
*****
*****

*/
