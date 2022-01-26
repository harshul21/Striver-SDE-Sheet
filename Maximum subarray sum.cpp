//Problem Link:-https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?topList=striver-sde-sheet-problems
long long maxSubarraySum(int arr[], int n)
{
    long long max_sum=arr[0];
    long long curr_sum=0;
    for(long long i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        if(curr_sum>max_sum)
        {
            max_sum=curr_sum;
        }
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }
    return max_sum;
}
