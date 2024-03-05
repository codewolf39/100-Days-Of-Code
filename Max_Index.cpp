    
// Given an array a of n positive integers. The task is to find the maximum of j - i subjected to the constraint of a[i] < a[j] and i < j.

// Example 1:

// Input:
// n = 2
// a[] = {1, 10}
// Output:
// 1
// Explanation:
// a[0] < a[1] so (j-i) is 1-0 = 1.
// Example 2:

// Input:
// n = 9
// a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
// Output:
// 6
// Explanation:
// In the given array a[1] < a[7] satisfying the required condition(a[i] < a[j]) thus giving the maximum difference of j - i which is 6(7-1). 
    
    
    
    
    
    
    
    
    
    
    
    
    { 
        // Your code here
        vector<int>preMin(n,0);
        vector<int>suffMax(n,0);
        
        int maxi=a[n-1];
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi, a[i]);
            suffMax[i]=maxi;
        }
        
        int mini=a[0];
        for(int i=0;i<n;i++){
            mini=min(mini, a[i]);
            preMin[i]=mini;
        }
        
        int i=0, j=0;
        int ans=-1;
        while(i<n && j<n){
            if(preMin[i]<=suffMax[j]){
                ans=max(ans, j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }