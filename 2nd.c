#include <stdio.h>

int main() {
    int i, count_all=1, count_cricket=0;
    int cricket[4], volleyball[4], football[4];
    for(i=0; i<2; i++) {
        scanf("%d", &cricket[i]);
    }
    for(i=0; i<2; i++) {
        scanf("%d", &volleyball[i]);
    }
    for(i=0; i<2; i++) {
        scanf("%d", &football[i]);
    }
    for(i=0; i<2; i++) {
        if(volleyball[i] == football[i] && cricket[i] == football[i]) {
            count_all++;
        }
    }
    for(i=0; i<2; i++) {
        if(!((volleyball[i] == cricket[i]) || (football[i] == cricket[i]))) {
            count_cricket++;
        }
    }
    printf("%d\n%d", count_all, count_cricket);
    return 0;
}