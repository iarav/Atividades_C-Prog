#include <stdio.h>

int main() {
    
int n, s, sub, fat1, fat2, fat3;

scanf ("%d %d", &n, &s);
sub = n - s;

for(fat1 = 1; n > 1; n = n - 1){
    fat1 = fat1 * n;
}
for(fat2 = 1; s > 1; s = s - 1){
    fat2 = fat2 * s;
}
for(fat3 = 1; sub > 1; sub = sub - 1){
    fat3 = fat3 * sub;
}

int resultado = fat1 / (fat2 * fat3);

    printf("%d\n", resultado );

return 0;
}