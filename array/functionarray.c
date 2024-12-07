#include<stdio.h>
void fun(int arr[]){
    arr[0]=34;
    return;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d ",arr[0]);
    return 0;
}
//In the array the value will be pass By Reference
//address of first element of array is the addreess of array.