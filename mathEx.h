
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
	float y;
} quadraticResult;

/* void solveLinearEq(linearEq *eq) */
float getLinearY(linearEq *eq);
void linearEqString(linearEq eq, char *res);

quadraticResult getQuadraticY(quadraticEq *eq);
void quadraticEqString(quadraticEq eq, char *res);

# endif
