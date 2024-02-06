#include<iostream>
using namespace std;
int main(){
int amt;
cout<<"Enter amount"<<endl;
cin>>amt;
int r500,r100,r50,r20,r10,r1;
switch (1)
{
case 1 /* constant-expression */:
     r500=amt/500;
     amt=amt%500;
     cout<<"No of Rs.500 notes : "<<r500<<endl;    

case 2 /* constant-expression */:
     r100=amt/100;
     amt=amt%100;
     cout<<"No of Rs.100 notes : "<<r100<<endl;
case 3 :
    r50=amt/50;
    amt=amt%50;
     cout<<"No of Rs.50 notes : "<<r50<<endl;

case 4 :
    r20=amt/20;
    amt=amt%20;
     cout<<"No of Rs.20 notes : "<<r20<<endl;
case 5 /* constant-expression */:
     r10=amt/10;
     amt=amt%10;
     cout<<"No of Rs.10 notes : "<<r10<<endl;     

case 6 :
    r1=amt/1;
    amt=amt%1; 
     cout<<"No of Rs.1 notes : "<<r1<<endl;
               /* code */
    break;

//default:
    break;
}
return 0;
}