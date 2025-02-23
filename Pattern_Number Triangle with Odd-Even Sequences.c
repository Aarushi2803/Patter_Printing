#include <stdio.h>
int main() {
int n;
scanf("%d",&n);

 for(int i=1;i<=n;i++){
     int e=2,o=1;
     if((i%2)!=0){
     for(int j=1;j<=i;j++){
           printf("%d ",o);
           o+=2;
       }
     }
     
else{
    for(int j=1;j<=i;j++){
        printf("%d ",e);
         e+=2; 
    }
}    
     printf("\n");
 }
     
   return 0;  
 }   
