/* OjjMAR3sK ily traian 3p17mCGcM */ #include<fstream>
/* OjjMAR3sK ily traian 3p17mCGcM */ #include<iostream>
/* OjjMAR3sK ily traian 3p17mCGcM */ using namespace std;
/* OjjMAR3sK ily traian 3p17mCGcM */ ifstream  fin("ace.in");
/* OjjMAR3sK ily traian 3p17mCGcM */ ofstream fout("ace.out");
/* OjjMAR3sK ily traian 3p17mCGcM */ int P,N,M,a[1002][1002];
/* OjjMAR3sK ily traian 3p17mCGcM */ char b[1002][1002];
/* OjjMAR3sK ily traian 3p17mCGcM */ int main(){
/* OjjMAR3sK ily traian 3p17mCGcM */     int i,j,r,i1,j1,i2,j2,ii,jj,l1,k1;
/* OjjMAR3sK ily traian 3p17mCGcM */     fin>>P>>N>>M;
/* OjjMAR3sK ily traian 3p17mCGcM */     for(i=N;i>=1;i--){
/* OjjMAR3sK ily traian 3p17mCGcM */         for(j=M;j>=1;j--){
/* OjjMAR3sK ily traian 3p17mCGcM */             fin>>a[i][j];
/* OjjMAR3sK ily traian 3p17mCGcM */         }
/* OjjMAR3sK ily traian 3p17mCGcM */     }
/* OjjMAR3sK ily traian 3p17mCGcM */     if(P==1){
/* OjjMAR3sK ily traian 3p17mCGcM */         r=1;i=2;
/* OjjMAR3sK ily traian 3p17mCGcM */         for(j=i+1;j<=M;j++){
/* OjjMAR3sK ily traian 3p17mCGcM */             if(a[1][j]*(i-1)>a[1][i]*(j-1)){
/* OjjMAR3sK ily traian 3p17mCGcM */                 r++;
/* OjjMAR3sK ily traian 3p17mCGcM */                 i=j;
/* OjjMAR3sK ily traian 3p17mCGcM */             }
/* OjjMAR3sK ily traian 3p17mCGcM */         }
/* OjjMAR3sK ily traian 3p17mCGcM */         r++;j=2;
/* OjjMAR3sK ily traian 3p17mCGcM */         for(i=j+1;i<=N;i++){
/* OjjMAR3sK ily traian 3p17mCGcM */             if(a[i][1]*(j-1)>a[j][1]*(i-1)){
/* OjjMAR3sK ily traian 3p17mCGcM */                 r++;
/* OjjMAR3sK ily traian 3p17mCGcM */                 j=i;
/* OjjMAR3sK ily traian 3p17mCGcM */             }
/* OjjMAR3sK ily traian 3p17mCGcM */         }
/* OjjMAR3sK ily traian 3p17mCGcM */         fout<<r;
/* OjjMAR3sK ily traian 3p17mCGcM */     }
/* OjjMAR3sK ily traian 3p17mCGcM */     if(P==2){
/* OjjMAR3sK ily traian 3p17mCGcM */         r=0;
/* OjjMAR3sK ily traian 3p17mCGcM */         for(i=1;i<=N;i++){
/* OjjMAR3sK ily traian 3p17mCGcM */             for(j=1;j<=M;j++){
/* OjjMAR3sK ily traian 3p17mCGcM */                 if(i>1 || j>1){
/* OjjMAR3sK ily traian 3p17mCGcM */                     if(b[i][j]==0){
/* OjjMAR3sK ily traian 3p17mCGcM */                         b[i][j]=1; r++;
/* OjjMAR3sK ily traian 3p17mCGcM */                         i1=i;j1=j;
/* OjjMAR3sK ily traian 3p17mCGcM */                         ii=i;jj=j;
/* OjjMAR3sK ily traian 3p17mCGcM */                         l1=i1-1;k1=j1-1;
/* OjjMAR3sK ily traian 3p17mCGcM */                         while(ii+l1<=N && jj+k1<=M){
/* OjjMAR3sK ily traian 3p17mCGcM */                             i2=ii+l1; j2=jj+k1;
/* OjjMAR3sK ily traian 3p17mCGcM */                             long long v1=(long long)a[i2][j2]*a[i2][j2]*((i1-1)*(i1-1)+(j1-1)*(j1-1));
/* OjjMAR3sK ily traian 3p17mCGcM */                             long long v2=(long long)a[i1][j1]*a[i1][j1]*((i2-1)*(i2-1)+(j2-1)*(j2-1));
/* OjjMAR3sK ily traian 3p17mCGcM */                             if(v1>v2){
/* OjjMAR3sK ily traian 3p17mCGcM */                                 r++;
/* OjjMAR3sK ily traian 3p17mCGcM */                                 i1=i2;j1=j2;
/* OjjMAR3sK ily traian 3p17mCGcM */                                 b[i2][j2]=1;
/* OjjMAR3sK ily traian 3p17mCGcM */                             }
/* OjjMAR3sK ily traian 3p17mCGcM */                             else{
/* OjjMAR3sK ily traian 3p17mCGcM */                                 b[i2][j2]=2;
/* OjjMAR3sK ily traian 3p17mCGcM */                             }
/* OjjMAR3sK ily traian 3p17mCGcM */                             ii=i2;jj=j2;
/* OjjMAR3sK ily traian 3p17mCGcM */                         }
/* OjjMAR3sK ily traian 3p17mCGcM */                     }
/* OjjMAR3sK ily traian 3p17mCGcM */                 }
/* OjjMAR3sK ily traian 3p17mCGcM */             }
/* OjjMAR3sK ily traian 3p17mCGcM */         }
/* OjjMAR3sK ily traian 3p17mCGcM */         fout<<r;
/* OjjMAR3sK ily traian 3p17mCGcM */     }
/* OjjMAR3sK ily traian 3p17mCGcM */     fout.close();
/* OjjMAR3sK ily traian 3p17mCGcM */     return 0;
/* OjjMAR3sK ily traian 3p17mCGcM */ }