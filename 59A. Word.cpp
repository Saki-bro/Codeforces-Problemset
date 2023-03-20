#include <iostream>
#include <string>
#include<ctype.h>

using namespace std;

int main()

{
    int upper = 0;
    int lower = 0;
    string ch;
    cin>> ch;

   for(int i=0; ch[i] != 0 ; i++)
   {
       if(ch[i] >= 'A' && ch[i]<= 'Z')
       {
           upper++;
       }
       else if (ch[i] >= 'a' && ch[i]<= 'z')
       {
           lower++;
       }
   }

   if(upper > lower)
   {
       char cha;
        for (int i=0; i<ch.length(); i++)
        {
            cha = toupper(ch[i]);
            cout<< cha;
        }

   }
   else
   {
       char cha;
        for (int i=0; i<ch.length(); i++)
        {
            cha = tolower(ch[i]);
            cout<< cha;
        }

   }

    return 0;
}
