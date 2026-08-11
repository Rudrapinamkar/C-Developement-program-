//>Default function arguments 
//in any funtion inside the pratemeters place for ex. funrtion(); we need to write the or pass the arguments to the pararmetes 
//>Now suppose it you dont pass any arguments to the parameters to it then the parameters will ave the default value that is given to it
_________________________________________________________________Explain_1-_----------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;

struct employee{
    int ssn;
    string name;
    
    
};

employee manager={1111,"manager"};
void display(const employee& =manager);
//in this const employee& manager , you read it as ; we are giving an alias to the real emplyee which is the struct ; the alias is of manger 


//we declared the display before the main is because we are telling the called display() function that there is
// a dsiplay fucntion down below 
// the reason we decalre void here instead of just writing th display before calling is that in big code we dont yet knwo what to write in a display fucntion
// so they just declare one here

int main(){
    //we need to call the the display 
    employee worker={222222,"worker"}; // here we have initialized the worker with the values
    display();//when the display is called wihtout arguments then the deafult values will be used
    display(worker);
    
}
    void display(const employee& emp){
        cout<<"\n the SSN "<<emp.ssn<<endl;
        cout<<"The Name: "<<emp.name;
    }
____________________________________________________________________________________________________________________________________________________________________________________________________________--
//In this cod we have tried to show that how default arguments are used wen no arguments are passed thorught the main function


#include <iostream>
using namespace std;
const int size=122;//We need to decalre a const her eis because we are going to declare a szie of a the array buffer using this size variable 
//and since a array cannot change its size we need to put some const value in there

void clear_buffer(char*ptr, char ch=' ',int length=size){   //The value declared there are the defalut values which will be considered of no arguments are passed
    for(int i=0;i<length;i++){ 
        *ptr++=ch;    // I was confused here , *ptr adress to the char array of buffer we are bascally adding ch into our arra per loop 
    }
    *ptr='\0';  // we need to write to decalre the  end of the string else while printing the array we will get garbage values because after the string is over printing whatever remains in the array is garbage 
    
}

int main(){
    char buffer[size+1];   // we deinfe our charcter array
    
    clear_buffer(buffer);   // just array
    cout<<"Buffer_one:"<<buffer<<endl;
    
    clear_buffer(buffer,'?');// both array and on echarctaer 
    cout<<"Buffer_two:"<<buffer<<endl;
    
    clear_buffer(buffer,'*',12);
    cout<<"Buffer_three:"<<buffer<<endl;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
