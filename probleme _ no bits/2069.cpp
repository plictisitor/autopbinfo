/* 8qHXZzP3h ily traian YgEdnMBmU */ #include<fstream>
/* 8qHXZzP3h ily traian YgEdnMBmU */ using namespace std;
/* 8qHXZzP3h ily traian YgEdnMBmU */ 
/* 8qHXZzP3h ily traian YgEdnMBmU */ ifstream  fin("roboti2.in");
/* 8qHXZzP3h ily traian YgEdnMBmU */ ofstream fout("roboti2.out");
/* 8qHXZzP3h ily traian YgEdnMBmU */ 
/* 8qHXZzP3h ily traian YgEdnMBmU */ int v, n, p[200005], q[200005], r[200005], f[200005];
/* 8qHXZzP3h ily traian YgEdnMBmU */ 
/* 8qHXZzP3h ily traian YgEdnMBmU */ int main(){
/* 8qHXZzP3h ily traian YgEdnMBmU */     int i,j,lmax,k,nr,m,M;
/* 8qHXZzP3h ily traian YgEdnMBmU */     fin>>v>>n;
/* 8qHXZzP3h ily traian YgEdnMBmU */     for(i=1;i<=n;i++) fin>>p[i];
/* 8qHXZzP3h ily traian YgEdnMBmU */     if(v==1){
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=1;i<=n;i++) p[n+i]=p[i];
/* 8qHXZzP3h ily traian YgEdnMBmU */         lmax=0; j=1;
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=2;i<=2*n;i++)
/* 8qHXZzP3h ily traian YgEdnMBmU */             if(p[i-1]>=p[i]){
/* 8qHXZzP3h ily traian YgEdnMBmU */                 lmax=max(i-j,lmax);
/* 8qHXZzP3h ily traian YgEdnMBmU */                 j=i;
/* 8qHXZzP3h ily traian YgEdnMBmU */             }
/* 8qHXZzP3h ily traian YgEdnMBmU */         fout<<lmax;
/* 8qHXZzP3h ily traian YgEdnMBmU */     }
/* 8qHXZzP3h ily traian YgEdnMBmU */     else{
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=1;i<=1000;i++)q[i]=0;
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=1;i<=n;i++)q[p[i]]++;
/* 8qHXZzP3h ily traian YgEdnMBmU */         nr=0;
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=1;i<=1000;i++){
/* 8qHXZzP3h ily traian YgEdnMBmU */             if(q[i]>0){
/* 8qHXZzP3h ily traian YgEdnMBmU */                 nr++; f[nr]=q[i]; r[nr]=i;
/* 8qHXZzP3h ily traian YgEdnMBmU */                 q[i]=0;
/* 8qHXZzP3h ily traian YgEdnMBmU */             }
/* 8qHXZzP3h ily traian YgEdnMBmU */         }
/* 8qHXZzP3h ily traian YgEdnMBmU */         m=n+1;
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=1;i<=f[nr];i++)  q[--m]=r[nr];
/* 8qHXZzP3h ily traian YgEdnMBmU */         M=n;
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=nr-1;i>=2;i--){
/* 8qHXZzP3h ily traian YgEdnMBmU */             if(f[i]>1){
/* 8qHXZzP3h ily traian YgEdnMBmU */                 q[++M]=r[i];
/* 8qHXZzP3h ily traian YgEdnMBmU */                 for(j=1;j<f[i];j++)  q[--m]=r[i];
/* 8qHXZzP3h ily traian YgEdnMBmU */             }
/* 8qHXZzP3h ily traian YgEdnMBmU */             else{
/* 8qHXZzP3h ily traian YgEdnMBmU */                 j=i;
/* 8qHXZzP3h ily traian YgEdnMBmU */                 while(j-1>=2 && f[j-1]==1) j--;
/* 8qHXZzP3h ily traian YgEdnMBmU */                 if(q[m]==q[M]){
/* 8qHXZzP3h ily traian YgEdnMBmU */                     if((i-j+1)%2==1) q[--m]=r[i--];
/* 8qHXZzP3h ily traian YgEdnMBmU */                     for(k=i;k>=j;k=k-2){
/* 8qHXZzP3h ily traian YgEdnMBmU */                         q[++M]=r[k];
/* 8qHXZzP3h ily traian YgEdnMBmU */                         q[--m]=r[k-1];
/* 8qHXZzP3h ily traian YgEdnMBmU */                     }
/* 8qHXZzP3h ily traian YgEdnMBmU */                 }
/* 8qHXZzP3h ily traian YgEdnMBmU */                 else{
/* 8qHXZzP3h ily traian YgEdnMBmU */                     if(q[m]>q[M]){
/* 8qHXZzP3h ily traian YgEdnMBmU */                         for(k=0;k<=i-j;k++){
/* 8qHXZzP3h ily traian YgEdnMBmU */                             if(k%2==0) q[--m]=r[i+k];
/* 8qHXZzP3h ily traian YgEdnMBmU */                             else  q[++M]=r[i+k];
/* 8qHXZzP3h ily traian YgEdnMBmU */                         }
/* 8qHXZzP3h ily traian YgEdnMBmU */                     }
/* 8qHXZzP3h ily traian YgEdnMBmU */                     else{
/* 8qHXZzP3h ily traian YgEdnMBmU */                         for(k=0;k<=i-j;k++){
/* 8qHXZzP3h ily traian YgEdnMBmU */                             if(k%2==1)  q[--m]=r[i+k];
/* 8qHXZzP3h ily traian YgEdnMBmU */                             else  q[++M]=r[i+k];
/* 8qHXZzP3h ily traian YgEdnMBmU */                         }
/* 8qHXZzP3h ily traian YgEdnMBmU */                     }
/* 8qHXZzP3h ily traian YgEdnMBmU */                 }
/* 8qHXZzP3h ily traian YgEdnMBmU */                 i=j;
/* 8qHXZzP3h ily traian YgEdnMBmU */             }
/* 8qHXZzP3h ily traian YgEdnMBmU */         }
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=1;i<=f[1];i++)  q[--m]=r[1];
/* 8qHXZzP3h ily traian YgEdnMBmU */         for(i=m;i<=M;i++)  fout<<q[i]<<" ";
/* 8qHXZzP3h ily traian YgEdnMBmU */     }
/* 8qHXZzP3h ily traian YgEdnMBmU */     fout.close();
/* 8qHXZzP3h ily traian YgEdnMBmU */     return 0;
/* 8qHXZzP3h ily traian YgEdnMBmU */ }