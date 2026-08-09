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
