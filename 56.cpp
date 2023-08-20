#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void recur(int x){
    printf("%d ", x);
    recur(x-1);
}

int main(){
    freopen("input.txt", "rt", stdin);
    int n;

    scanf("%d", &n);
    recur(n);
    return 0;
}