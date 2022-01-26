//Problem Link:-https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628?topList=striver-sde-sheet-problems&leftPanelTab=0
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
     int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 and j>=0)
    {
        if(arr1[i]>arr2[j])
        {
            arr1[k--]=arr1[i--];
        }
        else
        {
            arr1[k--]=arr2[j--];
        }
    }
    while(i>=0)
    {
        arr1[k--]=arr1[i--];
    }
    while(j>=0)
    {
        arr1[k--]=arr2[j--];
    }
    return arr1;
    
}
