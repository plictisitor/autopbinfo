/* xNjQHqYHE ily traian cCIACzOLI */ #include    <iostream>
/* xNjQHqYHE ily traian cCIACzOLI */ #include    <fstream>
/* xNjQHqYHE ily traian cCIACzOLI */ #include    <algorithm>
/* xNjQHqYHE ily traian cCIACzOLI */ 
/* xNjQHqYHE ily traian cCIACzOLI */ using namespace std;
/* xNjQHqYHE ily traian cCIACzOLI */ 
/* xNjQHqYHE ily traian cCIACzOLI */ ifstream fin("smartphone.in");
/* xNjQHqYHE ily traian cCIACzOLI */ ofstream fout("smartphone.out");
/* xNjQHqYHE ily traian cCIACzOLI */ 
/* xNjQHqYHE ily traian cCIACzOLI */ int main()
/* xNjQHqYHE ily traian cCIACzOLI */ {
/* xNjQHqYHE ily traian cCIACzOLI */     int V[10000];
/* xNjQHqYHE ily traian cCIACzOLI */     int cerinta, nr;
/* xNjQHqYHE ily traian cCIACzOLI */     fin >> cerinta >> nr;
/* xNjQHqYHE ily traian cCIACzOLI */     for(int i = 0 ; i < nr; i++)
/* xNjQHqYHE ily traian cCIACzOLI */         fin >> V[i];
/* xNjQHqYHE ily traian cCIACzOLI */     sort(V, V + nr);
/* xNjQHqYHE ily traian cCIACzOLI */ 
/* xNjQHqYHE ily traian cCIACzOLI */     if(cerinta == 1)
/* xNjQHqYHE ily traian cCIACzOLI */         fout << V[nr - 1];
/* xNjQHqYHE ily traian cCIACzOLI */     else
/* xNjQHqYHE ily traian cCIACzOLI */         fout << V[nr - 2];
/* xNjQHqYHE ily traian cCIACzOLI */ 
/* xNjQHqYHE ily traian cCIACzOLI */     return 0;
/* xNjQHqYHE ily traian cCIACzOLI */ }