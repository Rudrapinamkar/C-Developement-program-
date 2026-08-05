#include<iostream>
//The queston is about valid parenthesis, 

//In this question it si that they are not assuming that we will get "{[}]" even though in this the rbacker tare correct

//The way this question is solved is that we first we make the map of parenthesis with the key value pairs so that when we get the value during 
//the iteration we can immediately find the key of the value 
#include<stack>
#include<unordered_map>
#include<string>
using namespace std;

bool isValid(string s){
    unordered_map<char, char> map = {{')', '('}, {']', '['}, {'}', '{'}};//given the key value pair

    stack<char> st;//here we declare the stack in which we add the element as we go on
    for(char c :s){//remember this syntax for iterating throgh string s 
        if(c=='{' || c=='[' || c=='('){//first we cheack all the open bracket parenthesis and push them in the stack 
            st.push(c);
        }
        else{
            if(st.empty() || st.top()!=map[c]){ // as according to our condition we have to cheack the top element adn compare it with the current c
                return false;
            }
            else{
                st.pop();
            }
        }
        
    }
    return st.empty();
    
}

int main(){
    string in;
    string realin;
    cout<<"Do want to cheack your answer(type 'yes' or 'no')"<<endl;
    cin>>in;
    if(in=="yes"){
        
        cout<<"Enter the parenthesis you want to provide ";
        cin>>realin;
        if(isValid(realin)){
            cout<<"correct";
        }
        else{
            cout<<"false";
        }
        
    }
    else{
        cout<<"Ok bro :)";
    }
    
    
}
