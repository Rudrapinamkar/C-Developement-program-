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
