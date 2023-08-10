#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    string text;

    while(cin>>x)
        {
            int count=0;

            while(x--)
            {
                cin>>text;
                if(text == "Tetrahedron")
                    {
                        count += 4;

                    }
             //return count;

                else if(text == "Cube")
                    {
                        count += 6;

                    }
                else if(text == "Octahedron")
                    {
                        count += 8;

                    }
                else if(text == "Dodecahedron")
                    {
                        count += 12;

                    }
                else if( text == "Icosahedron")
                    {
                        count += 20;

                    }

        }
        cout<< count << endl;
    }

}
