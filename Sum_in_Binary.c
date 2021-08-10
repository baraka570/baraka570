#include <stdio.h>

 int *convert_to_binary(int x,int arr[100])
 {
 int power = 128;
  for (int i = 0;i < 8;++i)
   {
    if (x >= power)
     {
      arr[i] = 1;
      x = x - power;
     }
    power = power /2;
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
  int a,b,sum;
  printf("enter two numbers :");
  scanf("%d %d", &a ,&b);
  sum = a + b;
  
  int arr[8] = {0,0,0,0,0,0,0,0};
  print_array(convert_to_binary(sum,arr));
  return 0;
 }
