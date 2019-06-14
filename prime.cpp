
    #include <bits/stdc++.h>

    using namespace std;

    int main(void)
    {
        int a,i,j;
        cin >> a;
        for(i = 2; i <= a; i++)
        {
            for(j = 2; j <= i; j++)
            {
                if(i % j == 0)
                {
                    if(i == j)
                    {
                       cout << i << " ";
                       break;
                    }
                    break;
                }
            }
        }
    }
