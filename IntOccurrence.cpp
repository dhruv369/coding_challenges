/******************************************************************************

Find the int occurence in other int
input :
int 1 - 11234556
int 2 -  23
output :
23 found on 2nd position 


*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class findOccurence{
    private:
    
    string s1;
    string s2;
    size_t  index = 0;
    std::vector<int> v1;
    public:
    findOccurence(int i1,int i2){
        s1 = to_string(i1);
        s2 = to_string(i2);
    }
    void getnum();
    void getData();
};

    void findOccurence::getnum(){
        while(index != string::npos && index != -1){
            index = s1.find(s2,index+1);
            // cout<<"index: "<<index<<endl;
            if(index != string::npos && index != -1)
            v1.insert(v1.end(), index);
        }
        
    }
    
    void findOccurence::getData(){
        cout<<"vector"<<endl;
        if(v1.size()==0)
            cout<<-1<<endl;
        else{
            for (auto i : v1) {
         cout<<i<<endl;
        }   
            
        }
    }

int main()
{
 
    int i1 = 1953786;
    int i2 = 57;
    cout<<"i1 "<<i1<<endl;
    cout<<"i2 "<<i2<<endl;
    findOccurence obj1(i1,i2);
    obj1.getnum();
    obj1.getData();

    return 0;
}
