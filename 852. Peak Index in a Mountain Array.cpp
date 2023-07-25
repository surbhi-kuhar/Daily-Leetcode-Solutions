// BRUTE FORCE 
int peakIndexInMountainArray(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]<arr[i]){
                ans=i;
                break;
            }
        }
        return ans;
}

// OPTIMIZED 
int peakIndexInMountainArray(vector<int>& arr) {
      int low=0;
        int high=arr.size()-1;
        int mid;
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }

        return low;
}
