/* 6kDEOS9GR ily traian toLKjjq8x */ ///O(N*(N+M))
/* 6kDEOS9GR ily traian toLKjjq8x */ #include<fstream>
/* 6kDEOS9GR ily traian toLKjjq8x */ #include<cstdlib>
/* 6kDEOS9GR ily traian toLKjjq8x */ #include<algorithm>
/* 6kDEOS9GR ily traian toLKjjq8x */ #include<iostream>
/* 6kDEOS9GR ily traian toLKjjq8x */ using namespace std;
/* 6kDEOS9GR ily traian toLKjjq8x */ ifstream  fin("admitere.in");
/* 6kDEOS9GR ily traian toLKjjq8x */ ofstream fout("admitere.out");
/* 6kDEOS9GR ily traian toLKjjq8x */ int pozmin(int a[], int n, int v){
/* 6kDEOS9GR ily traian toLKjjq8x */     int p1=1, p2=n, mij;
/* 6kDEOS9GR ily traian toLKjjq8x */     while(p1<=p2){
/* 6kDEOS9GR ily traian toLKjjq8x */         mij=p1+(p2-p1)/2;
/* 6kDEOS9GR ily traian toLKjjq8x */         if(v>=a[mij])p1=mij+1;
/* 6kDEOS9GR ily traian toLKjjq8x */         else p2=mij-1;
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */     return p2;
/* 6kDEOS9GR ily traian toLKjjq8x */ }
/* 6kDEOS9GR ily traian toLKjjq8x */ void citire_sort(int a[], int n){
/* 6kDEOS9GR ily traian toLKjjq8x */     for(int i=1;i<=n;i++) fin>>a[i];
/* 6kDEOS9GR ily traian toLKjjq8x */     sort(a+1,a+n+1);
/* 6kDEOS9GR ily traian toLKjjq8x */ }
/* 6kDEOS9GR ily traian toLKjjq8x */ 
/* 6kDEOS9GR ily traian toLKjjq8x */ int V, M, N, u[4005], r[4005], sr[4005], su[4005], pozu[4005], upoz[4005], pozr[4005], rpoz[4005], vr, vu;
/* 6kDEOS9GR ily traian toLKjjq8x */ char  x[4005], y[4005];
/* 6kDEOS9GR ily traian toLKjjq8x */ int main(){
/* 6kDEOS9GR ily traian toLKjjq8x */     int i,j,k,l,p,rez,aux,c,cr,cu;
/* 6kDEOS9GR ily traian toLKjjq8x */     fin>>V>>N>>M;
/* 6kDEOS9GR ily traian toLKjjq8x */     citire_sort(r,M);
/* 6kDEOS9GR ily traian toLKjjq8x */     citire_sort(u,M);
/* 6kDEOS9GR ily traian toLKjjq8x */ 
/* 6kDEOS9GR ily traian toLKjjq8x */     vr=2000000000; vu=2000000000;
/* 6kDEOS9GR ily traian toLKjjq8x */     for(i=1;i<=N;i++){ fin>>sr[i]>>su[i];
/* 6kDEOS9GR ily traian toLKjjq8x */         vr=min(vr,sr[i]); vu=min(vu,su[i]);
/* 6kDEOS9GR ily traian toLKjjq8x */         pozu[i]=i; pozr[i]=i;
/* 6kDEOS9GR ily traian toLKjjq8x */         x[i]='X'; y[i]='X';
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */ 
/* 6kDEOS9GR ily traian toLKjjq8x */     for(i=1;i<=N-1;i++)
/* 6kDEOS9GR ily traian toLKjjq8x */         for(j=i+1;j<=N;j++)
/* 6kDEOS9GR ily traian toLKjjq8x */             if(sr[pozr[i]]>sr[pozr[j]]){
/* 6kDEOS9GR ily traian toLKjjq8x */                 aux=pozr[i]; pozr[i]=pozr[j]; pozr[j]=aux;
/* 6kDEOS9GR ily traian toLKjjq8x */             }
/* 6kDEOS9GR ily traian toLKjjq8x */     ///for(i=1;i<=N;i++)   rpoz[pozr[i]]=i;
/* 6kDEOS9GR ily traian toLKjjq8x */ 
/* 6kDEOS9GR ily traian toLKjjq8x */     for(i=1;i<=N-1;i++)
/* 6kDEOS9GR ily traian toLKjjq8x */         for(j=i+1;j<=N;j++)
/* 6kDEOS9GR ily traian toLKjjq8x */             if(su[pozu[i]]>su[pozu[j]]){
/* 6kDEOS9GR ily traian toLKjjq8x */                 aux=pozu[i]; pozu[i]=pozu[j]; pozu[j]=aux;
/* 6kDEOS9GR ily traian toLKjjq8x */             }
/* 6kDEOS9GR ily traian toLKjjq8x */     for(i=1;i<=N;i++)   upoz[pozu[i]]=i;
/* 6kDEOS9GR ily traian toLKjjq8x */     for(i=1;i<=N;i++)y[i]='X';
/* 6kDEOS9GR ily traian toLKjjq8x */     i=N; j=M; k=0; cr=0;
/* 6kDEOS9GR ily traian toLKjjq8x */     pozr[0]=0; sr[0]=0;
/* 6kDEOS9GR ily traian toLKjjq8x */     r[0]=0;
/* 6kDEOS9GR ily traian toLKjjq8x */     for(k=M;k>=1;k--){
/* 6kDEOS9GR ily traian toLKjjq8x */         if(sr[pozr[i]]>r[j]){
/* 6kDEOS9GR ily traian toLKjjq8x */             y[pozr[i]]='R';
/* 6kDEOS9GR ily traian toLKjjq8x */             cr++; i--;
/* 6kDEOS9GR ily traian toLKjjq8x */         }
/* 6kDEOS9GR ily traian toLKjjq8x */         else{
/* 6kDEOS9GR ily traian toLKjjq8x */             j--;
/* 6kDEOS9GR ily traian toLKjjq8x */         }
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */     rez=cr;
/* 6kDEOS9GR ily traian toLKjjq8x */ 
/* 6kDEOS9GR ily traian toLKjjq8x */     for(i=1;i<=N;i++)x[i]='X';
/* 6kDEOS9GR ily traian toLKjjq8x */     i=N; j=M; k=0; cu=0;
/* 6kDEOS9GR ily traian toLKjjq8x */     pozu[0]=0; su[0]=0;
/* 6kDEOS9GR ily traian toLKjjq8x */     u[0]=0;
/* 6kDEOS9GR ily traian toLKjjq8x */     for(k=M;k>=1;k--){
/* 6kDEOS9GR ily traian toLKjjq8x */         if(su[pozu[i]]>u[j]){
/* 6kDEOS9GR ily traian toLKjjq8x */             x[pozu[i]]='U';
/* 6kDEOS9GR ily traian toLKjjq8x */             cu++; i--;
/* 6kDEOS9GR ily traian toLKjjq8x */         }
/* 6kDEOS9GR ily traian toLKjjq8x */         else{
/* 6kDEOS9GR ily traian toLKjjq8x */             j--;
/* 6kDEOS9GR ily traian toLKjjq8x */         }
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */     if(cu>rez){
/* 6kDEOS9GR ily traian toLKjjq8x */         rez=cu;
/* 6kDEOS9GR ily traian toLKjjq8x */         for(i=1;i<=N;i++)y[i]=x[i];
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */     if(V==1){
/* 6kDEOS9GR ily traian toLKjjq8x */         fout<<rez<<"\n";
/* 6kDEOS9GR ily traian toLKjjq8x */         fout<<y+1;
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */ 
/* 6kDEOS9GR ily traian toLKjjq8x */     for(i=1;i<=N;i++){///O(N)
/* 6kDEOS9GR ily traian toLKjjq8x */         p=pozmin(u,M,su[i]);///log(M)
/* 6kDEOS9GR ily traian toLKjjq8x */         if(p>=1){
/* 6kDEOS9GR ily traian toLKjjq8x */             for(j=1;j<=N;j++)x[j]='X';///O(N)
/* 6kDEOS9GR ily traian toLKjjq8x */             c=1;    x[i]='U';
/* 6kDEOS9GR ily traian toLKjjq8x */             for(j=1;j<=N;j++)///O(N)
/* 6kDEOS9GR ily traian toLKjjq8x */                 if(upoz[pozr[j]]>upoz[i] && c<p){ x[pozr[j]]='U'; c++;}
/* 6kDEOS9GR ily traian toLKjjq8x */             l=N; j=M; k=0;
/* 6kDEOS9GR ily traian toLKjjq8x */             pozr[0]=0; sr[0]=0;
/* 6kDEOS9GR ily traian toLKjjq8x */             r[0]=0;
/* 6kDEOS9GR ily traian toLKjjq8x */             for(k=M;k>=1;k--){///O(M)
/* 6kDEOS9GR ily traian toLKjjq8x */                 while(l>0 && x[pozr[l]]!='X')l--;
/* 6kDEOS9GR ily traian toLKjjq8x */                 if(sr[pozr[l]]>r[j]){
/* 6kDEOS9GR ily traian toLKjjq8x */                     x[pozr[l]]='R';
/* 6kDEOS9GR ily traian toLKjjq8x */                     c++; l--;
/* 6kDEOS9GR ily traian toLKjjq8x */                 }
/* 6kDEOS9GR ily traian toLKjjq8x */                 else{
/* 6kDEOS9GR ily traian toLKjjq8x */                     j--;
/* 6kDEOS9GR ily traian toLKjjq8x */                 }
/* 6kDEOS9GR ily traian toLKjjq8x */             }
/* 6kDEOS9GR ily traian toLKjjq8x */             if(c>rez){
/* 6kDEOS9GR ily traian toLKjjq8x */                 rez=c;
/* 6kDEOS9GR ily traian toLKjjq8x */                 for(j=1;j<=N;j++){
/* 6kDEOS9GR ily traian toLKjjq8x */                     y[j]=x[j];
/* 6kDEOS9GR ily traian toLKjjq8x */                 }
/* 6kDEOS9GR ily traian toLKjjq8x */             }
/* 6kDEOS9GR ily traian toLKjjq8x */         }
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */     if(V==2){
/* 6kDEOS9GR ily traian toLKjjq8x */         fout<<rez<<"\n";
/* 6kDEOS9GR ily traian toLKjjq8x */         fout<<y+1;
/* 6kDEOS9GR ily traian toLKjjq8x */     }
/* 6kDEOS9GR ily traian toLKjjq8x */     fin.close();
/* 6kDEOS9GR ily traian toLKjjq8x */     fout.close();
/* 6kDEOS9GR ily traian toLKjjq8x */     return 0;
/* 6kDEOS9GR ily traian toLKjjq8x */ }