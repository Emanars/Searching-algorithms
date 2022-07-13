#include <iostream>
  using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
  while (l <= r) {
    int mid = (l+r) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  return -1;
}

int main() {
  int array[10],num,y;
  int s=0,e=9;
  cout << " enter 10 sorting elements " << endl;
  for (int i = 0; i < 10; i++) {
    cin >> array[i];
  }
  cout << "enter an element to search" << endl;
  cin >> num;

  y = binarySearch(array, s, e, num);

  if (y == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << y << endl;
  }

  return 0;
}
