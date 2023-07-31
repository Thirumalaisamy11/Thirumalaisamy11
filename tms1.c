#include <stdio.h>
int main() {
    int t,s,v;

    for(t=0; t<=7; t++) {
                           //outer for row
       for(s=7; s>t; s--) {
          printf("   ");

 }
        for(v=0; v<t; v++){
           printf(" * ");
}

printf("\n");
}
return 0;

}

