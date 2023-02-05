#include "fcgi_stdio.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    while(FCGI_Accept() >= 0) {
        printf("Content-type: text/html\r\n");
        printf("\r\n");
        printf("Hello world!<br>\r\n");
    }
    exit(0);
}
