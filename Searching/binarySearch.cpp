#include <iostream>
using namespace std;
int binarySearch(int *arr, int n, int key)
{
  int st = 0, end = n - 1;
  while (st <= end)
  {
    int mid = st + end / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      st = mid - 1;
    }
    else
    {
      st = mid + 1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2};
  int n = sizeof(arr) / sizeof(int);
  cout << binarySearch(arr, n, 1) << endl;
  return 0;
}
