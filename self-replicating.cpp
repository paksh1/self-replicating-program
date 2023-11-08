#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string a, fnm, b, c, d, e, f;
    string ch;
    for (int i = 97; i < 122; i++)
    {
        a = "proj_";
        b = i;
        c = ".exe";
        fnm = a + b + c;
        ifstream fin("piroject.exe",ios::in|ios::binary);
        ofstream fname(fnm,ios::out|ios::binary);
        while (!fin.eof())
        {
            fin>>ch;
            fname<<ch<<endl;
            fname<<ch<<endl;
            fname<<ch<<endl;
            fname<<ch<<endl;
        }
        cout<<fnm<<endl;
        for(int i = 97; i < 122; i++)
        {
            d = i;
            fnm = a + b + d + c;
            ifstream fin("backup.exe",ios::in|ios::binary);
            ofstream fname(fnm,ios::out|ios::binary);
            while (!fin.eof())
            {
                fin>>ch;
                fname<<ch<<endl;
                fname<<ch<<endl;
                fname<<ch<<endl;
                fname<<ch<<endl;
            }
            cout<<fnm<<endl;
            for(int i = 97; i < 122; i++)
            {
                e = i;
                fnm = a + b + d + e + c;
                ifstream fin("backup.exe",ios::in|ios::binary);
                ofstream fname(fnm,ios::out|ios::binary);
                while (!fin.eof())
                {
                    fin>>ch;
                    fname<<ch<<endl;
                    fname<<ch<<endl;
                    fname<<ch<<endl;
                    fname<<ch<<endl;
                }
                cout<<fnm<<endl;
                for(int i = 97; i < 122; i++)
                {
                    f = i;
                    fnm = a + b + d + e + f + c;
                    ifstream fin("backup.exe",ios::in|ios::binary);
                    ofstream fname(fnm,ios::out|ios::binary);
                    while (!fin.eof())
                    {
                        fin>>ch;
                        fname<<ch<<endl;
                        fname<<ch<<endl;
                        fname<<ch<<endl;
                        fname<<ch<<endl;
                    }
                    cout<<fnm<<endl;
                }
            }
        }
    }
}