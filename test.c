#include <stdio.h>
#include "cvector.h"

int main(){
floatv(myvector);
for(int i = 0; i<64; i++)
	floatv_push(myvector, i);
for(int i = 0; i<64; i++)
	printf("%f\n", floatv_value(myvector, i));
floatv_pop(myvector);
floatv_push(myvector, 102.2);
floatv_push(myvector, 101);
printf("%f\n", floatv_value(myvector, 63));
printf("%d\n", floatv_size(myvector));
printf("%d\n", floatv_memory(myvector));
freev(myvector);
return 0;
}
