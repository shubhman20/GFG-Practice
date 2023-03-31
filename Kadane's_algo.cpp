class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ans=INT_MIN,currSum=0;
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            ans=max(ans,currSum);
            if(currSum<0){
                currSum=0;
            }
        }
        return ans;
        
    }
};
