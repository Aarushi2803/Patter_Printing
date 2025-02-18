#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
    if(n>1){         
    // if(n==1)  printf("Shape Not Possible");
for(int i=1;i<=n;i++){
    for(int k=2;k<=n-i+1;k++){ 
       printf(" ");
    }
for(int j=1;j<=2*i-1;j++){
    // if(n==1 || n==0)  printf("Shape Not Possible");
        printf("*");  
    }  
  printf("\n"); 
} 
        
    }
    else  printf("Shape Not Possible");
}