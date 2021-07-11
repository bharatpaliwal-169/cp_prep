//tower of henoi
#include <bits/stdc++.h>
using namespace std;

void towerOfHenoi(int n,char src , char dest , char helper){
  if(n==0) return;
  towerOfHenoi(n-1,src,helper,dest);
  cout << "Disk : " << n << " Moved from " << src << " to " << dest << endl;
  towerOfHenoi(n-1,helper,dest,src);

}

int main()
{
  int n; cin >> n;
  towerOfHenoi(n,'A' , 'C' , 'B');  // A is src , B is helper and C is dest

  return 0;
}
