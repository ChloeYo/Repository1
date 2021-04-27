#include<stdio.h>


int main()
{
int a, num , fact = 1;
printf("Enter a positive int: ");
scanf("%d", &num);

if (num<0)
{
printf("Not calcaulating factorial for negative ints");
}
else
{
for(a=1;a<=num;a++)
{
fact = fact * a;
}
printf("Its factorial of %d : %d\n", num, fact);
}
return 0;
}

