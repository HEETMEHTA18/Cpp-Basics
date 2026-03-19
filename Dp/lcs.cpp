#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
    int main()
        
    {
        string s1;
        string s2;
        cin>>s1>>s2;   
    
        
        
        int x=s1.size();
        int y=s2.size();
        int l[x+1][y+1];
        int result=0;
        for(int i =0 ; i <=x;i++)
        {
            l[i][0]=0;//instialize
        }
        for(int j =0 ; j <=y;j++)
        {
            l[0][j]=0;//instialize
        }
        for(int i = 1;i<=x;i++)
        {
            for(int j =1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    l[i][j]=1+l[i-1][j-1];
                }
               else 
                    {
                        l[i][j]=max(l[i-1][j],l[i][j-1]);
                    }
                }
            }
        result=l[x][y];
        cout<<result<<endl;
           string lcs = "";
            int i = x, j = y;
        while (i > 0 && j > 0) {
    if (s1[i-1] == s2[j-1]) {
        lcs += s1[i-1];
        i--; 
        j--;
    }
            // if both the cross valuesare same so doing -- in both 
    
    else if (l[i-1][j] > l[i][j-1]) {
        i--;
    } else {
        j--;
    }
}

reverse(lcs.begin(), lcs.end());
cout << lcs << endl;
        return 0;
       
    
}