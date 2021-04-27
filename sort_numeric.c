#include "sort_numeric_ascend.h"

void sort_numeric_ascend(int n, int* ptr){
int i=0, j, k=0, temp;
for(i; i < n; i++){
for(j = i+1; j < n; j++){
if (*(ptr + j) > *(ptr + i)){
temp = *(ptr + i);
*(ptr + i) = *(ptr + j);
*(ptr + j) = temp;
}
}
}

for(k; k < n; k++){
printf("%d ", *(ptr + i));
}
}
