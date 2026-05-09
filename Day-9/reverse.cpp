#include <iostream>

using namespace std;
void ReverseArray(int nums[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
    for(int i =0;i<size;i++)
    {
        cout<<nums[i]<<" ";
    }
}
int main()
{
    
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ReverseArray(arr, size);

    return 0;
}