/* uHdY1hx0g ily traian 2CZlZDqtW */ #include<fstream>
/* uHdY1hx0g ily traian 2CZlZDqtW */ #include<cstdlib>
/* uHdY1hx0g ily traian 2CZlZDqtW */ using namespace std;
/* uHdY1hx0g ily traian 2CZlZDqtW */ 
/* uHdY1hx0g ily traian 2CZlZDqtW */ ifstream cin("cartele.in");
/* uHdY1hx0g ily traian 2CZlZDqtW */ ofstream cout("cartele.out");
/* uHdY1hx0g ily traian 2CZlZDqtW */ 
/* uHdY1hx0g ily traian 2CZlZDqtW */ int main()
/* uHdY1hx0g ily traian 2CZlZDqtW */ {
/* uHdY1hx0g ily traian 2CZlZDqtW */     short int C;
/* uHdY1hx0g ily traian 2CZlZDqtW */     cin>>C;
/* uHdY1hx0g ily traian 2CZlZDqtW */     if(C==1)
/* uHdY1hx0g ily traian 2CZlZDqtW */     {
/* uHdY1hx0g ily traian 2CZlZDqtW */         int nr_Fete=0,nr_Baieti=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */         char c,c1;
/* uHdY1hx0g ily traian 2CZlZDqtW */         int nr,h,m,s;
/* uHdY1hx0g ily traian 2CZlZDqtW */         cin>>nr;
/* uHdY1hx0g ily traian 2CZlZDqtW */         for(int i=1; i<=nr; i++)
/* uHdY1hx0g ily traian 2CZlZDqtW */         {
/* uHdY1hx0g ily traian 2CZlZDqtW */             cin>>c>>c1>>h>>m>>s;
/* uHdY1hx0g ily traian 2CZlZDqtW */             if(c=='f')
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 if(c1=='e')
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Fete--;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 else
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Fete++;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */             else
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 if(c1=='e')
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Baieti--;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 else
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Baieti++;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */         }
/* uHdY1hx0g ily traian 2CZlZDqtW */         cout<<nr_Baieti<<" "<<nr_Fete;
/* uHdY1hx0g ily traian 2CZlZDqtW */     }
/* uHdY1hx0g ily traian 2CZlZDqtW */     if(C==2)
/* uHdY1hx0g ily traian 2CZlZDqtW */     {
/* uHdY1hx0g ily traian 2CZlZDqtW */         int nr_Fete=0,nr_Baieti=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */         char c,c1;
/* uHdY1hx0g ily traian 2CZlZDqtW */         int nr,s1,s2,h,m,s,timp_total=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */         cin>>nr;
/* uHdY1hx0g ily traian 2CZlZDqtW */         for(int i=1; i<=nr; i++)
/* uHdY1hx0g ily traian 2CZlZDqtW */         {
/* uHdY1hx0g ily traian 2CZlZDqtW */             cin>>c>>c1>>h>>m>>s;
/* uHdY1hx0g ily traian 2CZlZDqtW */             bool era_egal=false;
/* uHdY1hx0g ily traian 2CZlZDqtW */             if(nr_Fete!=0&&nr_Fete==nr_Baieti)
/* uHdY1hx0g ily traian 2CZlZDqtW */                 era_egal=true;
/* uHdY1hx0g ily traian 2CZlZDqtW */             if(c=='f')
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 if(c1=='e')
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Fete--;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 else
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Fete++;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */             else
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 if(c1=='e')
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Baieti--;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 else
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Baieti++;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */ 
/* uHdY1hx0g ily traian 2CZlZDqtW */             if(i==1)
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1+=h*3600;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1+=m*60;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1+=s;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */             else
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2+=h*3600;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2+=m*60;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2+=s;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 if(era_egal)
/* uHdY1hx0g ily traian 2CZlZDqtW */                     timp_total+=s2-s1;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1=s2;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */         }
/* uHdY1hx0g ily traian 2CZlZDqtW */         cout<<timp_total;
/* uHdY1hx0g ily traian 2CZlZDqtW */     }
/* uHdY1hx0g ily traian 2CZlZDqtW */     if(C==3)
/* uHdY1hx0g ily traian 2CZlZDqtW */     {
/* uHdY1hx0g ily traian 2CZlZDqtW */         int nr_Baieti=0,nr,s1=0,s2,timp_maxim=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */         char c,c1;
/* uHdY1hx0g ily traian 2CZlZDqtW */         int h,m,s;
/* uHdY1hx0g ily traian 2CZlZDqtW */         cin>>nr;
/* uHdY1hx0g ily traian 2CZlZDqtW */         for(int i=1; i<=nr; i++)
/* uHdY1hx0g ily traian 2CZlZDqtW */         {
/* uHdY1hx0g ily traian 2CZlZDqtW */             cin>>c>>c1>>h>>m>>s;
/* uHdY1hx0g ily traian 2CZlZDqtW */             bool era_impar=false;
/* uHdY1hx0g ily traian 2CZlZDqtW */             if(nr_Baieti%2==1)
/* uHdY1hx0g ily traian 2CZlZDqtW */                 era_impar=true;
/* uHdY1hx0g ily traian 2CZlZDqtW */ 
/* uHdY1hx0g ily traian 2CZlZDqtW */             if(c=='b')
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 if(c1=='e')
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Baieti--;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 else
/* uHdY1hx0g ily traian 2CZlZDqtW */                     nr_Baieti++;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */             if(nr_Baieti%2==1&&s1==0)
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1+=h*3600;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1+=m*60;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s1+=s;
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */             else
/* uHdY1hx0g ily traian 2CZlZDqtW */             {
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2+=h*3600;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2+=m*60;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 s2+=s;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 if(era_impar&&nr_Baieti%2==0)
/* uHdY1hx0g ily traian 2CZlZDqtW */                 {
/* uHdY1hx0g ily traian 2CZlZDqtW */                     if(s2-s1>timp_maxim)
/* uHdY1hx0g ily traian 2CZlZDqtW */                         timp_maxim=s2-s1;
/* uHdY1hx0g ily traian 2CZlZDqtW */                     s1=0;
/* uHdY1hx0g ily traian 2CZlZDqtW */                 }
/* uHdY1hx0g ily traian 2CZlZDqtW */             }
/* uHdY1hx0g ily traian 2CZlZDqtW */         }
/* uHdY1hx0g ily traian 2CZlZDqtW */         cout<<timp_maxim;
/* uHdY1hx0g ily traian 2CZlZDqtW */     }
/* uHdY1hx0g ily traian 2CZlZDqtW */ }