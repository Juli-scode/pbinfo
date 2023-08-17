void zone(int n,int a[][201],int z)
{
    int i,j,s=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if(z==1)
                if(i<j&&i+j<n+1)
                    s=s+a[i][j];
            if(z==2)
                if(i<j&&i+j>n+1)
                    s=s+a[i][j];
            if(z==3)
                if(i>j&&i+j<n+1)
                    s=s+a[i][j];
            if(z==4)
                if(i>j&&i+j>n+1)
                    s=s+a[i][j];
        }
    cout<<s;
}
