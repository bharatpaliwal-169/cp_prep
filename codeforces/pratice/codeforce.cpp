#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long


struct Point {
    int x, y, z;
};


bool isIntersecting(Point p1, Point p2, Point q1, Point q2) {
  if (p1.x > p2.x)swap(p1.x, p2.x);
  if (p1.y > p2.y)swap(p1.y, p2.y);
  if (p1.z > p2.z)swap(p1.z, p2.z);
  if (q1.x > q2.x)swap(q1.x, q2.x);
  if (q1.y > q2.y)swap(q1.y, q2.y);
  if (q1.z > q2.z)swap(q1.z, q2.z);
  
  bool x_overlap = max(p1.x, q1.x) < min(p2.x, q2.x);
  bool y_overlap = max(p1.y, q1.y) < min(p2.y, q2.y);
  bool z_overlap = max(p1.z, q1.z) < min(p2.z, q2.z);
  
  return x_overlap && y_overlap && z_overlap;
}

int main(){

  IOS
  Point p1, p2, q1, q2;

  cin >> p1.x >> p1.y >> p1.z >> p2.x >> p2.y >> p2.z; 
  cin >> q1.x >> q1.y >> q1.z >> q2.x >> q2.y >> q2.z;

  if (isIntersecting(p1, p2, q1, q2)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0 ;
}

