int firstOccurance(vector<int>& arr, int n, int key){
    int low = 0, high = n-1, ans = -1;
    while(low <= high){
        int mid = low +(high - low)/2;
        
        if(arr[mid] == key){
            ans = mid;
            high = mid -1;
        }
        else if(key > arr[mid])
            low = mid +1;
        else
            high = mid - 1;
    }
    return ans;
}
int lastOccurance(vector<int>& arr, int n, int key){
    int low = 0, high = n-1, ans = -1;
    
    while(low <= high){
        int mid = low +(high - low)/2;
        
        if(arr[mid] == key){
            ans = mid;
            low = mid +1;
        }
        else if(key > arr[mid])
            low = mid +1;
        else
            high = mid - 1;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first = firstOccurance(arr,n,k);
    p.second = lastOccurance(arr,n,k);
    
    return p;
}
