#include<iostream>
using namespace std; 

class Node{    //Remember this class is important because This node class is the Node of linked list that we declred in this Code
public:       //We could also struct then we dont need to use class in this 
    int data;
    Node* Next;    //In this Node is the datatype just like how object has the class name as the data tpe while declaring a object in the main function 
};                // But here we are making a next pointer because the NExt variable is goig to store the adress of the next node that is why we are using a pointer here

int main(){
    Node*first=new Node;    // We are making a pointer of the 'first' Node becasue in that node we are going to store the data of the first and the Next adress of the Node
    Node*second=new Node;    //the new function is used used to create or aces the meomery in large quantity 
    Node*third=new Node;
    
    first->data=10;          // By this -> function is just like saying (*first).data=10; jsut imagine that we are going to the adress of first and adn assigning the data varibale some value
    first->Next=second;
    
    second->data=20;
    second->Next=third;
    
    third->data=30;
    third->Next=NULL;
    
    Node*temp=first;        // here the temp is string the adress of the first node 
    
    while(temp!=NULL){     // SO while the temp doesnt get the adress of NULL which is of the last node it will traverse throught the LINKED LIST
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
}
