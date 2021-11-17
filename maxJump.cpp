/******************************************************************************
Find Max jump

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

int finMaxJump(vector<int> &A,int start_pos)
{
    int dist=0;
    int dist_left=start_pos;
    int dist_right=start_pos;
    int len = A.size();
    if(start_pos == 0)
    {
        while(dist_right<=len)
        {
            if(A[dist_right] <= A[dist_right + 1])
            {
                dist_right++;
            }
            else
            {
                break;
            }
        }
    }
    else if (start_pos == len)
    {
        while(dist_left >= 0)
        {
            if(A[dist_left] <= A[dist_left - 1])
            {
                dist_left--;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        while((dist_left>=0 || dist_right<=len) && start_pos != 0)
        {
            if((dist_left>=0) && (A[dist_left] <= A[dist_left-1]))
            {
                dist_left--;
            }
            else if(A[dist_right] <= A[dist_right + 1])
            {
                dist_right++;
            }
            else
            {
                break;
            }
        }
    }
    dist = dist_right-dist_left +1;
    
    return dist;
}

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
    // vector<int> in_A = {2,6,8,5};
    vector<int> in_A = {1,1};
    vector<int> in_B = {0,1,0};
    cout<<"Jump : "<<finMaxJump(in_A,0)<<endl;
    
    // cout<<"count with 1: "<<flipBit(in_A,1)<<endl;
    // cout<<"A value : ";    
    // for(auto ii : in_A)
    // {
    //     cout<<ii<<" ";
    // }
    // cout<<endl;
    
    // cout<<"count with 0: "<<flipBit(in_B,0)<<endl;
    // cout<<"B value : ";    
    // for(auto ii : in_B)
    // {
    //     cout<<ii<<" ";
    // }
    // cout<<endl;

    return 0;
}
