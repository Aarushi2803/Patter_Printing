#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
   if(n>1){
      for(int i=1;i<=n;i++){ 
          if(n%2 ==0) ++n;
          for(int j=1;j<=n;j++){
              if(i==j || i==n-j+1  ) printf("*");
              else printf(" ");
      }
       printf("\n");
   }
   }
    else printf("Shape Not Possible");
}