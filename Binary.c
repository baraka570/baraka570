#include <stdio.h>
 
 int power = 128;

 int *convert_to_binary(int x,int arr[100])
 {
  for (int i = 0;i < 8;++i)
   {
    if (x >= power)
     {
      arr[i] = 1;
      x = x - power;
     }
    power /= 2;
   } 
 return arr;
 }
 void print_array(int arr[100])
 {
 for (int i = 0;i <  8;++i)
  {
  printf("%d ", arr[i]);
 }
 }
 int main()
  {
 int num;
 int arr[8] = {0,0,0,0,0,0,0,0};
 printf("enter number to convert :");
 scanf("%d", &num);
 print_array(convert_to_binary(num,arr));
 return 0;
 }
 
      
