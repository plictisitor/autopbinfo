/* 4N06bZhUt ily traian LqPUfX9tq */ # include <iostream>
/* 4N06bZhUt ily traian LqPUfX9tq */ # include <fstream>
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */ # define MAX_X 100000
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */ using namespace std;
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */ ifstream fin("maraton.in");
/* 4N06bZhUt ily traian LqPUfX9tq */ ofstream fout("maraton.out");
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */ int f[MAX_X + 5];
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */ int main() 
/* 4N06bZhUt ily traian LqPUfX9tq */ {
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     int N , Q , x , y , q , i;
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     fin >> N;
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     for ( i = 0; i < N; i ++ ) 
/* 4N06bZhUt ily traian LqPUfX9tq */     {
/* 4N06bZhUt ily traian LqPUfX9tq */         fin >> x >> y;
/* 4N06bZhUt ily traian LqPUfX9tq */         f[x / y + ( x % y > 0 )] ++;
/* 4N06bZhUt ily traian LqPUfX9tq */     }
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     for ( i = 1; i <= MAX_X; i ++ )
/* 4N06bZhUt ily traian LqPUfX9tq */         f[i] += f[i - 1];
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     fin >> Q;
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     for ( i = 0; i < Q; i ++ ) 
/* 4N06bZhUt ily traian LqPUfX9tq */     {
/* 4N06bZhUt ily traian LqPUfX9tq */         fin >> q;
/* 4N06bZhUt ily traian LqPUfX9tq */         fout << f[q] << '\n';
/* 4N06bZhUt ily traian LqPUfX9tq */     }
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     fin.close();
/* 4N06bZhUt ily traian LqPUfX9tq */     fout.close();
/* 4N06bZhUt ily traian LqPUfX9tq */ 
/* 4N06bZhUt ily traian LqPUfX9tq */     return 0;
/* 4N06bZhUt ily traian LqPUfX9tq */ }