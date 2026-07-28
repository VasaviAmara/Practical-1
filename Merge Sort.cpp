#include <iostream>
using namespace std;
void Merge(int arr[], int st, int mid, int end){
int i = st;
int j = mid + 1;
int k = 0;
int temp[end - st + 1];
while(i <= mid && j <= end){
if(arr[i] <= arr[j]){
temp[k++] = arr[i++];
}
else{
temp[k++] = arr[j++];
}
}
while(i <= mid){
temp[k++] = arr[i++];
}
while(j <= end){
temp[k++] = arr[j++];
}
for(i = st, k = 0; i <= end; i++, k++){
arr[i] = temp[k];
}
}
void M_s(int arr[], int st, int end){
if(st < end){
int mid = (st + end) / 2;
M_s(arr, st, mid);
M_s(arr, mid + 1, end);
Merge(arr, st, mid, end);
}
}
int main()
{
int n;
cout << "Enter number of elements: ";
cin >> n;
int arr[n];
cout << "Enter elements:\n";
for(int i = 0; i < n; i++){
cin >> arr[i];
}
M_s(arr, 0, n - 1);
cout << "Sorted array is: ";
for(int i = 0; i < n; i++){
cout << arr[i] << " ";
}
    return 0;
}
