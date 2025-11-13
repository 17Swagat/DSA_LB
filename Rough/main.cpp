#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// insertion sort
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
    {
        return;
    }

    for (int k = 1; k < n; k++)
    {
        int key = arr[k];
        int j = k - 1;
        while (j >= 0 && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector<int> &arr){
    int n = arr.size();
    if (n == 1) {
        return;
    }
    
    for (int i = 0; i < n-1; i++) {
        // finding the smallest element
        int smallest_index = i+1;
        int smallest_num = arr[i];
        for (int j = i+1; j < n; j++) {
            // if(arr[j] < INT_MAX){
            if(smallest_num > arr[i]){
                smallest_num = arr[j];
                smallest_index = j;
            }
        }
        swap(arr[i], arr[smallest_index]);
    }
}

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};
    selectionSort(nums);
    // insertionSort(nums);

    for (auto i: nums) {
        cout << i << " ";
    }

    return 0;
}