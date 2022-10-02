#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        cin>>a[i][j];}
    }

    int ptr;
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int ctr=0;
            for(int k=0;k<m;k++)
            {
                if((a[i][k]=='1')||(a[j][k]=='1'))
                ctr++;
            }
            
            c += ((temp == ctr) ? 1 : 0);

            if(temp<ctr) {
                temp=ctr;
                c = 1;
            }
            
            
        }
    }
    cout<<temp<<endl<<c<<endl;
    
    return 0;
}
