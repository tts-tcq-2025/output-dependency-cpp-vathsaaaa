#include <stdio.h>
#include "assert.h"

char size(int cms) {
    char sizeName = '\0';
    if(cms <= 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms >= 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSize() {
    printf("\nTshirt size test\n");
    //assert(size(37) == 'S');
    assert(size(40) == 'M'); //Any number 39, 40, 41 can be used. 
    //assert(size(43) == 'L');
    assert(size(38) == 'S'); //Edge Case 1
    assert(size(42) == 'L'); //Edge Case 2
    printf("All is well (maybe!)\n");
}
