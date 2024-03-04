// Given an array arr of n positive integers. The task is to swap every ith element of the array with (i+2)th element.

// Example 1:

// Input:
// n = 3
// arr[] = 1 2 3
// Output:
// 3 2 1
// Explanation:
// Swapping 1 and 3, makes the array 3 2 1. There is only one swap possible in this array.


class Solution{
  public:
    void swapElements(int arr[], int n){
        for(int i=0; i<n-2; i++){
            int temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
        }
    }
};