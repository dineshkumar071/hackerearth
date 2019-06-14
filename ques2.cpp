    #include<bits/stdc++.h>
    using namespace std;
    int main(void){
        int i,t,x,y;
        cin>>t>>x>>y;
        int a[t];
        bool flag = true;
        for(i=0;i<t;i++){
            cin>>a[i];
            if(!(a[i]>=x&&a[i]<=y)){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES";
        }else
           cout<<"NO";
    }
