// We found the given target in a unsorted array by hashmap method here is what i did
//First initialze the unordered array then we insert the key value pairs insideour hashmpa val then we try to find the value of target - nums[i] where
// i keeps on increaisng till the end , we are doing this beacuse we get the other value immediately from the hashmap
#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    int nums[] = {2, 7, 11, 15}; //this is the given array
    int target = 22;
    unordered_map<int ,int> val;  // here we initialse the hasmap no need to write the return type 
    for(int i=0;i<sizeof(nums);i++){
        val.insert({nums[i],i});// we are using the insert funciton to insert the key valeu paris
    }
    int cheak=0;
    for(int i=0;i<sizeof(nums);i++){
        if(val.find(target-nums[i])!=val.end()){  // the syntax for this is that the this line returns true until find gets the value it is looking for, and is it foud it then this means that it is not equal to end
            cheak=target-nums[i];
            cout<<"Found the value "<<val[cheak]<<" and "<<i;
            break;
        }
    }
}
