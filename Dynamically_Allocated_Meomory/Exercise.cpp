// In this code we are trying to give arguments to funciton adn not giving arguments in some cases 
// 

#include<iostream>
using namespace std;


void printing_number(int start, int end, int nol = 5){
    int count = 0;

    for(int i = start; i < end; i++){
        cout << i << " ";
        count++;

        if(count % nol == 0){
            cout << "\n";
        }
    }
}
int main(){
 int start, end, per_line;
 while(cout<<"\n Enter the starting ending and perline: " && cin>>start>>end>>per_line){
     if(start>end){
         cout<<"Invalid input start cannot be greter then end";
         continue;  // it rerturn to the top of the while loop
     }
     if(per_line<1){
         cout<<"The number of line must be greater then one ";
         continue;
     }
     
     cout<<"Testing with all three arguments";
     printing_number(start ,end,per_line);
     cout<<" \n Testing with only two arguments ";
     printing_number(start,end);
 }
 
    
}
