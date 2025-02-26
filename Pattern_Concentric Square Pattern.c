#include <stdio.h>
int main() {
    
int n;
scanf("%d",&n);
   
 int t = 2*n-1;   
 for(int i=0;i<t;i++){
     for(int j=0;j<t;j++){
     
   int min1 = i;
   int min2 = j;
   int min3 = 2*n-2-i;
   int min4 = 2*n-2-j;
      int min = min1;
 if(min2 < min)  min =min2;
 if(min3 < min)  min =min3;
 if(min4 < min)  min =min4;        
printf("%d ",n-min);
} 
     printf("\n");
 }
    return 0;
}