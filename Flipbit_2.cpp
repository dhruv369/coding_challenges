/******************************************************************************

Flipbit 2
*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int FlipBit(int in_bit)
{
    return (in_bit==0)?1:0;
}

int FlipNumber(std::vector<int>A,int bit_)
{
    int count=0;
    for(auto ii=0;ii<A.size();ii++)
    {
        //
        if(A[ii]!=bit_)
        {
            count++;
        }
        bit_ = FlipBit(bit_);
    }
    return count;
    
}

int main()
{
    vector<int> A = {1,0,1,0,1,1};
    // vector<int> A = {0,1,0};
    cout<<min(FlipNumber(A,0),FlipNumber(A,1));
    return 0;
}
