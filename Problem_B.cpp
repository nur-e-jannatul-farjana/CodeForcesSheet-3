#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,count=-1;

    cin >> n;
    long long int arr[n];

    for(int i =0; i<n; i++)
    {
        cin >> arr[i];

    }

  long long int s;
  cin >> s;

    for(int i = 0; i<n; i++)
    {
        if (s == arr[i])
        {
            cout << i;
            count++;
            break;
        }

    }

    if (count == -1)
    {
        cout << -1;
    }

    return 0;
}

