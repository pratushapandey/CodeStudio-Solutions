#include <bits/stdc++.h> 

int binarySearch(long long int N){

    if(N == 0 || N == 1)
    {
        return N;
    }
    
    long long int low = 2;
    long long int high = N;
    long long int mid;


    while(low < high)
    {
        mid = low + (high - low) / 2;
        if(mid <= (N / mid))
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
   
    return (int)(low - 1);
}
int sqrtN(long long int N)
{
    // Write your code here.
    return binarySearch(N);
}
