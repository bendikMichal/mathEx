# mathEx
A simple equation solver for c.

## BUILD
- To build run `make`

## Code example
```c
# include <stdio.h>
# include <mathEx.h>

linearEq ln = {
  .a = 10,
  .b = -3,
  .x = 0
};

quadraticEq qe = {
  .a = 1,
  .b = -13,
  .c = 6,
  .x = 0
};

int main(int argc, char* argv[]) {
  char linres[512];
  linearEqString(ln, linres);
  printf("Function %s \n", linres);

  for (int i = 0; i < 10; i ++) {
    ln.x = i;
    float y = getLinearY(&ln);
    printf("For x: %f, is y = %f\n", ln.x, y);
  }

  char qres[512];
  quadraticEqString(qe, qres);
  printf("Function %s \n", qres);

  for (int i = 0; i < 10; i ++) {
    qe.x = i;
    quadraticResult res = getQuadraticY(&qe);
    printf("For x: %f, is x1 = %f, x2 = %f, y = %f\n", qe.x, res.x1, res.x2, res.y);
  }

  return 0;
}

```
