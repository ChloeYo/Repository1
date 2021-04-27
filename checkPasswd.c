#include<stdio.h>
#include<string.h>

int main(){
//ch holds the length of the input
int ch;
char pswd[10];
//one at a time input 
char uno;
//index variable
int count = 0;
//int for total score of pswd
int score = 0;

//clrscr();
printf("Enter a password: ");
scanf("%s", pswd);
do{
uno = getchar();
pswd[count] = uno;
count++;
}
while(uno != '\n');
ch = strlen(pswd); 
//if loop to test pswd less than 10
if(ch<10){
//i = how short pswd is from 10
int i= 10-ch;
score = i*5;
printf("Score deducted = %d\n", score);
if((-1*(score))>= 30)
printf("Password's unsafe! Please reset.");
else{
printf("Password is safe.");
}

if(ch>10){
//i= how much bigger is the pswd than 10
int i= pswd-10;
score= i*5;
printf("Score deducted = %d\n",score);
if(ch == 10)
printf("Password is safe.");
getch();
}

