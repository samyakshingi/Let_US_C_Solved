// Write a program to produce the following output:  
 
//     1     
//    2  3    
//   4  5  6   
//  7  8  9  10  

# include <stdio.h> 
int main( ) 
{ 
  int n = 4;  //no of rows
  int num = 1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      printf(" ");
    }
    for(int k=1;k<=i;k++){
      printf("%d ",num);
      num++;
    }
    printf("\n");
  }

 return 0 ; 
} 