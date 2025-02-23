#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
if(n%2!=0){
for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++){
     //I
  if(i==1 || i==n || j==(n/2)+1){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  ");
 // N 
  for(int j=1;j<=n;j++){
  if(j==1 || j==n || j==i){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  "); 
 // N 
  for(int j=1;j<=n;j++){
  if(j==1 || j==n || j==i){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  ");    
 //0
  for(int j=1;j<=n;j++){
  if((i!=1 && j==1 && i!=n) || (j!=1 && i==1 && j!=n) || (i!=1 && j==n && i!=n) || (i==n && j!=1 && j!=n)){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  ");   
 // V  
  for(int j=1;j<=2*n-1;j++){ 
  if(j==i || j==2*n-i){
      printf("*");     
 }
  else  printf(" ");
}
    printf("   ");  
// A  
  for(int j=1;j<=n;j++){   
  if((i!=1 && j==1)|| (i!=1 && j==n) || (i==1 && j!=1 && j!=n) || (i==(n/2)+1)){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  "); 
 // T 
  for(int j=1;j<=n;j++){   
  if((i==1)|| (j==(n/2)+1)){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  ");   
for(int j=1;j<=n;j++){
     //I
  if(i==1 || i==n || j==(n/2)+1){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  ");
 //0
  for(int j=1;j<=n;j++){
  if((i!=1 && j==1 && i!=n) || (j!=1 && i==1 && j!=n) || (i!=1 && j==n && i!=n) || (i==n && j!=1 && j!=n)){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  ");    
// N 
  for(int j=1;j<=n;j++){
  if(j==1 || j==n || j==i){
      printf("*");     
 }
  else  printf(" ");
}
    printf("  ");    
     
    printf("\n");
}
    return 0;
} 
}