#include<bits/stdc++.h>
#include<cstring>
#include<math.h>
using namespace std;

// function to change space value
int updateSpace(int space)
{ 
 
  space = (space* 10) / 13;
  if (space < 1)
    return 1;
  else
    return space;
}

void combSort(int arr[], int n) 
{
  
  int space = n;
 
  bool swap = 1;
  while (gap > 1 || swap == 1)
  {
    
    space = updateSpace(space);
    swap = 0;
 
    for (int i = 0; i < (n - space); i++)
    {
      int temp;
      if (arr[i] > arr[i + space])
      {
        temp = arr[i];
        arr[i] = arr[i + space];
        arr[i + space] = temp;
        swap = 1;
      }
    }
  }
}

int main() {
  int arr[10] = {2, 8, 11, 15, 12, -2, 35, -46, 74, 55};
  int n = 10;
  combSort(arr, n);
  cout << "Sorted array" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
} 
