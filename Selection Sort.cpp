#include <iostream>
using namespace std;
int main(){
int n, temp;
cout << "Enter the number of elements: ";
cin >> n;
int arr[n];
cout << "Enter " << n << " elements:\n";
for(int i = 0; i < n; i++){ 
cin >> arr[i];
}
for(int i = 0; i < n - 1; i++){
int min = i;
for(int j = i + 1; j < n; j++){
if(arr[j] < arr[min]){
min = j;
}
}
temp = arr[i];
arr[i] = arr[min];
arr[min] = temp;
}
cout << "Sorted array is: ";
for(int i = 0; i < n; i++){
cout << arr[i] << " ";
}
  return 0;
}
