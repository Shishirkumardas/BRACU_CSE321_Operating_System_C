#include<stdio.h>
#include<conio.h>
int main()
{

int start, end, r, i, j;
printf("Enter start number: \n");
scanf("%d", &start);
printf("Enter end number: \n");
scanf("%d", &end);
for( i=start ; i<=end ; i++){
        int sum=0;
        for(j = 1; j < i; j++){
               r = i % j;
               if (r == 0){
                     sum = sum + j;
                      }
                        }
if (sum == i){
        printf("%d \n", i );
}

}
return 0;
}
