#include <bits/stdc++.h>

class Solution {
public:
    void pattern(int n){

        for(int i = 0; i < n; i++){
            int n = 0;
            while (n <= i){
                std::cout << "*";
                n++;
            }
            std::cout << "\n";            
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
T.C- O(n*n)

*
**
***
****
*****

*/
