#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char input[21], smallest[21], largest[21];
printf("Enter a word: ");
scanf("%s",input);
strcpy(smallest, input);
strcpy(largest, input);

while(strlen(input) != 4){
if(strcmp(input, smallest)<0)
strcpy(smallest, input);

else if(strcmp(input, largest)>0)
strcpy(largest, input);

printf("Enter a word: ");
scanf("%s", input);
}

printf("Smallest word: %s\n", smallest);
printf("Largest wordL %s\n", largest); 

return 0;
}
