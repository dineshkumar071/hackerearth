    #include <bits/stdc++.h>
    using namespace std;

    int main(void)
    {
        int i,count;
        string s;
        cin >> s;
        //int a;
        //a = s.length();
        string s1 = "000000";
        string s2 = "111111";
        if(s.find(s1) != string::npos || s.find(s2) != string::npos)
        {
            cout << "Sorry, sorry!";
        }
        else
            cout << "Good luck!";
    }
