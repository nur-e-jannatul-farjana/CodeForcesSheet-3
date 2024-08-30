#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,num,res=0,dig;
   cin >> n;
   cin >> num;


      while ( num != 0)
      {
          dig = num%10;
          res = res+dig;
          num = num/10;
      }




    cout << res;







    return 0;
}
