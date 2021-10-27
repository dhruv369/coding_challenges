/******************************************************************************

Find Rank using vector
*******************************************************************************/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class FindRanking{
  private:
  int count =0;
  vector<int > vec;
 public:
 FindRanking(vector<int> v1){
     vec= v1;
 }
 
 int checksenior();
};

int FindRanking::checksenior(){

    int data;
    int inc = 1;
    data = vec[0];
    for (int ii = 1; ii<vec.size();ii++){
        if(data != vec[ii]){
            if(vec[ii] ==  data+1){
            count += inc;
            }
            data = vec[ii];
            inc = 1;
        }
        else{
            inc++;
        }
    }
    cout<<"inside count : "<<count<<endl;
    return count;
}

int main()
{
//  std::vector<int> v1 {3,4,3,0,2,2,3,0,0};
    //  std::vector<int> v1 {4,2,0};
     std::vector<int> v1 {4,4,3,3,1,0};
    //  std::vector<int> v1 {0,0,1};
 int N = 9;
 std::sort(v1.begin(), v1.end());
 FindRanking obj1(v1);
 obj1.checksenior();
//  cout<<"count: "<<obj1.checksenior()<<endl;
 

    return 0;
}
