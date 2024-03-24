/*
    Exercise 3-1
    Our binary search makes two tests inside the loop, when one would
    suffice (at the price of more tests outside). Write a version with
    only one test inside the loop and measure the difference in run-time. 
*/
#include<stdio.h>
/* Size of array */
#define SIZE 10
/* Element which have to search */
#define KEYELEMENT 1
int binarySearch(int arr[])
{
    /* Starting index of array */
    int low = 0;
    /* last index of array */
    int high = SIZE-1;
    /* index at ehich element will be found */
    int mid;
    /* Calculate the mid */
    mid = (low + high)/2;
    /* Loop run untill low<high */
    while(low<high && KEYELEMENT != arr[mid])
    {
        /* If element is less than the v[mid]*/
        if(KEYELEMENT < arr[mid])
        {
            /* Decrese the high */
            high = mid - 1;
        }
        /* If element is less than the v[mid]*/
        else
        {
            /* Increase the high */
            low = mid + 1;
        }
        /* Calculate the mid */
        mid = (low + high)/2;
    }
    /* Element found */
    if(KEYELEMENT == arr[mid])
    {
        /* Return Index at which element is found */
        return mid;
    }
    /* If element not present int the array */
    return -1;
}
int main()
{
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d", binarySearch(arr));
    return 0;
}