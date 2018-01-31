    #include<stdio.h>
    int main(){
        int n, b;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&b);
            if(b>10) printf("%d 10\n", b-10);
            else printf("0 %d\n", b);
        }
        return 0 ;
    }
