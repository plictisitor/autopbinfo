/* 9usGcbkDP ily traian Um5Jcdt1X */ # include <fstream>
/* 9usGcbkDP ily traian Um5Jcdt1X */ using namespace std;
/* 9usGcbkDP ily traian Um5Jcdt1X */ 
/* 9usGcbkDP ily traian Um5Jcdt1X */ ifstream f("pietre.in");
/* 9usGcbkDP ily traian Um5Jcdt1X */ ofstream g("pietre.out");
/* 9usGcbkDP ily traian Um5Jcdt1X */ 
/* 9usGcbkDP ily traian Um5Jcdt1X */ int dl[5]={0,-1,0,1,0}, dc[5]={0,0,1,0,-1}, a[102][102], b[102][102],c[102][102],x[10002][2];
/* 9usGcbkDP ily traian Um5Jcdt1X */ int nrp,m,n,i,j,xx,minn,ii,jj,l,cl,k,t,d,piatra,p,q,p1,q1;
/* 9usGcbkDP ily traian Um5Jcdt1X */ char s[256];
/* 9usGcbkDP ily traian Um5Jcdt1X */ int main()
/* 9usGcbkDP ily traian Um5Jcdt1X */ {
/* 9usGcbkDP ily traian Um5Jcdt1X */  f>>m>>n>>k>>t;
/* 9usGcbkDP ily traian Um5Jcdt1X */  for (i=1;i<=k;i++)
/* 9usGcbkDP ily traian Um5Jcdt1X */  { f>>l>>cl;
/* 9usGcbkDP ily traian Um5Jcdt1X */    a[l][cl]=1;
/* 9usGcbkDP ily traian Um5Jcdt1X */    x[i][0]=l;
/* 9usGcbkDP ily traian Um5Jcdt1X */    x[i][1]=cl;
/* 9usGcbkDP ily traian Um5Jcdt1X */  }
/* 9usGcbkDP ily traian Um5Jcdt1X */  for (i=1;i<=t;i++)
/* 9usGcbkDP ily traian Um5Jcdt1X */  { f>>l>>cl;
/* 9usGcbkDP ily traian Um5Jcdt1X */    a[l][cl]=-1;
/* 9usGcbkDP ily traian Um5Jcdt1X */  }
/* 9usGcbkDP ily traian Um5Jcdt1X */  i=0;
/* 9usGcbkDP ily traian Um5Jcdt1X */  while (f>>s[i])
/* 9usGcbkDP ily traian Um5Jcdt1X */     i++;
/* 9usGcbkDP ily traian Um5Jcdt1X */  xx=i;
/* 9usGcbkDP ily traian Um5Jcdt1X */  for(i=0;i<=m+1;i++)
/* 9usGcbkDP ily traian Um5Jcdt1X */  {  a[i][0]=-1;
/* 9usGcbkDP ily traian Um5Jcdt1X */     a[i][n+1]=-1;
/* 9usGcbkDP ily traian Um5Jcdt1X */  }
/* 9usGcbkDP ily traian Um5Jcdt1X */  for(j=1;j<=n;j++)
/* 9usGcbkDP ily traian Um5Jcdt1X */  {
/* 9usGcbkDP ily traian Um5Jcdt1X */    a[0][j]=-1;
/* 9usGcbkDP ily traian Um5Jcdt1X */    a[m+1][j]=-1;
/* 9usGcbkDP ily traian Um5Jcdt1X */  }
/* 9usGcbkDP ily traian Um5Jcdt1X */  minn=m*n+1;
/* 9usGcbkDP ily traian Um5Jcdt1X */ 
/* 9usGcbkDP ily traian Um5Jcdt1X */  for(p=1;p<=k;p++)
/* 9usGcbkDP ily traian Um5Jcdt1X */     {i=x[p][0];j=x[p][1];
/* 9usGcbkDP ily traian Um5Jcdt1X */       for (ii=0;ii<=m+1;ii++)
/* 9usGcbkDP ily traian Um5Jcdt1X */         for(jj=0;jj<=n+1;jj++)
/* 9usGcbkDP ily traian Um5Jcdt1X */           b[ii][jj]=a[ii][jj];
/* 9usGcbkDP ily traian Um5Jcdt1X */      for (t=0;t<xx;t++)
/* 9usGcbkDP ily traian Um5Jcdt1X */     {
/* 9usGcbkDP ily traian Um5Jcdt1X */         if(s[t]=='N') d=1;
/* 9usGcbkDP ily traian Um5Jcdt1X */          else
/* 9usGcbkDP ily traian Um5Jcdt1X */             if (s[t]=='S') d=3;
/* 9usGcbkDP ily traian Um5Jcdt1X */               else
/* 9usGcbkDP ily traian Um5Jcdt1X */                 if (s[t]=='E') d=2;
/* 9usGcbkDP ily traian Um5Jcdt1X */                    else
/* 9usGcbkDP ily traian Um5Jcdt1X */                     d=4;
/* 9usGcbkDP ily traian Um5Jcdt1X */         if (b[i+dl[d]][j+dc[d]]==1)
/* 9usGcbkDP ily traian Um5Jcdt1X */             if (i+2*dl[d]>=1 && i+2*dl[d]<=m && j+2*dc[d]>=1 && j+2*dc[d]<=n)
/* 9usGcbkDP ily traian Um5Jcdt1X */             if (b[i+2*dl[d]][j+2*dc[d]]==0)
/* 9usGcbkDP ily traian Um5Jcdt1X */           {
/* 9usGcbkDP ily traian Um5Jcdt1X */            b[i+2*dl[d]][j+2*dc[d]]=1;
/* 9usGcbkDP ily traian Um5Jcdt1X */            b[i+dl[d]][j+dc[d]]=0;
/* 9usGcbkDP ily traian Um5Jcdt1X */            b[i][j]=0;
/* 9usGcbkDP ily traian Um5Jcdt1X */            i=i+2*dl[d];
/* 9usGcbkDP ily traian Um5Jcdt1X */            j=j+2*dc[d];
/* 9usGcbkDP ily traian Um5Jcdt1X */           }
/* 9usGcbkDP ily traian Um5Jcdt1X */     }
/* 9usGcbkDP ily traian Um5Jcdt1X */       nrp=0;
/* 9usGcbkDP ily traian Um5Jcdt1X */       for (ii=1;ii<=m;ii++)
/* 9usGcbkDP ily traian Um5Jcdt1X */        for (jj=1;jj<=n;jj++)
/* 9usGcbkDP ily traian Um5Jcdt1X */          if (b[ii][jj]==1)
/* 9usGcbkDP ily traian Um5Jcdt1X */             nrp=nrp+1;
/* 9usGcbkDP ily traian Um5Jcdt1X */        if (nrp<minn)
/* 9usGcbkDP ily traian Um5Jcdt1X */               {
/* 9usGcbkDP ily traian Um5Jcdt1X */                minn=nrp;
/* 9usGcbkDP ily traian Um5Jcdt1X */                for (p1=1;p1<=m;p1++)
/* 9usGcbkDP ily traian Um5Jcdt1X */                  for (q1=1;q1<=n;q1++)
/* 9usGcbkDP ily traian Um5Jcdt1X */                     c[p1][q1]=b[p1][q1];
/* 9usGcbkDP ily traian Um5Jcdt1X */ 
/* 9usGcbkDP ily traian Um5Jcdt1X */                piatra=p;
/* 9usGcbkDP ily traian Um5Jcdt1X */               }
/* 9usGcbkDP ily traian Um5Jcdt1X */     }
/* 9usGcbkDP ily traian Um5Jcdt1X */    g<<piatra<<endl<<minn<<endl;
/* 9usGcbkDP ily traian Um5Jcdt1X */    for (i=1;i<=m;i++)
/* 9usGcbkDP ily traian Um5Jcdt1X */     for (j=1;j<=n;j++)
/* 9usGcbkDP ily traian Um5Jcdt1X */      if (c[i][j]==1)
/* 9usGcbkDP ily traian Um5Jcdt1X */        g<<i<<" "<<j<<endl;
/* 9usGcbkDP ily traian Um5Jcdt1X */     return 0;
/* 9usGcbkDP ily traian Um5Jcdt1X */ }