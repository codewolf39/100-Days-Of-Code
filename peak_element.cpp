// Given an 0-indexed array of integers arr[] of size n, find its peak element. An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).

// Note: The output will be 1 if the index returned by your function is correct; otherwise, it will be 0.

// Example 1:

// Input: 
// n = 3
// arr[] = {1, 2, 3}
// Peak element's index: 2
// Output: 
// 1
// Explanation: 
// If the index returned is 2, then the output printed will be 1. Since arr[2] = 3 is greater than its adjacent elements, and there is no element after it, we can consider it as a peak element. No other index satisfies the same property.
// Example 2:

// Input:
// n = 7
// arr[] = {1, 1, 1, 2, 1, 1, 1}
// Output: 
// 1
// Explanation: 
// In this case there are 5 peak elements with indices as {0,1,3,5,6}. Returning any of them will give you correct answer.

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       if(n==0){
           return 0;
       }
       int lo = 0, hi = n-1;
       while(lo<=hi){
           int mid = lo+(hi-lo)/2;
           if(mid==0 && arr[mid]>=arr[mid+1]){
               return 0;
           }
           else if(mid==n-1 && arr[mid]>=arr[mid-1]){
               return n-1;
           }
           else if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
               return mid;
           }
           else{
               if(mid > 0 && arr[mid-1] > arr[mid]){
                   hi=mid-1;
               }
               else{
                   lo=mid+1;
               }
           }
       }
       
    }
};