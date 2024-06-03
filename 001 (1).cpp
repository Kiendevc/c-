#include <stdio.h> 
 int main()
 {
 	{int i, j, count; 
 	int start, end;
 	
printf("\n Day so tu 1 den 10 tang dan: ");
	 for (i=1 ;i<=10 ;i++){
	 	printf(" \n %d ",i); } 
	 	
 printf("\n Day so tu 1 den 10 giam dan: ");
 for (i=10 ; i>=1;i--){
 printf("\n %d ", i);} 
 
 

printf("\n In bang so : \n");
for(i= 1;i<=10; i++){
for (j=i ;j <= 100 ; j +=10)
printf("%3d ",j);} 


{int i, n; 
   n = 10;   
   printf("\n In bang nhan:\n");  
   for(i = 1; i <= 10; i++) {
      printf("%3d  x %2d  =  %3d\n", n, i, n*i);}
 }
 
 
     start = 2, end = 10;
   printf("In bang cuu chuong rut gon:\n");
   for(i = start; i <= end; i++) {
      count = i;
      for(j = 1; j <= 10; j++) {
         printf(" %3d", count*j); }
     }
 printf("In cac so chan:\n");
   for(i = 1; i <= 10; i++) {
      if(i%2 == 0)
         printf(" %2d\n", i);}
         
         printf("In cac so le:\n");
   for(i = 1; i <= 10; i++) {
      if(i%2 != 0)
         printf("%d\n", i);}
         
}
return 0;
}
