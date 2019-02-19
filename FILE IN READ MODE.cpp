#include<iostream>
using namespace std;
int main(){
	FILE *p;
	char ch;
	p=fopen("c.txt","r");
	while(!feof(p)){
		cout<<ch;
		ch=getc(p);
	}
	return 0;
}
