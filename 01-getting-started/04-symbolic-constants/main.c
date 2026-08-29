#include <stdio.h>

#define lower 0 
#define upper 300
#define step 20
int main(){
  
    for (int fahr=lower;fahr<=upper;fahr+=step){
        int c= 5*(fahr-32)/9;
        printf("     %3d°F     →    %3d°C\n", fahr, c);

    }

}