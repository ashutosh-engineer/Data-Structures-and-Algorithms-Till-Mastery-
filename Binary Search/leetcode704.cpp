// Array is sorted
// Ascending
// Asking target
// TArget exist so return the index else -1

// Bruteforce sollution
// Traversing through whole array if found that number 
// Then return index else -1
// For n size of array loop will ren till n times
//So tc will be Big O(n)
// Sc complexity would be Big O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int search(vector<int>& arr ,int target){
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i] == target){
                return i;
            }
        }
        return -1;
    }

    // Using Binary serach
    int Binarysearch(vector<int>& arr ,int target){
        int left =0 , right = arr.size()-1;

        while(left <= right){
            int mid=left+(right -left) / 2;
            if(arr[mid] == target){
                return mid;
            }else if(arr[mid] > target){
                right=mid-1;
            }else{
                left= mid+1;
            }
        }
        return -1;
        // Mid would be final answer
    }
};
int main(){
    Solution s1;
    vector<int>arr={1,2,3,4,9};
    int target=9;
    s1.search(arr, target);
    return 0;
}

// If the array is sorted then Binary search would be an 
// Optimal Searching algorithm;
// BEcause everytime search space gets reduced by half
// Timecomplexity Big O(log n)
// Space complexity is Big O(1)

