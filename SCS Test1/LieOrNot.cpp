#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    string condi;
    int modi = 0;
    int upp = 10;
    int low = 0;
    while ((cin >> modi) && modi)
    {
        cin.get();
        getline(cin, condi);
        if (condi[4] == 'h')
            upp = modi - 1;
        else if (condi[4] == 'l')
            low = modi + 1;
        else
        {
            if (low > upp)
            {
                cout << "Stan is dishonest";
                modi = low = 0;
                upp = 10;
            }
            else
                cout << "Stan may be honest";
        }
    }
    return 0;

}
/*
int tep,lef,rig,fin;
void ini()
{
    lef = 0;
    rig = 11;
    fin = 1;
}

void judge(int ans)
{
    if(ans <= lef||ans >= rig)
        fin = 0;
}

int main()
{
    string str;
    ini();
    int cnt = 0;
    while(scanf("%d",&tep)v && tep)
    {
        cnt++;
        getchar();
        getline(cin,str);
        if(s[4]=='h')
            r=min(rig,tep);
        else if(s[4]=='l')
            l=max(lef,tep);
        else
        {
            judge(tep);
            if(fin)
                printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");
            ini();
        }
    }
    return 0;
}*/




