#include<stdio.h>
// #include<cstring>
void print(int a,float b)
{
    printf("%d号位是%.2f\n",a,b);
}
int main()
{
    void (*pprint)(int,float);
    pprint=print;
    // (*pprint)(1,0.1);
    // print(1,0.1);
    float arr[]={0.1,0.2,0.3,0.4,0.5};
    for (int i = 0; i < sizeof(arr)/sizeof(float); i++)
    {
        /* code */
        (*pprint)(i+1,arr[i]);
    }
    
    return 0;
}