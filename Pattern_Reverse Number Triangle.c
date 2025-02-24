#include <stdio.h>
int main() {
int n,num1=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int num2 = i + num1 -1 ; 
 for(int j=1;j<=i;j++){
         printf("%d ",num2--); 
         num1++;
     }
             printf("\n");
 }
}    