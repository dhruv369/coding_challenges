/******************************************************************************

find the minimum number if bits that must be revesred to achive a alternating sequence

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

int flipBit(std::vector<int> &A, int bit )
{
    int count=0;
    int iter=0;
    for(auto ii : A)
    {
        if(ii != bit)
        {
            count++;
            A[iter] = bit;
        }
        bit = !bit;
        iter++;
    }
    
    return count;
}

int main()
{
    // cout<<"Hello World";
    vector<int> in_A = {0,1,0};
    vector<int> in_B = {0,1,0};
    cout<<"count with 1: "<<flipBit(in_A,1)<<endl;
    cout<<"A value : ";    
    for(auto ii : in_A)
    {
        cout<<ii<<" ";
    }
    cout<<endl;
    
    cout<<"count with 0: "<<flipBit(in_B,0)<<endl;
    cout<<"B value : ";    
    for(auto ii : in_B)
    {
        cout<<ii<<" ";
    }
    cout<<endl;

    return 0;
}
