    #include <iostream>
    using namespace std;

    int main()
    {
        unsigned n,i,c=1;
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++)
        {
            do
            {
            cin>>a[i];
            }
            while(a[i]<1&&a[i]>1000);
        }
        for(i=0;i<n;i++)
        {
             c=(c*a[i])%(1000000007);
        }
        cout<<c;
        return 0;
    }
