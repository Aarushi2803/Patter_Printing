#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
if(n%2!=0)
    n++;
    //first loop
if(n>3){for(int i=1;i<=n/2;i++){
 for(int k=1;k<=(n/2)-i;k++){
   printf(" ");  
 }
     for(int j=1;j<=2*i-1;j++){
        
        if(j==1 || j==2*i-1 || i==j) printf("*"); 
         
        else  printf(" "); 
}     
 printf("\n");    
   }
      //second loop
 for (int i=1;i<=n/2;i++){
   for(int j=1;j<=n;j++){
      if(j==(n/2))    printf("*");
       else  printf(" "); 
     }
      printf("\n"); 
 } }

    else printf("Shape Not Possible");
}