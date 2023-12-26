#include <stdio.h>
int main() {
        FILE * fp;
        fp = fopen("files.txt", "w+");
        fputs("Mahindra Automotive is all set to launch the all new Mahindra Thar 5-Door next year,", fp);
        fputs("This time again they have taken a lot inspiration from Jeep Wrangler.\n", fp);
        fputs("Apart from this, XUV 300 facelift is also in the testing phase.\n", fp);
        fclose(fp);
        return (0);
    }