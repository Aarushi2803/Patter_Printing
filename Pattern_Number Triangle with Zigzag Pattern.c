#include <stdio.h>
int main() {
int n;  
scanf("%d",&n);       
for(int i=1;i<=n;i++){
 int k=i;
    for(int j=1;j<=i;j++){
      if(j==1) printf("%d ",k);
        else if(j%2==0){   
            k+=2*(n-i)+1;
             printf("%d ",k);
          }
         else{ 
             k+=2*(i-j+1); 
             printf("%d ",k);
       }
    }
     printf("\n");
 }
    return 0;
} 