vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    int left,right;
    for(int i=0;i<n-2;i++){
        left=i+1;
        right=n-1;//4
        while(left<right)//1<4
        {
            if(arr[left]+arr[right]+arr[i]==K){
                ans.push_back({arr[i],arr[left],arr[right]});
                int x=arr[left]; //5
                int y=arr[right];//2
                while(left<right && arr[left]==x)
                {
                    left++;
                }
                while(left<right && arr[right]==y)
                {
                    right--;
                }
            }
            else if(arr[left]+arr[right]+arr[i]<K)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        while(i+1<n && arr[i]==arr[i+1])
        {
            i++; 
        }
    }
    return ans;
}
