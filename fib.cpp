#include<iostream>
using namespace std;
int main(){
	int i,first=0,second=1,result;
	cout<<first<<" "<<second;
for(i=1;i<5;i++){
	result=first+second;
	cout<<result;
	first=second;
	second=result;
	
}
return 0;
}
