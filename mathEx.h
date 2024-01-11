
# ifndef _MATHEX
# define _MATHEX

typedef struct linearEq {
	// ax + b
	float a;
	float b;
	float x;
} linearEq;

typedef struct quadraticEq {
	// ax^2 + bx + c
	float a;
	float b;
	float c;
	float x;
} quadraticEq;

typedef struct quadraticResult {
	float x1;
	float x2;
} quadraticResult;

/* void solveLinearEq(linearEq *eq) */
float getLinearY(linearEq *eq);
quadraticResult getQuadraticY(quadraticEq *eq);

# endif
