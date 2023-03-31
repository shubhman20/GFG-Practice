// Function to return minimum number of jumps to end of array

class Solution{
  public:
  
    int minJumps(int arr[], int n){
        // Your code here
        if(n<=1) return 0;
        if(arr[0]==0) return -1;
        int maxCnt=arr[0];
        int steps = arr[0];
        int jumps=1;
        for(int i=1;i<n;i++){
            if(i==n-1) return jumps;
            steps--;
            maxCnt = max(maxCnt,i+arr[i]);
            if(steps==0){
                if(i>=maxCnt) return -1;
                jumps++;
                steps = maxCnt - i;
            }
        }
        return -1;
        
    }
};
