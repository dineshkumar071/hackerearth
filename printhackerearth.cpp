    #include<bits/stdc++.h>
    using namespace std;
    int main(void)
    {
        int n,i;
        cin >> n;
        string s,d;
        cin >> s;
        sort(s.begin(), s.end());
        int a = 0,c = 0,e = 0,h = 0;
        int k = 0,r = 0,t = 0;
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'a')
                a++;
            else if(s[i] == 'c')
                c++;
            else if(s[i] == 'e')
                e++;
            else if(s[i] == 'h')
                h++;
            else if(s[i] == 'k')
                k++;
            else if(s[i] == 'r')
                r++;
            else if(s[i] == 't')
                t++;
        }
        //cout << a << " " << c << " " << e << " " << h << " " << k << " " << r << " " << t;
        int count = 0;
        while(h >= 2 && a >= 2 && e >= 2 && r >= 2 && c >= 1 && k >= 1 && t >= 1)
        {
            count++;
            h -= 2;
            a -= 2;
            e -= 2;
            r -= 2;
            c -= 1;
            k -= 1;
            t -= 1;
        }
        cout << count;
    }
