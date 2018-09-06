#include<iostream>
using namespace std;
void fib(int f){
	static int i,first=0,second=1,result;
if(f>0)
{result=first+second;
first=second;
second=result;
cout<<result<<",";
fib(f-1);	

	}	
	
}
int main(){
	int f;
	cout<<"enter the element for fib  ";
	cin>>f;
	cout<<"FIBONACCI SERIES IS........"<<endl;
	cout<<"0"<<","<<"1"<<",";
	fib(f-2);
	return 0;
}
	
	

