#include <iostream>

using namespace std;
void toh(int, char, char, char);

int main()
{
  char s,a,e;
  int x;
  s ='S'; // Start 
  a = 'A'; // Auxillary
  e = 'E'; // End

  cout << "Please enter the number of dics: ";
  cin >> x;
  toh(x,s,a,e);
  return 0;
}
void toh (int x, char s, char a, char e)
{
  if (x == 1)
  {
    cout << "replace disc 1 from " << s << " to " << e << endl;
    x = x-1;
  }
  else
  {
    toh(x-1,s,a,e);
    cout << "Put the disc " << x << "from " << s << " to" << e << endl;

    toh(x-1,a,e,s);
  }
}