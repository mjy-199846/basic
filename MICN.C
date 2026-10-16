#include <stdio.h>
int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};//一维数组
    int i;
    int sum = 0;

    i = 0;
    while(i<10)
    {
      sum = sum + arr[i];  
    }
    i++;
    printf("1到10的和为 = %d",sum);
    return 0;
}