#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp=0;
    cin >> n;
    int array[n];

    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    for(int i=0; i<n/2 && n!=0; i++)
    {
       if(array[i] != array[n-i-1])
       {

           temp++;
           break;
       }
    }

    if (temp==0)
    {
        cout << "YES";
    }

else{
    cout << "NO";
}



    return 0;
}

