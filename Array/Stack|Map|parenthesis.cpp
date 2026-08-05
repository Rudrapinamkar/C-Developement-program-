#include<iostream>
//The queston is about valid parenthesis, 
#include<stack>
#include<unordered_map>
#include<string>
using namespace std;

bool isValid(string s){
    unordered_map<char, char> map = {{')', '('}, {']', '['}, {'}', '{'}};

    stack<char> st;
    for(char c :s){
        if(c=='{' || c=='[' || c=='('){
            st.push(c);
        }
        else{
            if(st.empty() || st.top()!=map[c]){
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
