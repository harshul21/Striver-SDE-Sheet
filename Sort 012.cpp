//Probllem Link:- https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=striver-sde-sheet-problems&leftPanelTab=0
//Youtube Lin:- https://www.youtube.com/watch?v=oaVa-9wmpns
void sort012(int *arr, int n)
{
    //Time complexity=O(N);
    //Space Complexity=O(1);
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0: swap(arr[low++],arr[mid++]);
                break;
            case 1: mid++;
                break;
            case 2: swap(arr[mid],arr[high--]);
                break;
        }
    }
}
