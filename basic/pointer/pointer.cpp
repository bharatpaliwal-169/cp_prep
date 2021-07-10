#include <bits/stdc++.h>
using namespace std;
void basic_pointer(){
  int var = 10;
  int *p = &var;
  cout << *p <<  endl; //value
  cout << p << endl; //address
  // cout << p + var << endl; //addr + var
  cout << *p + var << endl; // var + var
  cout << endl;
  int **ptr = &p;
  cout << **ptr << endl; // value at p is te value at var so 10
  cout << *ptr << endl; // address of the var that is contained by p
  cout << ptr << endl; //address of double pointer


  int *q;int x;
  q = &x;
  *q = 0;
  cout << endl;
  cout << q << *q << endl; 
}

int sq1(int n)
{
  cout << &n << endl;
  return n*n;
}
void sq2(int *n){
  cout << n << endl;
  cout << &n << endl; // this is the address of the pointer itself.
  *n *= *n;
}

void sq3(int &n){
  cout << &n << endl;
  n *= n;
}
void call_by_methods(){
  int n1 = 8;
  int n2 = 8 , n3 = 8;

  //call by value
  cout << &n1 << endl;
  cout << sq1(n1) << endl;

  //call by ref: pointer
  cout << &n2 << endl;
  sq2(&n2);
  cout << n2 << endl; //changed value

  //call by ref : ref
  cout << &n3 << endl;
  sq3(n3);
  cout << n3 << endl; //changed value

}

void pointer_array(){
  int val[3] = {5,4,3};
  int *ptr = val; // *ptr = &val[0];
  cout << ptr << endl;
  cout << ptr[0] << ptr[2] << endl;
  //pointer increment
  for (int i = 0; i < 3; i++)
    {
      cout << "Value at ptr = " << ptr << "\n";
      cout << "Value at *ptr = " << *ptr << "\n";
      
      // Increment pointer ptr by 1 
      ptr++;
    }
}


int main()
{
  // basic_pointer();
  // call_by_methods();
  // pointer_array();
  return 0;
}


// to revise pointer via questions visit : https://www.geeksforgeeks.org/c-language-2-gq/pointers-gq/




