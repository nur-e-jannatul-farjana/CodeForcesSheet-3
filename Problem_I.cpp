#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n,smallest;
    cin >> t;




    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int arr[n];
        int res[n];

        for(int j=1; j<=n; j++)
        {
           cin >> arr[j];

            while (i < j)
           {
               res[j] = arr[i] + arr[j] + j - i;
           }


        }
    }



  // smallest = res[1];

  /*  for (int i = 1; i<=t; i++)
    {
       for(int j=1; j<=n; j++)
        {

        }
    }   */




}

