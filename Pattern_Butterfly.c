#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d",&n);
  if(n>1){
      // 1. main loop
for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
     printf("*");  
  }
   for(int k=1;k<=2*(n-i);k++){
     printf(" ");  
  } 
   for(int j=1;j<=i;j++){
     printf("*");  
  }
    printf("\n");
}
//2. main loop
      for(int i=2; i<=n;i++){
          for(int j=1;j<=n-i+1;j++){
               printf("*");  
          } 
          for(int k=1;k<=2*i-2;k++){
               printf(" ");  
          }
          for(int j=1;j<=n-i+1;j++){
               printf("*");  
          } 
          printf("\n"); 
      }

}
    else printf("Shape Not Possible"); 
}