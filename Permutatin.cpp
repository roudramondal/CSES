#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  if (2<=n&&n<=3)
  {
    cout << "NO SOLUTION" << endl;
  }
  else if (n==1||n>3)
  {
    for (int i = 2; i <= n;i+=2)
    {
      cout << i <<" ";
    }
    for (int i = 1; i <= n;i+=2)
    {
      cout << i<<" ";
    }
    cout << endl;
  }
  return 0;

}