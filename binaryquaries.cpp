
    #include <bits/stdc++.h>
    using namespace std;
    # define endl '\n'

    int main(void)
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        long int s,q;
        cin >> s >> q;
        int a[s],i,j;
        for(i = 1; i <= s; i++)
            cin >> a[i];
        for(j = 0; j < q; j++)
        {
            long int x,l,r;
            int b;
            cin >> b;
            if(b == 0)
            {
                cin >> l >> r;
                (a[r] == 0) ? cout << "EVEN" : cout << "ODD";
                cout << endl;
            }
            else
            {
                cin >> x;
                if(x <= s)
                    (a[x] == 0) ? a[x] = 1 : a[x] = 0;
            }
        }

    }
