//in this code we learn about the Dynamically allocating meomery in hea wiht the new keyword

#include<iostream>
using namespace std;

int main(){
    char *start=new char; //this is the syntax for creating the char varibale in the heap
    long loops=0;   
    char*end,*ptr;  //We create two pointers
    while((ptr=new char )!=0){  // the new char here crreates a memory location in the heap for the data type char 
    // then the ptr varibale gets the adress of the char whereveve the char mayy have been created it is stored in the ptr 
    // but as the next loop comes again a new char is created somewhere in the heap and that adress is then stores in the ptr in that case the ptr will lose its previous value
    //Rememeber we are just creating new char memory to cheack the heap storage until the heap is fulled and we get teh ptr ass NULL and the while exits
    
    
    
        loops++;
        end=ptr;
        cout<<loops;
    }
    cout<<loops;
    return 0;
}
