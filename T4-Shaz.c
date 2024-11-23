#include <stdio.h>
int main () {
    int i,j=100,a[100], n, Vcount1=0,Vcount2=0,Vcount3=0, Vcount4=0,large=0;
    printf("enter number of ppl");
    scanf("%d", &n);
    
    for (int i = 0 ; i < n ; i++) {
        printf("enter party number");
        scanf("%d", &a[i]);
        j++;
        printf("Your ID/Serial NO. for reference is %d.\n", j);
        
        if (a[i] == 1){
                printf("You have successfully casted your vote to the 1st party.\n\n\a");
                Vcount1++;
        } else if (a[i] == 2){
            printf("You have successfully casted your vote to the 2nd party.\n\n\a");
            Vcount2++;
        } else if (a[i] == 3){
            printf("You have successfully casted your vote to the 3rd party.\n\n\a");
            Vcount3++;
        } else if (a[i] == 4){
            printf("You have successfully casted your vote to NONE OF THE ABOVE parties.\n\n\a");
            Vcount4++;
        } else if (a[i]>=5) {
            printf("Sorry!Option to vote for %dth party doesn't exist.\nPlease cast your votes accordingly!\n\n\a",a[i]);
        }
    }
    return 0;
}
