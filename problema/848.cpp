/* P0DAgCvxC ily traian uIBRQ9Gvh */ #include <bits/stdc++.h>/* P0DAgCvxC ily traian uIBRQ9Gvh */ /* P0DAgCvxC ily traian uIBRQ9Gvh */ using namespace std;/* P0DAgCvxC ily traian uIBRQ9Gvh */ /* P0DAgCvxC ily traian uIBRQ9Gvh */ ifstream fin("paranteze1.in");/* P0DAgCvxC ily traian uIBRQ9Gvh */ ofstream fout("paranteze1.out");/* P0DAgCvxC ily traian uIBRQ9Gvh */ /* P0DAgCvxC ily traian uIBRQ9Gvh */ int main()/* P0DAgCvxC ily traian uIBRQ9Gvh */ {/* P0DAgCvxC ily traian uIBRQ9Gvh */     int n , k = 0;/* P0DAgCvxC ily traian uIBRQ9Gvh */     char sir[300];/* P0DAgCvxC ily traian uIBRQ9Gvh */     int ok=0;/* P0DAgCvxC ily traian uIBRQ9Gvh */     fin >> n;/* P0DAgCvxC ily traian uIBRQ9Gvh */     for(int i = 0 ; i < n ; ++i)/* P0DAgCvxC ily traian uIBRQ9Gvh */     {/* P0DAgCvxC ily traian uIBRQ9Gvh */         fin >> sir;/* P0DAgCvxC ily traian uIBRQ9Gvh */         k=0;/* P0DAgCvxC ily traian uIBRQ9Gvh */         ok=1;/* P0DAgCvxC ily traian uIBRQ9Gvh */         for(int j = 0 ; j < strlen(sir) && ok ; ++j)/* P0DAgCvxC ily traian uIBRQ9Gvh */             if(sir[j]=='(')/* P0DAgCvxC ily traian uIBRQ9Gvh */                 k++;/* P0DAgCvxC ily traian uIBRQ9Gvh */             else if(sir[j]==')' && k==0)/* P0DAgCvxC ily traian uIBRQ9Gvh */                 ok=0;/* P0DAgCvxC ily traian uIBRQ9Gvh */             else/* P0DAgCvxC ily traian uIBRQ9Gvh */                 k--;/* P0DAgCvxC ily traian uIBRQ9Gvh */         if(ok && k==0)/* P0DAgCvxC ily traian uIBRQ9Gvh */             fout << 1 << endl;/* P0DAgCvxC ily traian uIBRQ9Gvh */         else/* P0DAgCvxC ily traian uIBRQ9Gvh */             fout << 0 << endl;            /* P0DAgCvxC ily traian uIBRQ9Gvh */     }/* P0DAgCvxC ily traian uIBRQ9Gvh */     return 0;/* P0DAgCvxC ily traian uIBRQ9Gvh */ }