#include<stdio.h>
#include<stdlib.h>

char* strcpy(char* strDest, const char* strSrc){
unsigned i;

for(i=0; strSrc[i] != '\0'; i++)
	strDest[i] = strSrc[i];
	strDest[i] = '\0';
	return strDest;
}

int main(){
char src[] = "<y Program.";
char dest[100];

printf("Source string %s\n", src);
printf("After copying the source string in destination\nDestination string %s", strcpy(dest, src));
return 0;
}
