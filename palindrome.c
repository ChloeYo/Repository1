#include<stdio.h>
#include<string.h>
 int pali(char *sequence, int seqLength){
	int yes= 1;
	char reversed[100];
	int count=0;
	
	int i;
	for(i= seqLength-1; i>=0; i--){
	reversed[count]=sequence[i];
	count++;
}

	reversed[count]='\0';
	int x;
	for(x=0; x<seqLength; x++){
	if(sequence[x] != reversed[x]){
	yes=0;
	break;
}}

	return yes;
}

int main(){
	char sequence[100];
	printf("Enter a sequence: ");
	scanf("%s", sequence);
	if(pali(sequence, strlen(sequence))){
	printf("%s is a palindrome\n", sequence);
}
	else{
	printf("%s is not a palindrome\n", sequence);
}
	return 0;
}
