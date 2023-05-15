#include<iostream>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int a[l];
    int f;
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
    }
    cin>>f;
    int pagef=0;
    int m,n,s,pages;
    pages=sizeof(a)/sizeof(a[0]);
    int t[f];
    for(m=0;m<f;m++)
    {
        t[m]=-1;
    }
    for(m=0;m<pages;m++)
    {
        s=0;
        for(n=0;n<f;n++)
        {
            if(a[m]==t[n])
            {
                s++;
                pagef--;
            }
        }
        pagef++;
        if((pagef<=f)&&(s==0))
        {
            t[m]=a[m];
        }
        else if(s==0)
        {
            t[(pagef-1)%f]=a[m];
        }
    }
    cout<<pagef;
    return 0;
}