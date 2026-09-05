#include <stdio.h>
int power(int a,int b);
int main(){

    printf("%d\n",power(2,8));



    return 0;

}
int power(int a,int b){
    int result =1;
    for (int i =0;i<b;i++){
        result=result*a;

    }
    return result;
}