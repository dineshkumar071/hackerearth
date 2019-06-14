
    #include <bits/stdc++.h>
    using namespace std;

    int main(void)
    {
        long long int i,s,x,n;
        cin >> s >> x >> n;
        pair <int,int>a[n+1];
        for(i = 0; i < n; i++)
        {
            cin >>a[i].first>>a[i].second ;
        }
        sort (a,a+n);
        int count = 0;
        i = 1;
        int j = 0;
        while(s > 0)
        {
            if(i == a[j].first)
            {
                s -= a[j].second;
                count++;
                j++;
            }
            else
            {
                s -= x;
                count++;
            }
            i++;
        }
        cout << count;
    }
