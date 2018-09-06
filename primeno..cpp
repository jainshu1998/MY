#include<iostream>
using namespace std;
int main(){
	int n,i;
	bool prime=true;
	cout<<"enter the possitive integer for prime";
	cin>>n;
	for(i=2;i<=n/i;i++){
		if(n%i==0)
		
		prime=false;
		break;
	}
	if(prime)
	cout<<"Given  no. is prime";
	else
	cout<<"Given no. is not prime";
	return 0;
}
