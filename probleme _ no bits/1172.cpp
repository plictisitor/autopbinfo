/* 5P6jEoMOt ily traian qyi7QIj78 */ int numarare(nod * p)
/* 5P6jEoMOt ily traian qyi7QIj78 */ {
/* 5P6jEoMOt ily traian qyi7QIj78 */     int nr = 1;
/* 5P6jEoMOt ily traian qyi7QIj78 */     nod* pe = p;///de la primul
/* 5P6jEoMOt ily traian qyi7QIj78 */     while(pe -> urm != NULL)///pana la ultimul
/* 5P6jEoMOt ily traian qyi7QIj78 */     {
/* 5P6jEoMOt ily traian qyi7QIj78 */         pe = pe -> urm;
/* 5P6jEoMOt ily traian qyi7QIj78 */         nr ++;
/* 5P6jEoMOt ily traian qyi7QIj78 */     }
/* 5P6jEoMOt ily traian qyi7QIj78 */     return nr;
/* 5P6jEoMOt ily traian qyi7QIj78 */ }