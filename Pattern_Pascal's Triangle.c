#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
for(int i=0;i<=n-1;i++){
     int fac = 1;
 for(int k=0;k<=n-i-2;k++){
         printf(" ");
 }
 for(int j=0;j<=i;j++){
    printf("%d ",fac); 
     fac = fac *(i-j)/(j+1);
 }
    printf("\n");
}

}