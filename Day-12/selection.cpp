#include<iostream>
using namespace std;
void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Selection_Sort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_index])
            {
                min_index = j;
            }
        }
        swap_array(nums[i], nums[min_index]);
    }
}
