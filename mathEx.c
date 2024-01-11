
# include <stdio.h>
# include <math.h>

# include "mathEx.h"

float getLinearY(linearEq *eq) {
  return eq->a * eq->x + eq->b;
}

void linearEqString(linearEq eq, char *res) {
  sprintf(res, "%f * x %c %f = 0", eq.a, eq.b >= 0 ? '+' : '-', fabs(eq.b));
}

quadraticResult getQuadraticY(quadraticEq *eq) {
  float D = pow(eq->b, 2) - 4 * eq->a * eq->c;
  if (D < 0) {
    quadraticResult fail_res = {
      .x1 = NAN,
      .x2 = NAN,
      .y = NAN
    };
    return fail_res;
  }
  quadraticResult res = {
    .x1 = (-eq->b + sqrt(D)) / (2 * eq->a),
    .x2 = (-eq->b - sqrt(D)) / (2 * eq->a),
    .y = eq->a * pow(eq->x, 2) + eq->b * eq->x + eq->c
  };
  return res;
}

void quadraticEqString(quadraticEq eq, char *res) {
  sprintf(res, "%f * x^2 %c %f * x %c %f = 0", eq.a, eq.b >= 0 ? '+' : '-', fabs(eq.b), eq.c >= 0 ? '+' : '-', fabs(eq.c));
}
