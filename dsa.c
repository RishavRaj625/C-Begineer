#include <stdio.h>
#include <stdlib.h>

typedef struct {float coeff; int power;} term;
term *getarray(int);
void fillpolynomial(term *, term *, term **, term **);
void printpolynomial(term*, term*);
void addpolynomial(term *, term *, term *, term *, term *, term **, term **);
int compare(term*, term*);
int main(void) {
		term *a; int n; term *fp, *lp, *fq, *lq, *fr, *lr;
    	  		
  		printf("Give me size of the array\n"); scanf("%d", &n); a = getarray(n); printf("%d\n\n", n);
    	printf("Give me the 1st polynomial in descending order of power, term by term, coeff and power\n");
    	fp = a; fillpolynomial(a, fp, &fp, &lp);
    	printf("1st polynomial: "); printpolynomial(fp, lp); 
    	printf("Give me the 2nd polynomial in descending order of power, term by term, coeff and power\n");
    	fq = lp + 1; fillpolynomial(a, fq, &fq, &lq);
    	printf("2nd polynomial: "); printpolynomial(fq, lq);
    	fr = lq + 1; addpolynomial(fp, lp, fq, lq, fr, &fr, &lr);
    	printf("Sum: ");printpolynomial(fr, lr);
    	return 0;
}
term *getarray(int m) {term *a; return a = malloc(m * sizeof(term));}
void fillpolynomial(term *array, term *p, term **f, term **l){
     float c; int e;
     *f = p;
     scanf("%f", &c); printf("%.000000f ", c);
     while (c != -9999) {
     		p->coeff = c; scanf("%d", &e); printf("%d ", e); p->power = e; *l = p; 
     		scanf("%f", &c); printf("%.000000f ", c); p = p + 1;
     };
     printf("\n");
}
void printpolynomial(term *f, term *l) {
  		term *p;	
  		p = f;
  		if (p->coeff != 1 && p->coeff != -1) printf("%.000000f", p->coeff); 
  				if (p->coeff == -1) printf("-");
  				if (p->power) printf("x**%d ", p->power);
  		for (p = f + 1; p < l; p = p + 1) {
  				if (p->coeff != 1 && p->coeff != -1) printf("+ %.000000f", p->coeff); 
  				if (p->coeff == -1) printf("- ");
  				if (p->power) printf("x**%d ", p->power);
    	};
    	if (p->coeff != 1 && p->coeff != -1) printf("+ %.000000f", p->coeff); 
    	if (p->coeff == -1) printf("- ");
    	if (p->power) printf("x**%d", p->power);
    	printf("\n\n");
}
void addpolynomial(term *f1, term *l1, term *f2, term *l2, term *f, term **f3, term **l3){
		*f3 = f;
	  	while (f1 <= l1 && f2 <= l2) {
		  	switch (compare(f1, f2)) {
		  			case -1: f->coeff = f2->coeff; f->power = f2->power; 
		  						f2 = f2 + 1; *l3 = f; f = f + 1; break;
		  			case 0: f->coeff = f1->coeff + f2->coeff; f->power = f1->power; 
		  						f1 =f1 + 1; f2 = f2 + 1; *l3 = f; f = f + 1; break;
		  			case 1: f->coeff = f1->coeff; f->power = f1->power; 
		  					f1 = f1 + 1; *l3 = f; f = f + 1;
		  	};    
		};
		for (; f1 <= l1; f1 = f1 + 1) { 
				f->coeff = f1->coeff; f->power = f1->power;
				*l3 = f; f = f + 1;
		};
		for (; f2 <= l2; f2 = f2 + 1) { 
				f->coeff = f1->coeff; f->power = f1->power;
				*l3 = f; f = f + 1;
		};				
}		  	
int compare(term *f, term *g) {
		if (f->power < g->power) return -1;
		else 
				if (f->power == g->power) return 0;
				else return 1;  
}