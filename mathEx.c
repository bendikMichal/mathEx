
# include <math.h>

# include "mathEx.h"

float getLinearY(linearEq *eq) {
  return eq->a * eq->x + eq->b;
}

quadraticResult getQuadraticY(quadraticEq *eq) {
  float D = pow(eq->b, 2) - 4 * eq->a * eq->c;
  quadraticResult res = {
    .x1 = (-eq->b + sqrt(D)) / (2 * eq->a),
    .x2 = (-eq->b - sqrt(D)) / (2 * eq->a),
  };
  return res;
}
