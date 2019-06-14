    #include <bits/stdc++.h>
    using namespace std;

    int main(void)
    {
        int t,w,i,j;
        string s;
        cin >> t;
        for(i = 0; i < t; i++)
        {
            int count = 0;
            cin >> w;
            cin >> s;
            j = 0;
            while(j < w)
            {
                bool flag = false;
                while(isdigit(s[j]))
                {
                    j++;
                    flag = true;
                }
                if(flag == true)
                    count++;
                j++;
            }
            cout << count << endl;
        }
    }
