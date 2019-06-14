
    #include <bits/stdc++.h>
    using namespace std;

    int main(void)
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int a[100],i,j,k;
        string s;
        int t;
        cin >> t;
        int *sum = new int[t]();
        for(i = 0; i < t; i++)
        {
            cin >> s;
            k=s.length();
            j=0;
            sum[i] += (int)s[0]-'0';
            while(j < k)
            {
                if((int)s[j] == '+')
                {
                    sum[i] += (int)s[j + 1]-'0';
                }
                else if((int)s[j] == '-')
                    sum[i] -=(int)s[j + 1]-'0';

                j++;
            }
           // cout << sum[i] << endl;
        }
        sort(sum,sum+t);
        cout<< sum[t-1];

    }
