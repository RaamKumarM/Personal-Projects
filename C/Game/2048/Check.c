int Change(int a[4][4], int n)
{
    int p,q,r,s;
    if (n==4)
    {
        p=0;
        q=1;
        r=2;
        s=3;
    }
    else if (n==6)
    {
        p=3;
        q=2;
        r=1;
        s=0;
    }
    else if (n==8)
    {
        p=0;
        q=1;
        r=2;
        s=3;    
    }
    else if (n==2)
    {
        p=3;
        q=2;
        r=1;
        s=0;
    }
    
    if ((n==4)||(n==6)){
    for (int i=0;i<4;i++)
    {
        if (a[i][p]==0)
        {
            if (a[i][q]==0)
            {
                if (a[i][r]==0)
                {
                    a[i][p]=a[i][s];
                    a[i][s]=0;
                }
                else if (a[i][r]==a[i][s])
                {
                    a[i][p]=a[i][r]+a[i][s];
                    a[i][r]=0;
                    a[i][s]=0;
                }
                else
                {
                    a[i][p]=a[i][r];
                    a[i][q]=a[i][s];
                    a[i][r]=0;
                    a[i][s]=0;
                }
            }
            else
            {
                if (a[i][r]==0)
                {
                    if (a[i][q]==a[i][s])
                    {
                        a[i][p]=a[i][q]+a[i][s];
                        a[i][q]=0;
                        a[i][s]=0;
                    }
                    else
                    {
                        a[i][p]=a[i][q];
                        a[i][q]=a[i][s];
                        a[i][s]=0;
                    }
                }
                else
                {
                    if (a[i][q]=a[i][r])
                    {
                        a[i][p]=a[i][q]+a[i][r];
                        a[i][q]=a[i][s];
                        a[i][r]=0;
                        a[i][s]=0;
                    }
                    else if (a[i][r]==a[i][s])
                    {
                        a[i][p]=a[i][q];
                        a[i][q]=a[i][r]+a[i][s];
                        a[i][r]=0;
                        a[i][s]=0;
                    }
                    else
                    {
                        a[i][p]=a[i][q];
                        a[i][q]=a[i][r];
                        a[i][r]=a[i][s];
                        a[i][s]=0;
                    }
                }
            }
        }
        else
        {
            if (a[i][q]==0)
            {
                if (a[i][r]==0)
                {
                    if (a[i][p]==a[i][s])
                    {
                        a[i][p]+=a[i][s];
                        a[i][s]=0;
                    }
                    else
                    {
                        a[i][q]=a[i][s];
                        a[i][s]=0;
                    }
                }
                else
                {
                    if (a[i][p]==a[i][r])
                    {
                        a[i][p]+=a[i][r];
                        a[i][r]=0;
                    }
                    else if (a[i][s]==0)
                    {
                        a[i][q]=a[i][r];
                        a[i][r]=0;
                    }
                    else
                    {
                        if (a[i][r]==a[i][s])
                        {
                            a[i][q]=a[i][r]+a[i][s];
                            a[i][r]=0;
                            a[i][s]=0;
                        }
                    }
                }
            }
            else if (a[i][p]==a[i][q])
            {
                a[i][p]+=a[i][q];
                a[i][q]=0;
                if (a[i][r]==a[i][s])
                {
                    a[i][q]=a[i][r]+a[i][s];
                    a[i][r]=0;
                    a[i][s]=0;
                }
                else
                {
                    a[i][q]=a[i][r];
                    a[i][r]=a[i][s];
                    a[i][s]=0;
                }
            }
            else if (a[i][r]!=0)
            {
                if (a[i][q]==a[i][r])
                {
                    a[i][q]+=a[i][r];
                    a[i][r]=a[i][s];
                    a[i][s]=0;
                }
                else if (a[i][r]==a[i][s])
                {
                    a[i][r]+=a[i][s];
                    a[i][s]=0;
                }
            }
            else
            {
                if (a[i][q]==a[i][s])
                {
                    a[i][q]+=a[i][s];
                    a[i][s]=0;
                }
                else
                {
                    a[i][r]=a[i][s];
                    a[i][s]=0;
                }
            }
        }
    }
}
    if ((n==8)||(n==2)){
    for (int i=0;i<4;i++)
    {
        if (a[p][i]==0)
        {
            if (a[q][i]==0)
            {
                if (a[r][i]==0)
                {
                    a[p][i]=a[s][i];
                    a[s][i]=0;
                }
                else if (a[r][i]==a[s][i])
                {
                    a[p][i]=a[r][i]+a[s][i];
                    a[r][i]=0;
                    a[s][i]=0;
                }
                else
                {
                    a[p][i]=a[r][i];
                    a[q][i]=a[s][i];
                    a[r][i]=0;
                    a[s][i]=0;
                }
            }
            else
            {
                if (a[r][i]==0)
                {
                    if (a[q][i]==a[s][i])
                    {
                        a[p][i]=a[q][i]+a[s][i];
                        a[q][i]=0;
                        a[s][i]=0;
                    }
                    else
                    {
                        a[p][i]=a[q][i];
                        a[q][i]=a[s][i];
                        a[s][i]=0;
                    }
                }
                else
                {
                    if (a[q][i]=a[r][i])
                    {
                        a[p][i]=a[q][i]+a[r][i];
                        a[q][i]=a[s][i];
                        a[r][i]=0;
                        a[s][i]=0;
                    }
                    else if (a[r][i]==a[s][i])
                    {
                        a[p][i]=a[q][i];
                        a[q][i]=a[r][i]+a[s][i];
                        a[r][i]=0;
                        a[s][i]=0;
                    }
                    else
                    {
                        a[p][i]=a[q][i];
                        a[q][i]=a[r][i];
                        a[r][i]=a[s][i];
                        a[s][i]=0;
                    }
                }
            }
        }
        else
        {
            if (a[q][i]==0)
            {
                if (a[r][i]==0)
                {
                    if (a[p][i]==a[s][i])
                    {
                        a[p][i]+=a[s][i];
                        a[s][i]=0;
                    }
                    else
                    {
                        a[q][i]=a[s][i];
                        a[s][i]=0;
                    }
                }
                else
                {
                    if (a[p][i]==a[r][i])
                    {
                        a[p][i]+=a[r][i];
                        a[r][i]=0;
                    }
                    else if (a[s][i]==0)
                    {
                        a[q][i]=a[r][i];
                        a[r][i]=0;
                    }
                    else
                    {
                        if (a[r][i]==a[s][i])
                        {
                            a[q][i]=a[r][i]+a[s][i];
                            a[r][i]=0;
                            a[s][i]=0;
                        }
                    }
                }
            }
            else if (a[p][i]==a[q][i])
            {
                a[p][i]+=a[q][i];
                a[q][i]=0;
                if (a[r][i]==a[s][i])
                {
                    a[q][i]=a[r][i]+a[s][i];
                    a[r][i]=0;
                    a[s][i]=0;
                }
                else
                {
                    a[q][i]=a[r][i];
                    a[r][i]=a[s][i];
                    a[s][i]=0;
                }
            }
            else if (a[r][i]!=0)
            {
                if (a[q][i]==a[r][i])
                {
                    a[q][i]+=a[r][i];
                    a[r][i]=a[s][i];
                    a[s][i]=0;
                }
                else if (a[r][i]==a[s][i])
                {
                    a[r][i]+=a[s][i];
                    a[s][i]=0;
                }
            }
            else
            {
                if (a[q][i]==a[s][i])
                {
                    a[q][i]+=a[s][i];
                    a[s][i]=0;
                }
                else
                {
                    a[r][i]=a[s][i];
                    a[s][i]=0;
                }
            }
        }
    }
}
}
