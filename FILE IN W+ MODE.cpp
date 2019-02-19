#include<iostream>
using namespace std;
int main(){
	FILE *p;
	char ch;
	p=fopen("c.txt","w+");
	if(p==NULL){
		cout<<"file is not exits";
	}
	while((ch=getchar())!='\n'){
		
		fputc(ch,p);
	}
	cout<<"writing has done";
	rewind(p);
		while(!feof(p)){
		cout<<ch;
		ch=getc(p);}
		fclose(p);
		return 0;
	}
