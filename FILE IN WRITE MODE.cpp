#include<iostream>
using namespace std;
int main(){
	FILE *p;
	char ch;
	p=fopen("c.txt","w");
	if(p==NULL){
		cout<<"file is not exits";
	}
	while((ch=getchar())!='\n'){
		
		fputc(ch,p);
	}
	fclose(p);
	return 0;
	
}
