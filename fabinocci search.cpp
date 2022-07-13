
#include <iostream>
using namespace std;
int min(int x, int y) { 
return (x <= y) ? x : y;
 }
  
int fibSearch(int arr[], int x, int n)
{
    int fibM2 = 0; 
    int fibM1 = 1; 
    int fibM = fibM2 + fibM1;
    while (fibM < n) {
        fibM2 = fibM1;
        fibM1 = fibM;
        fibM = fibM2 + fibM1;
    }
    int offset = -1;
    while (fibM > 1) {
        int i = min(offset + fibM2, n - 1);
        if (arr[i] < x) {
            fibM = fibM1;
            fibM1 = fibM2;
            fibM2 = fibM - fibM1;
            offset = i;
        }
        else if (arr[i] > x) {
            fibM = fibM2;
            fibM1 = fibM1 - fibM2;
            fibM2 = fibM - fibM1;
        }
        else
            return i;
    }

   
        if (fibM1 && arr[offset + 1] == x)
        return offset + 1;
    return -1;
}
int main()
{
    int arr[]
        = { 9, 22, 35, 43, 45, 55, 82, 84, 85, 95, 150,200};
    int x, n = sizeof(arr) / sizeof(arr[0]);
    cout<<"enter the searching element";
cin>>x;
      int ind = fibSearch(arr, x, n);
  if(ind>=0)
    cout << "Found at index: " << ind;
  else
    cout << x << " isn't present in the array";
    return 0;
}

