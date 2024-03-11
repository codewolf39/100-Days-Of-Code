// Given two sorted matrices mat1 and mat2 of size n x n of elements. Each matrix contains numbers arranged in strictly ascending order, with each row sorted from left to right, and the last element of a row being smaller than the first element of the next row. You're given a target value, x, your task is to find and count all pairs {a, b} such that a is from mat1 and b is from mat2 where sum of a and b is equal to x.

// Example 1:

// Input: 
// n = 3, x = 21
// mat1 = {{1, 5, 6},
//         {8, 10, 11},
//         {15, 16, 18}}
// mat2 = {{2, 4, 7},
//         {9, 10, 12},
//         {13, 16, 20}}
// OUTPUT: 4
// Explanation: The pairs whose sum is found to be 21 are (1, 20), (5, 16), (8, 13), (11, 10).


int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int ans = 0;
	    int r1 = 0, c1 = 0;
	    int r2 = n-1, c2= n-1;
	    
	    while(r1<n && r2>=0){
	        int sum = mat1[r1][c1] + mat2[r2][c2];
	        
	        if(sum == x){
	            ans++;
	            c1++;
	            c2--;
	        }
	        else if (sum<x){
	            c1++;
	        }
	        else{
	            c2--;
	        }
	        
	        if(c1==n){
	            r1++;
	            c1=0;
	        }
	        if(c2<0){
	            r2--;
	            c2=n-1;
	        }
	        
	        
	    }
	    return ans;
	    
	}