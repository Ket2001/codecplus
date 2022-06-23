#include <iostream>
#include <cmath>

using namespace std;

int bin (int arr[], int l, int r, int target) {



    while (l <= r) {
        int mid = (l+r)/2;

        if (arr[mid] == target && arr[mid-1] != target)
        {
            return mid;
        }

     
        if (arr[mid] < target)
        {
            l = mid + 1;

        }else{
            r = mid - 1;
        }
        
    }
    return -1;
}

int main () {
    long long int n, m;
    
    cin >> n >> m;
   
    int arr_n[n], arr_m[m];
   
    for (size_t i = 1; i <= n; i++)
    {
        cin >> arr_n[i];
    }
    for (size_t i = 1; i <= m; i++)
    {
        cin >> arr_m[i];
    }
    for (size_t i = 1; i <= m; i++)
    {
        int re = bin(arr_n, 1, n, arr_m[i]);
      
        if (re != -1)
        {
            cout << re << " ";
        }
        else {
            cout << "0 ";
        }
    }
        
}
