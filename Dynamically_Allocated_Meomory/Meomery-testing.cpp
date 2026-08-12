//To  make the array in the heap 
char*ptr=new char[5];
// In this we are creaing the char[5]  so imagine we are creating a bloack of 5 spaces of a char data type and the pointer doesnt point to only one of them it actually points to teh whole block 
// Still theptr variable will store the adress of the first element in the array 

//But you might think that in ptr=new char , a new char was being created every time and the ptr was beign assigned to the latest assignment 
//So in this in every loop ptr is being assigned to a new char , but in *ptr =new char[5] we are assiging the ptr to the whle array at one time , but still the ptr will only hold the adress of the first char 
