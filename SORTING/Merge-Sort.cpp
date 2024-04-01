// Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.

//Your Task:
//You don't need to take the input or print anything. 
//Your task is to complete the function merge() which takes arr[], l, m, r as its input parameters and modifies arr[] in-place such that it is sorted from position l to position r, and function mergeSort() which uses merge() to sort the array in ascending order using merge sort algorithm.

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int len1=m-l+1;
        int len2=r-m;
        int arr1[len1],arr2[len2];
        int k=l;
        for(int i=0;i<len1;i++)
        {
            arr1[i]=arr[k++];
        }
        k=m+1;
        for(int i=0;i<len2;i++)
        {
            arr2[i]=arr[k++];
        }
        int main=l;
        int index1=0;
        int index2=0;
        
        while(len1>index1 && len2>index2)
        {
            if(arr1[index1]>arr2[index2])
            {
                arr[main++]=arr2[index2++];
            }
            else
            {
                arr[main++]=arr1[index1++];
            }
        }
        while(len1>index1)
        {
            arr[main++]=arr1[index1++];
        }
        while(len2>index2)
        {
            arr[main++]=arr2[index2++];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
        {
            return;
        }
        else
        {
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};