#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,lowest,index=1;
    cin >> n;
    int array[n];

    for(int i =1; i<=n; i++)
    {
        cin >> array[i];
    }

   lowest = array[1];

   for(int i = 1; i<=n; i++)
    {
       if(array[i] < lowest)
       {
           lowest = array[i];
           index = i;
       }
    }



    cout << lowest << " " << index ;


    return 0;
}
