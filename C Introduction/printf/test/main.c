#include<stdio.h>
int sum(int num)
{
   int sum=0;
   for (int i = 0; i < num; i++)
   {
      /* code */
      sum+=i;
   }
   return sum;
}
int main()
{
   char ch = 'A';
   char str[20] = "www.runoob.com";
   float flt = 10.234;
   int no = 150;
   double dbl = 20.123456;
   printf("字符为 %c \n", ch);
   printf("字符串为 %s \n" , str);
   printf("浮点数为 %f \n", flt);
   printf("整数为 %-5d\n" , no);
   printf("双精度值为 %#xlf \n", dbl);
   printf("八进制值为 %o \n", no);
   printf("十六进制值为 %x \n", no);
   printf("整数为 %-5d\n" , sum(no));

   return 0;
}