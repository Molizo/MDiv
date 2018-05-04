#include <iostream>
#include <fstream>

using namespace std;
std::ifstream in ("mdiv.in");
std::ofstream out ("mdiv.out");

int v[1000005],viz[1000005];

int main()
{int maxx=-1,temp,n,m;
    in>>n;
    for(int i=0;i<n;i++)
    {
        in>>temp;
        v[temp]++;
        if(maxx<temp)
            maxx=temp;
    }
    in>>m;
    for(int i=0;i<m;i++)
    {
        in>>temp;
        if(viz[temp]==0)
        {
            if(temp==1)
                viz[temp]=n;
            else
            {
                for(int j=0;j<=maxx;j=j+temp)
                    viz[temp]=viz[temp]+v[j];
            }
        }
        out<<viz[temp]<<"\n";
    }
    return 0;
}
