#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int ans=0;
        char ch[11][11];
        for(int i=1; i<11; i++)
        {
            for(int j=1; j<11; j++)
            {
                cin>> ch[i][j];

                if(ch[i][j] == 'X')
                {
                    if(i==1 || j==1 || i==10 || j==10)
                    {
                        ans++;
                    }
                    else if(i==2 || j==2 || i==9 || j==9)
                    {
                        ans +=2;
                    }
                    else if(i==3 || j==3 || i==8 || j==8)
                    {
                        ans +=3;
                    }
                    else if(i==4 || j==4 || i==7 || j==7)
                    {
                        ans +=4;
                    }
                    else if(i==5 || j==5 || i==6 || j==6)
                    {
                        ans +=5;
                    }
                }
            }
        }

        cout<< ans << endl;
    }
}

