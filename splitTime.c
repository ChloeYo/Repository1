#include<stdio.h>
int main() {
int n,hr=0,min=0,sec=0;
printf("Enter seconds: ");
scanf("%d",&n);
split_time(n,&hr,&min,&sec);
printf("Converted format: %d hour %d mins %d secs\n",hr, min, sec);

return 0;
}

void split_time(long total_sec, int* hr, int* min, int* sec){
int rem_sec=0;
*hr=(int)(total_sec / 3600);
total_sec=total_sec % 3600;
*min=(int)(total_sec / 60);
*sec=total_sec % 60;
return 0;
}

