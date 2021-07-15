//tower of henoi
#include <bits/stdc++.h>
using namespace std;

void towerOfHenoi(int n,char src , char dest , char helper){
  if(n==0) return;
  towerOfHenoi(n-1,src,helper,dest);
  cout << "Disk : " << n << " Moved from " << src << " to " << dest << endl;
  towerOfHenoi(n-1,helper,dest,src);
}

long long toh(int n, int from, int to, int aux) {
    int count = 1;
    if(n==0){
        return 0;
    }
    count += toh(n-1, from,aux,to);
    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
    count += toh(n-1,aux,to,from);
    return count;
}

int main()
{
  int n; cin >> n;
  towerOfHenoi(n,'A' , 'C' , 'B');  // A is src , B is helper and C is dest
  return 0;
}

