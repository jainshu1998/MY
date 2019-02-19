#include<iostream>
#include<string.h>
using namespace std;
int main(){
	FILE *p,*q;
	char ch;
	int i,j,a=1,b=1,c=1,d=1,e=1,f=1;
	 p=fopen("a.txt","w+");
if(p==NULL){
		cout<<"no";
	}
	while ((ch=getchar())!='\n'){
	fprintf(p,"%c",ch);
if(ch=='i'||ch=='a'||ch=='e'||ch=='o'||ch=='u'){
			a++;}
			if(ch=='i')
			b++;
			if(ch=='a')
			c++;
			if(ch=='e')
			d++;
			if(ch=='o')
			e++;
			if(ch=='u')
			f++;}
fprintf(p,"\nvowel=%d",a);
fprintf(p,"\n i is=%d",b);
fprintf(p,"\n a is=%d",c);
fprintf(p,"\n e is=%d",d);
fprintf(p,"\n o is=%d",e);
fprintf(p,"\n u is=%d",f);
cout<<"writing has done"<<endl;
rewind(p);
	while(!feof(p)){
		cout<<ch;
		ch=fgetc(p);}
fclose(p);
	return 0;	
}

