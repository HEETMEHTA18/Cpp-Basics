    #include<iostream>
    using namespace std;
    int fact(int x)
    {
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f*=i;
    }
        return f;
    }
    int ncr(int n,int r)
    {
        int a=fact(n);
        int b=fact(r);
        int c=fact(n-r);
        return a/(b*c);
    }
    int main()
    {
        int n,r;
        int result=0;
        cout<<"Enter n :";
        cin>>n;
        cout<<"Enter r :";
        cin>>r;
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=i;j++)
        //     {
        //         cout<<ncr(n,r)<<" ";
        //     }
        //     cout<<endl;
        // }
        result=ncr(n,r);
        cout<<"nCr of "<<n<<" and "<<r<<" is : "<<result<<endl;
        // cout<<ncr(n,r)<<" ";
        return 0;
    }