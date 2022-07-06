#include <stdio.h>
#include <string.h>

#define KEY 4

void crypter(char *,char *);
void readFromFile(char **arg)
{

	FILE *pf = fopen(arg[2],"r");
	FILE *pf2 = fopen("crypter.txt","a");
	
	char str[20];
	
	while(! feof(pf)) 
	{
		fscanf(pf,"%s ",str);
		
		crypter(str,arg[1]);
		
		fprintf(pf2,"%s ",str);
	
	}
	
	fclose(pf);fclose(pf2);
	
	remove(arg[2]);
	
	rename("crypter.txt", arg[2]);
	

}
void crypter(char *str,char *option)
{
	
	for(char *p = str; *p != '\0' ; p ++)
	{
		if( ! strcmp(option,"-encryption") ){
			if(( *p>='a' && *p<= 'z') || ( *p>='A' && *p<= 'Z'))
				*p += KEY;
		}
		else
				*p -= KEY;
		
	}		

}

int main(int argc,char *argv[])
{
	
	readFromFile(argv);

	return 0;
}
