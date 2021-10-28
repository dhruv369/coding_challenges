// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
sort(A.begin(),A.end());
// for(auto i : A){
//     cout<<i<<endl;
// }
int v = A[0];
for(int ii =1;ii<=A.size();ii++){
    // cout<<ii<<endl;
    if((v + 1 != A[ii]) && (v != A[ii]) )
    {
        if(v+1 <0){
            return 1;
        }
        else
        return v+1; 
    }
    else{
        v = A[ii];
        continue;
    }
    
}
}
