#include<iostream>
#include<string>
using namespace std;
//This is a program in which we are going to store the details of a student
class sutdent{
    public:
        string name;
        string email;
        long int phone_num;
    void Fill_data(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"enter your email: ";
        cin>>email;
        cout<<"Enter your phone_num: ";
        cin>>phone_num;
    }
    void Edit_details(){
        string input;
        cout<<"Which detail do you want to edit "<<endl;
        cin>>input;
        if(input=="email"){
            cout<<"Enter you email "<<endl;
            cin>>email;
        }
        else if(input=="name"){
            cout<<"Enter your name "<<endl;
            cin>>name;
        }
        else if(input=="phone_num"){
            cout<<"Enter your phone num "<<endl;
            cin>>phone_num;
        }
        else{
            cout<<"please provide a valid input(try using lowercase) "<<endl;
        }
    }
    
     
};

int main(){
    sutdent s1;
    int input;
    while(true){
    cout<<"Enter your input (1-Fill data, 2-Edit details, 3-Exit): ";
    cin>>input;    
    switch(input){
        case 1:
            s1.Fill_data();
            break;
        case 2:
            s1.Edit_details();
            break;
        case 3:
            return 0;
            
        default:
            cout<<"\n Invalid input";
        }   
    }
}
