<<<<<<< HEAD
// 1.1 Implement an algorithm to determine if a string has all unique
// characters. What if you cannot use additional data structures?

#include <iostream>
#include <cstring>
using namespace std;

class IsUniqueChar {
    private:
        string elem;
        bool isUnique() {
            bool hashTable[256] = {false};
            int ii = 0;
            for (int i = 0; i < elem.length(); i++) {
                ii = elem[i];
                if(hashTable[ii]) return false;
		hashTable[ii] = true;
	    }
	    return true;
	};
    public:
        void setS(string s) {
            elem = s;
	};
	void prt() {
            if (isUnique()) cout<<"The characters are unique"<<endl;
            else cout<<"Not unique"<<endl;
	};
	IsUniqueChar(string s):elem(s) {};
	IsUniqueChar() {};
	~IsUniqueChar() {};
};

//test case
int main()
{
  	IsUniqueChar mytest;;
	mytest.setS("abcs");
	mytest.prt();
   return 0;
}
=======
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

>>>>>>> fbb364af8444f2c94802fde1872dbb3f6f79b0d0
