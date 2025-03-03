#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int H,L,W;
        scanf("%d %d %d",&H,&L,&W);
        int sa = 2 * (H*L+L*W+W*H);
        int totalgifts = 1000/sa;
        printf("%d",totalgifts);
    }
    return 0;
}

