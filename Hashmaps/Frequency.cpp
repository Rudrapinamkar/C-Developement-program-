// in the following we are going to test all the method in which we can maps to get the freqeeuncy count
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string name = "rudra";     
    unordered_map<char ,int> mp;   // Here we are declaring the map with the kayy vlaue pari going to include char and not string as we are going couting the freqeucy of the char and nto that of the string
    for(char ch : name){ 
        mp[ch]++;   // hardcord this in you beacause ; this is weher the value for teh given key increses , so for char r its value will increase by one adn then by when the iterator passes over that char
    }
    
    for(unordered_map<char,int>::iterator it = mp.begin() ; it!=mp.end(); ++it){   // Learn this syntax unordered_map<char, int>::iterator it = np.begin ; it!=mp.end() ;it++)
        cout<<it->first<<":"<<it->second<<endl;
    }
}
