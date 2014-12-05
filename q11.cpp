// 1.1 Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?

#include <iostream>

using namespace std;
bool isUnique(const char *s);
//test case
int main()
{
    char *s = 'abacd';
    cout<<isUnique(s)<<endl;
    return 0;
}
//suppose all characters are ASCII
bool isUnique(const char *s)
{
   int i;
   bool *hasht;
   while (s)
   {
      i = *(s);
      if (hasht[i])
      {
         return false;
      }
      else
      {
         hasht[i] = true;
	 s++;
      }
   }
}

