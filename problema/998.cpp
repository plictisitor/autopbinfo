/* w6PaDJ3gU ily traian uaj7bahoV */ #include <bits/stdc++.h>/* w6PaDJ3gU ily traian uaj7bahoV */ using namespace std;/* w6PaDJ3gU ily traian uaj7bahoV */ ifstream fin("matrice6.in");/* w6PaDJ3gU ily traian uaj7bahoV */ ofstream fout("matrice6.out");/* w6PaDJ3gU ily traian uaj7bahoV */ int main()/* w6PaDJ3gU ily traian uaj7bahoV */ {/* w6PaDJ3gU ily traian uaj7bahoV */     int n ,  maxi = -1 , mini = 1000000001 , a[101][101];/* w6PaDJ3gU ily traian uaj7bahoV */     fin >> n;/* w6PaDJ3gU ily traian uaj7bahoV */     for(int i = 0  ; i < n ;++i)/* w6PaDJ3gU ily traian uaj7bahoV */     {/* w6PaDJ3gU ily traian uaj7bahoV */         for(int j = 0 ; j < n ;++j)/* w6PaDJ3gU ily traian uaj7bahoV */         {/* w6PaDJ3gU ily traian uaj7bahoV */             fin >> a[i][j];/* w6PaDJ3gU ily traian uaj7bahoV */             if(a[i][j] > maxi) maxi = a[i][j];/* w6PaDJ3gU ily traian uaj7bahoV */             if(a[i][j] < mini) mini = a[i][j];/* w6PaDJ3gU ily traian uaj7bahoV */         }/* w6PaDJ3gU ily traian uaj7bahoV */     }/* w6PaDJ3gU ily traian uaj7bahoV */     for(int i = 0  ; i < n ;++i)/* w6PaDJ3gU ily traian uaj7bahoV */     {/* w6PaDJ3gU ily traian uaj7bahoV */         int c = 0;/* w6PaDJ3gU ily traian uaj7bahoV */         for(int j = 0 ; j < n ;++j)/* w6PaDJ3gU ily traian uaj7bahoV */         {/* w6PaDJ3gU ily traian uaj7bahoV */             if(a[i][j] == maxi) c++;/* w6PaDJ3gU ily traian uaj7bahoV */         }/* w6PaDJ3gU ily traian uaj7bahoV */         if(c != 0) for(int j = 0 ; j < n ;++j)/* w6PaDJ3gU ily traian uaj7bahoV */             fout << a[i][j] + mini << " ";/* w6PaDJ3gU ily traian uaj7bahoV */         else for(int j = 0 ; j < n ;++j)/* w6PaDJ3gU ily traian uaj7bahoV */             fout << a[i][j] << " ";/* w6PaDJ3gU ily traian uaj7bahoV */             fout << endl;/* w6PaDJ3gU ily traian uaj7bahoV */     }/* w6PaDJ3gU ily traian uaj7bahoV */     return 0;/* w6PaDJ3gU ily traian uaj7bahoV */ /* w6PaDJ3gU ily traian uaj7bahoV */ }