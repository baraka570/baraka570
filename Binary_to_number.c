#include <stdio.h>

int  convert_to_number(int size,int arr[100])
 {
 int x = 0;
 int power = 1;
  for (int i = size - 1;i >= 0;--i)
  {
   if (arr[i] == 1)
    {
     x = x + power;
    }
   power *= 2;
   }
  return x;
  }
 
 int main()
 {
 int Binary,count = 0;
 int arr[100];
 printf("enter binary to convert :");
 scanf("%d", &Binary);
 int num = Binary;
 while (num != 0)
 {
  num /= 10;
  ++count;
 }

 for (int i = count - 1;i >= 0;--i)
  {
   arr[i] = Binary % 10;
   Binary = Binary / 10; 
 }
 printf("the number is %d \n", convert_to_number(count,arr));
 
 }
