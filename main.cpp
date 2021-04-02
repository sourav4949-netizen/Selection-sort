# include<bits/stdc++.h>
using namespace std;

void swap(int *xp,int *yp)
{
    int temp;
    temp= *xp;
    *xp=*yp;
    *yp=temp;
}

void  Selectionsort(int arr[],int length)
{
  int i,j,min_idx;
  for(i=0;i<length-1;i++)
  {
    min_idx=i;
    for(int j=i+1;j<length;j++)
      if(arr[j]<arr[min_idx])
        min_idx=j;
      swap(&arr[min_idx],&arr[i]);
  }
}
void PrintArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main() {
  int arr[]={34,45,87,12,21,4,9,8,43};
  int length;
  length=sizeof(arr)/sizeof(arr[0]);
  cout<<"Original Array is:";
  PrintArray(arr,length);
  Selectionsort(arr,length);
  cout<<"Sorted array is:";
  PrintArray(arr,length);
}