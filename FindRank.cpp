/******************************************************************************
find count of superior ranking 
*******************************************************************************/

#include <iostream>
#include<algorithm>
using namespace std;
int fun(int ranks[],int N )
{
    int total = 0;
        std::sort(ranks, ranks + N);



        int count = 1;
        int v = ranks[0];
        for (int i = 1; i < N; i++)
        {
                if (v != ranks[i])
                {
                        if (ranks[i] == v + 1)
                        {
                                total += count;
                        }
                        v = ranks[i];
                        count = 1;

                }
                else
                {
                        count++;
                }
        }
        return total;
}

int main()
{
    
    //int rank[] = {3,4,3,0,2,2,3,0,0};
    // int rank[] = {4,2,0};
    // int rank[] = {4,4,3,3,1,0};
    int rank[] = {0,0,1};
    cout<<fun(rank,3)<<endl;
    return 0;
}
