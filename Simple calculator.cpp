 #include <iostream>

using namespace std;


int main()
{
   int a;
   double x,y;
  
   cout<<"************Menu************";
   
   cout<<"\nPlease select your operation to be implemented :\nEnter :\n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for division\n";
   cin>>a;
   cout<<"Enter 2 numbers to implement this operation :\t";
   cin>>x>>y;
   
   
    switch(a)
   {
       case 1:
       cout<<x<<'+'<<y<<'='<<(x+y);
       break;
       case 2:
       cout<<x<<'-'<<y<<'='<<(x-y);
       break;
       case 3:
       cout<<x<<'*'<<y<<'='<<(x*y);
       break;
       case 4:
       if(y!=0){
       cout<<x<<'/'<<y<<'='<<(x/y);
       break;
       }
       else{
           cout<<"Division is zero";
           break;
       }
       default:
       cout<<"expression is not valid";
       break;
   }   
 
  
   
    return 0;
}
