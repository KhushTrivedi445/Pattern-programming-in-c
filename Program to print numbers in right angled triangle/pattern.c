#include<stdio.h>

int main () {
int n;
printf("Enter the number of rows you want: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if (j<=i){
        printf("%d",i);
        } else {
        printf(" ");
        }
    }
    printf("\n");
}


  return 0;
}

/*
output :
Enter the number of rows you want:5
    1
    22
    333
    4444
    55555



*/