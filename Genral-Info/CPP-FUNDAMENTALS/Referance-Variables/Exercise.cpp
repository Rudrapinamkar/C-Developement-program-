// In the first exercise of this , we neede dot swap the tow given number sby the pointer method and the referance method 
// so what we do is that we use the normal logic to swap the numbers but
// what changes is the way we accept the input , normally we dorectly take the input in the function 
// But in this we take the input thorugh pointers and referance 

#include<iostream>
using namespace std;

void swap1(int *ptr , int *ptr1){    //So in pointer method we decalre the variable as the pointer we store the adress in
    int temp = *ptr;                  // ptr but when we need to acess the numebr we derefeance it  
    *ptr = *ptr1;
    *ptr1 = temp;

}

void swap2(int &pt1 , int &pt2){  // In the refernace method we take the refernace in the pt1 variable 
    int temp = pt1;             //  And we directly acees teh reall value throught thre referance and normally swap them
    pt1 = pt2;
    pt2 = temp;
    
}
int main(){
    int a , b;
    cout<<"Give the input for the two numbers to be swaped ";
    cin>>a>>b;
    cout<<endl;
    swap1(&a,&b);
    cout<<"Your numbers have been swaped by Pointers method "<<"b="<<b<<" a="<<a<<endl;
    swap2(a,b);
    cout<<"Your numbers have been swaped by referance method "<<"b="<<b<<" a="<<a<<endl;
}


-------------------------------------------------------------#QUESTION 2;------------------------------------------------------------------------------------------

//In this question we reversed the string takn as a input from the user , Here is hwoi did it
// First i initilized the pointer with the string which we are giving it as a input
//like in a Two pointer method the two pointer atrts at the first positon and the last positon and with the for loop then come to the center of the string
//Whne the each poiner is pointed to the their respectiveposition we swap them with general method of swapping 


#include<iostream>
using namespace std;

int main(){
                    
    string str;    
    string*ptr=&str;
    cout<<"Enter the string to reverse it ";
    cin>>str;
    
    char temp;
    for(int i=0;i<(str.size())/2;i++){          //here we are looping from the oth position fo the string to the middle of the string
        char &left = (*ptr)[i];                         // we made a char pointer which will start from the oth position and is equal to first character of the string
        // we actuallu need to write the (*ptr)[i] becuase *ptr is the string so to make it saperate we need to write this
        char &right = (*ptr)[str.size() - 1 - i];           //The right pointer starts from the last position           
        temp=left;
        left=right;                 //This is our normal method of swapping
        right=temp;
        
    }
    
    cout<<"The str is revered "<<str;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
