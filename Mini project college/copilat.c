#include<stdio.h>
int main(int argc, char const *argv[])
{
    //make the average of an array element
    int a[5];
    int i=0;
    int sum=0;
    int avg;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element of array\n",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = sum/5;

    printf("The average of array element is %d\n",avg);
    
    return 0;
}
