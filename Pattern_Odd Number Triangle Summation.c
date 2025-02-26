#include <stdio.h>
int main() {
int n,odd=1,m=1; 
scanf("%d",&n);
 for(int i=1;i<=n;i++){
     int sum=0;
    for(int k=1;k<=2*(n-i);k++){
        printf(" ");
    }
     for(int j=1;j<=2*i-2;j++){
         m+=2;
         sum+=m;
     }
    for(int j=1;j<=2*i-1;j++){
        if(j==1 || j!=i){
            printf("%d ",odd);
            odd+=2; 
        }
        else{
            printf("%d ",sum);
        }
    }
     printf("\n"); 
 } 
    return 0;
}