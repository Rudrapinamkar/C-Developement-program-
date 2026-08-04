#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    int nums[] = {2, 7, 11, 15}; 
    int target = 22;
    unordered_map<int ,int> val;
    for(int i=0;i<sizeof(nums);i++){
        val.insert({nums[i],i});
    }
    int cheak=0;
    for(int i=0;i<sizeof(nums);i++){
        if(val.find(target-nums[i])!=val.end()){
            cheak=target-nums[i];
            cout<<"Found the value "<<val[cheak]<<" and "<<i;
            break;
        }
    }
    
    
}
