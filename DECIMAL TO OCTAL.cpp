#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=1; n>0; i++)    
{    
a[i]=n%8;    
n= n/8;  
//cout<<i;
} 
//cout<<i<<endl;   
cout<<"octal of the given number= ";    
for(i=i-1 ;i>0 ;i--)    
{    
cout<<a[i];    
}    
return 0;
}  
