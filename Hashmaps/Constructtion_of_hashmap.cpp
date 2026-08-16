//in the follwwing code we declare a hashmaap which is a 2d array 
//we ask for the user input  for 1-client id andd then asking for which way they want to store the id in the hashtable
//we laater print that hashtable

#include<iostream>
using namespace std;

int main(){
    int hashtable[10][10];       // a 2dd array , cant take the size as input but it is not dynamic
    for(int i =0; i < 10; i++){    // this is the for loop in which wwe are initializing teh array with 0 as a default value
        for(int j=0;j<10;j++){
            hashtable[i][j] = 0;
        }
    }
    int id;   // here are some declarations
    
    int index;
    
    int res;
      
    int p=0;
    while(p<4){           // here is the while which runs as much number of times as much as the useer haas defined
    int i=0 , j=0;  
    
    cout<<"Enter the client id: ";          // here we take the inputs
    cin>>id;
    cout<<"in which mthod do you want to store the client id : 1->linear probing :: 2->saperate chaining ";
    cin>>res;
        
        
        
        
    if(res==1){                 // if the user enteres 1 for linear probing then the follwoign pparrtt of teh code worrks accorddingly
        while(i<10){
         
            index = id % 10;            // first we use the "hashfucntion" to get the index of the id
            int count =0;
            while(hashtable[index][i] != 0 &&  count < 10){     // the while loop will run until it doesnt get the defaultt value of 0 and count less then 10 , because if teh count is greter then 10 , then itt means the column is now full
                index = (index + 1) % 10;     // This is IMP :- to get thee empty space , suppose at index of 9(it is the last placee of the coulmn)  you didnt get an empty space then the (index +1)%10 will result into = 10%10 = which is zero , so the wwhle loop will now start cheaking from the start
                count++;    // if the value of the counter is 10 this means the wwwhile loop has iterated tthorrugh the whole column
                
            }
            if(count<10){
                hashtable[index][i] = id;     // if we got outt of teh wwhile thhen this means there is an empty spcae the the index "index" so at that index  put the value id
                break;
            }
            
            i++;
        }
    } // the saperate chaainig iss ssome waht diffferent then linear probing as we are not using the hash fucntion to find the column index
    else if(res==0){              //If the user wants to saperate chaain then the code follows accorddingly
        index = id % 10;     // a hash funcction
        while(j<10 && hashtable[index][j] != 0){        //similar to linear probing we cheak for the empty space i.e the default value 0   
            j++;            // if we dont get a default value tthen we move forward
            
        }
        if(j<10){           
            hashtable[index][j] = id;
            
        }
        else{
            cout<<"The chain is rudra ";     // we could just print if the chain is full , because(i will explaain)
        } // NOTE:- i think there is a edgee case here if the row is full then you need to increse the row index , so index=index+1;
    }
   
    p++;
    }    
    for(int r = 0; r < 10; r++){        // a basic loop for printing the hash table
    cout << "row " << r << ": ";
    for(int c = 0; c < 10; c++){
        cout << hashtable[r][c] << " ";
    }
    cout << endl;
}
}
