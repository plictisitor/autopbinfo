/* 48ITAOIDB ily traian 07TziLmhz */ #include<fstream>
/* 48ITAOIDB ily traian 07TziLmhz */ using namespace std;
/* 48ITAOIDB ily traian 07TziLmhz */ ifstream fin("acoperire1.in");
/* 48ITAOIDB ily traian 07TziLmhz */ ofstream fout("acoperire1.out");
/* 48ITAOIDB ily traian 07TziLmhz */ int n,k,x[210][210],u,v,
/* 48ITAOIDB ily traian 07TziLmhz */ C[6][6]={
/* 48ITAOIDB ily traian 07TziLmhz */     {0,1,1,1,2,0},
/* 48ITAOIDB ily traian 07TziLmhz */     {3,3,3,1,2,4},
/* 48ITAOIDB ily traian 07TziLmhz */     {5,5,3,2,2,4},
/* 48ITAOIDB ily traian 07TziLmhz */     {5,6,6,7,4,4},
/* 48ITAOIDB ily traian 07TziLmhz */     {5,6,8,7,7,7},
/* 48ITAOIDB ily traian 07TziLmhz */     {0,6,8,8,8,0}},
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */ D[6][6]={
/* 48ITAOIDB ily traian 07TziLmhz */     {0,0,1,1,1,2},
/* 48ITAOIDB ily traian 07TziLmhz */     {0,3,1,2,2,2},
/* 48ITAOIDB ily traian 07TziLmhz */     {4,3,3,3,5,5},
/* 48ITAOIDB ily traian 07TziLmhz */     {4,4,4,6,6,5},
/* 48ITAOIDB ily traian 07TziLmhz */     {7,7,7,8,6,5},
/* 48ITAOIDB ily traian 07TziLmhz */     {7,8,8,8,6,0}},
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */ O[4][5]={
/* 48ITAOIDB ily traian 07TziLmhz */     {1,1,1,2,0},
/* 48ITAOIDB ily traian 07TziLmhz */     {0,3,1,2,4},
/* 48ITAOIDB ily traian 07TziLmhz */     {0,3,2,2,4},
/* 48ITAOIDB ily traian 07TziLmhz */     {0,3,3,4,4}},
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */ V[5][4]={
/* 48ITAOIDB ily traian 07TziLmhz */     {1,0,0,0},
/* 48ITAOIDB ily traian 07TziLmhz */     {1,2,2,2},
/* 48ITAOIDB ily traian 07TziLmhz */     {1,1,3,2},
/* 48ITAOIDB ily traian 07TziLmhz */     {3,3,3,4},
/* 48ITAOIDB ily traian 07TziLmhz */     {0,4,4,4}},
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */ R[4][4]={
/* 48ITAOIDB ily traian 07TziLmhz */     {1,1,1,2},
/* 48ITAOIDB ily traian 07TziLmhz */     {1,2,2,2},
/* 48ITAOIDB ily traian 07TziLmhz */     {3,3,3,4},
/* 48ITAOIDB ily traian 07TziLmhz */     {3,4,4,4}};
/* 48ITAOIDB ily traian 07TziLmhz */ 
/* 48ITAOIDB ily traian 07TziLmhz */ void COLT(int,int),DIAG(int,int),ORIZ(int,int),VERT(int,int),REST(int,int);
/* 48ITAOIDB ily traian 07TziLmhz */ int main()
/* 48ITAOIDB ily traian 07TziLmhz */ {
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */     int i,j;
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */     fin >> n;
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */     if(n%4!=2)
/* 48ITAOIDB ily traian 07TziLmhz */     {
/* 48ITAOIDB ily traian 07TziLmhz */         fout << -1;
/* 48ITAOIDB ily traian 07TziLmhz */         return 0;
/* 48ITAOIDB ily traian 07TziLmhz */     }
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */     COLT(1,1);
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */     for(i=5;i<n-1;i+=4)
/* 48ITAOIDB ily traian 07TziLmhz */         DIAG(i,i);
/* 48ITAOIDB ily traian 07TziLmhz */     for(j=6;j<n;j+=4)
/* 48ITAOIDB ily traian 07TziLmhz */         ORIZ(1,j);
/* 48ITAOIDB ily traian 07TziLmhz */     for(i=6;i<n;i+=4)
/* 48ITAOIDB ily traian 07TziLmhz */         VERT(i,1);
/* 48ITAOIDB ily traian 07TziLmhz */     for(i=2;i<n;i++)
/* 48ITAOIDB ily traian 07TziLmhz */         for(j=2;j<n;j++)
/* 48ITAOIDB ily traian 07TziLmhz */             if(!x[i][j])
/* 48ITAOIDB ily traian 07TziLmhz */                 REST(i,j);
/* 48ITAOIDB ily traian 07TziLmhz */     for(i=1;i<=n;i++)
/* 48ITAOIDB ily traian 07TziLmhz */     {
/* 48ITAOIDB ily traian 07TziLmhz */         for(j=1;j<n;j++)
/* 48ITAOIDB ily traian 07TziLmhz */             fout << x[i][j] << " ";
/* 48ITAOIDB ily traian 07TziLmhz */         fout << x[i][j] << endl;
/* 48ITAOIDB ily traian 07TziLmhz */     }
/* 48ITAOIDB ily traian 07TziLmhz */     
/* 48ITAOIDB ily traian 07TziLmhz */     return 0;
/* 48ITAOIDB ily traian 07TziLmhz */ 
/* 48ITAOIDB ily traian 07TziLmhz */ }
/* 48ITAOIDB ily traian 07TziLmhz */ 
/* 48ITAOIDB ily traian 07TziLmhz */ void COLT(int i,int j)
/* 48ITAOIDB ily traian 07TziLmhz */ {
/* 48ITAOIDB ily traian 07TziLmhz */     for(u=0;u<6;u++)
/* 48ITAOIDB ily traian 07TziLmhz */         for(v=0;v<6;v++)
/* 48ITAOIDB ily traian 07TziLmhz */             if(C[u][v])
/* 48ITAOIDB ily traian 07TziLmhz */                 x[i+u][j+v]=k+C[u][v];
/* 48ITAOIDB ily traian 07TziLmhz */         k+=8;
/* 48ITAOIDB ily traian 07TziLmhz */ }
/* 48ITAOIDB ily traian 07TziLmhz */ void DIAG(int i,int j)
/* 48ITAOIDB ily traian 07TziLmhz */ {
/* 48ITAOIDB ily traian 07TziLmhz */     for(u=0;u<6;u++)
/* 48ITAOIDB ily traian 07TziLmhz */         for(v=0;v<6;v++)
/* 48ITAOIDB ily traian 07TziLmhz */             if(D[u][v])
/* 48ITAOIDB ily traian 07TziLmhz */                 x[i+u][j+v]=k+D[u][v];
/* 48ITAOIDB ily traian 07TziLmhz */         k+=8;
/* 48ITAOIDB ily traian 07TziLmhz */ }
/* 48ITAOIDB ily traian 07TziLmhz */ void ORIZ(int i,int j)
/* 48ITAOIDB ily traian 07TziLmhz */ {
/* 48ITAOIDB ily traian 07TziLmhz */     for(u=0;u<4;u++)
/* 48ITAOIDB ily traian 07TziLmhz */         for(v=0;v<5;v++)
/* 48ITAOIDB ily traian 07TziLmhz */             if(O[u][v])
/* 48ITAOIDB ily traian 07TziLmhz */                 x[i+u][j+v]=k+O[u][v];
/* 48ITAOIDB ily traian 07TziLmhz */         k+=4;
/* 48ITAOIDB ily traian 07TziLmhz */ }
/* 48ITAOIDB ily traian 07TziLmhz */ void VERT(int i,int j)
/* 48ITAOIDB ily traian 07TziLmhz */ {
/* 48ITAOIDB ily traian 07TziLmhz */     for(u=0;u<5;u++)
/* 48ITAOIDB ily traian 07TziLmhz */         for(v=0;v<4;v++)
/* 48ITAOIDB ily traian 07TziLmhz */             if(V[u][v])
/* 48ITAOIDB ily traian 07TziLmhz */                 x[i+u][j+v]=k+V[u][v];
/* 48ITAOIDB ily traian 07TziLmhz */         k+=4;
/* 48ITAOIDB ily traian 07TziLmhz */ }
/* 48ITAOIDB ily traian 07TziLmhz */ void REST(int i,int j)
/* 48ITAOIDB ily traian 07TziLmhz */ {
/* 48ITAOIDB ily traian 07TziLmhz */     for(u=0;u<4;u++)
/* 48ITAOIDB ily traian 07TziLmhz */         for(v=0;v<4;v++)
/* 48ITAOIDB ily traian 07TziLmhz */             if(R[u][v])
/* 48ITAOIDB ily traian 07TziLmhz */                 x[i+u][j+v]=k+R[u][v];
/* 48ITAOIDB ily traian 07TziLmhz */         k+=4;
/* 48ITAOIDB ily traian 07TziLmhz */ }