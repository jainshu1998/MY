#include<iostream>
using namespace std;
int main(){
	FILE *p,*q;
	char ch;
	p=fopen("x.txt","r");
	q=fopen("jain.txt","w");
	if(p==NULL)
		cout<<"NO FILE EXITS";
	
	else
	while (!feof(p)){
		ch=getc(p);
		fputc(ch,q);
		
	}
	cout<<"COPY OF x.txt to jain.txt has done";
	fclose(p);
	return 0;
}
