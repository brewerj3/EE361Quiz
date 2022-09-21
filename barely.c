#include <stdlib.h>
#include <stdio.h>

int R[32];  /* These are the only variables */

void main() {
    R[0] = 0;   /* This is always zero; it's read only */

/* Start of code to convert to BarelyC */
    R[1] = R[0];
    for (R[2] = R[0] + 1; R[2] < 10; R[2] = R[2] + 1) {
        if (R[2] > 3) {
            R[1] = R[1] + R[2];
        }
    }
/* End of the code to convert to BarelyC */

    printf("R[1] = %d\n",R[1]);
}
