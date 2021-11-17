/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &blocks)
{
    auto currHigh = blocks[0];
    auto maximum = 0;
    auto prevPeak = 0;
    auto i =0;
    auto group = false;
    auto currP = 0;
    
    while(i<blocks.size()-1)
    {
        if((!group && currHigh >= blocks[i+1]) || (group && currHigh <= blocks[i+1]))
        {
            if(group && currHigh < blocks[i+1])
            {
                currP = i+i;
            }
            currHigh = blocks[i+1];
            i++;
        }
        else if(!group)
        {
            group = true;
        }
        else if(group)
        {
            auto dis =  i - prevPeak +1;
            maximum = max(maximum,dis);
            if(i != currP)
            {
                prevPeak = currP;
            }
            else
            {
                prevPeak = i;
            }
            group = false;
            
        }
    }
    auto d = i - prevPeak +1;
    maximum = max(maximum,d);
    return maximum;
}

int main()
{
    vector<int> A = {3,1,5,5,2,6};
    // vector<int> A = {0,1,0};
    // cout<<min(FlipNumber(A,0),FlipNumber(A,1));
    cout<<solution(A)<<endl;
    return 0;
}
