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
____________________________________________________________________Example - 2_____________________________________________________________________________________________________________-
// In this code i learnt to use fucniton liek ti was intented to be used , like it covered default arguments 
// the problems was to to sort the given array in the descenfding order and ascending order depending on the arguments


#include<iostream>
using namespace std;

void sort(int arr[] , int len , char ch ='A'){  //Here we declared the sort fucntion whose arguments will be provided thorugh the main function while claling the sor fucntion for sorting
    
    for(int i=0;i<len;i++){         // This is a basic bubble sort 
        for(int j=0;j<len-1;j++){
            int temp=0;
            if(ch=='A'){                    // Here is the condition which decides if the array will be asceding or decreasing
                if(arr[j]>arr[j+1]){        // Notice that when no arguments are provide the default arguments will be used in this case the default argument is the 'A' so by default the sort will be working wiht A
                     temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                     }
                }
            else if(ch=='D'){               // When the argument is provided with D then the sort will in decreasing order
                if(arr[j]<arr[j+1]){
                     temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                     }
                
            }
                
            }
        }
    }


void print(int arr[] ,int len){  // THis is our custom made fucntion which rpints the array when we povide the array and the len1
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int array[]={4,6,-3,-9,10};
    const int length = sizeof(array) / sizeof(int);  // this is the way we calcualte the size of the array
                                        // in this following the sequnce of code we sort the array thorugh Ascending or descenfding and then print it witht the print function
    cout<<"Original sequence: ";
    print(array,length);
    cout<<"Ascending sequence:";
    sort(array,length);
    print(array,length);

    
    cout<<"Decending order: ";
    sort(array,length,'D');
    print(array,length);
    return 0;
    
    
}
