//To  make the array in the heap 
char*ptr=new char[5];
// In this we are creaing the char[5]  so imagine we are creating a bloack of 5 spaces of a char data type and the pointer doesnt point to only one of them it actually points to teh whole block 
// Still theptr variable will store the adress of the first element in the array 

//But you might think that in ptr=new char , a new char was being created every time and the ptr was beign assigned to the latest assignment 
//So in this in every loop ptr is being assigned to a new char , but in *ptr =new char[5] we are assiging the ptr to the whle array at one time , but still the ptr will only hold the adress of the first char 

#About how to delete the array of instaneces from the heap 
// This is really complex concept for me
#include<iostream>
#include <cstring>
using namespace std;
int main(){
    const int max =256;
    char buffer[max];
    const int dim=3;
    char*array[dim];
    int index=0;
    
    while(index<dim&&cin.getline(buffer,max))// This while loop is important what it is doing is that , wehn the user inouts the string  the getline also reads the spces and the after entering teh string it is stored in buffer and the maximum limti being the max
    {
        if(index == dim){
            cout<<"The array is full: ";
        }
        else{
            char*ptr= new char[strlen(buffer) + 1];  // So here when teh user enter the string , we create location in the heap for the size for the given string
            array[index++]=ptr;  // Then we are assigning the pointer from the pointer array to the adress were we just stored our input string to permanently save the input value
            strcpy(ptr,buffer);
        }
        cout<<"Next String";
    }
    
    cout<<"The strings are ";
    for(int i =0 ;i<index;i++){
        cout<<" "<<array[i];
        delete array[i];
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#Showing how to dynamically allocate the meomery in heap
#include<iostream>
using namespace std;

int main(){
    int capacity;
    cout<<"Enter the capacity for the dynamically allocated meomery in the heap: " ;
    cin>>capacity;
    int res;
    int size;
    
    // To use the ddynaically allocated meomary C++ uses the"new" keyword
    int *ptr = new int[capacity]; // this means that i have allocated a array of cahr in the heap with the capacity given
    cout<<"\n The for loop will run until the capacity of the array has been filled: ";
    for(int i =0;i<capacity;i++){
        cin>>res;
     
        *(ptr+i)=res;
    }
    
    for(int i=0;i<capacity;i++){
        cout<<" "<<ptr[i];
        
    }
    
    
    delete[] ptr;  // We need to delete the meomary we allocated in the heap to increase the efficiency
    ptr=nullptr;  // instead of letting pointer point some garbage value we point it towards a null value
    
    return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
