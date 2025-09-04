#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;
  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1){ // we are using (high-1) becauz we are using i++
      i++;
    }
    while (arr[j] > pivot && j >= low + 1){ // we are using (low+1) becauz we are using j--
      j--;
    }
    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[low], arr[j]); // it will swap when j crosses i...
  return j;  // it will return the partition index..
             
}

void quick_sort(int arr[], int low, int high){
  if (low < high){
    int pindex = partition(arr, low, high);
    quick_sort(arr, low, pindex - 1);
    quick_sort(arr, pindex + 1, high);
  }
}
int main(){

  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;
  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  quick_sort(arr,0, n-1);
  cout << "displaying the sorted array :" << endl;
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  return 0;
}
