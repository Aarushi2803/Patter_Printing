#include <stdio.h>
int main() {
int n;           
scanf("%d",&n);  printf("%d",n);
    if(n>1){
      for(int i=1; i>=1;i++){  
         printf(" -> "); 
     if(n%2==0) { printf("%d",n>>1);
          n= n>>1; }
     else {   printf("%d",3*n + 1); 
          n= 3*n + 1; }
            if(n==1) return 0;
 } 
      
}
}