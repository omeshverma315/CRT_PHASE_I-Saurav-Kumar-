#include <iostream>
using namespace std;

class Sum
{
public:
    int sumArray(int nums[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        return sum;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sum s;
    int result = s.sumArray(arr, size);
    cout << "Sum of array elements: " << result << endl;
    return 0;
}