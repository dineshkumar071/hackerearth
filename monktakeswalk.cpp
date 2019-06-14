
    #include<bits/stdc++.h>
    using namespace std;
    int main(void)
    {
        int t,i,j;
        string s;
        cin>>t;
        for(i=0;i<t;i++)
        {
            cin>>s;
            int d=s.length();
            int count=0;
            for(j=0;j<d;j++)
            {
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
                {
                    count++;
                }
            }cout<<count<<endl;
        }
    }
