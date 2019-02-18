#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=1; n>0; i++)    
{    
a[i]=n%16; 
  
n= n/16;  
//cout<<i;
} 
//cout<<i<<endl;   
cout<<"hexa of the given number= ";    
for(i=i-1 ;i>0 ;i--)    
{
	if(a[i]<10)
cout<<a[i];  
if(a[i]==10){
cout<<"A";
}  
if(a[i]==10){
cout<<"A";
}  
if(a[i]==11){
cout<<"B";
}  
if(a[i]==12){
cout<<"C";
}  
if(a[i]==13){
cout<<"D";
}  
if(a[i]==14){
cout<<"E";
} 
if(a[i]==15){
cout<<"F";
}     

  
}    
return 0;
}  
