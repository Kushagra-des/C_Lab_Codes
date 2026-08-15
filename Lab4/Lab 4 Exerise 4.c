#include<stdio.h>
int main ()
{
    int userid=3214, pass=6580, user_id,password;
    printf("Enter User Id: ");
    scanf("%d", &user_id);
    printf("Enter Password:");
    scanf("%d", &password);
    switch(user_id)
    {
        case 3214:
            switch (password) {
                case 6580:
                    printf("Welcome Dev");
                    break;
                default:
                    printf("Enter correct User Id and Password");
            }
            break;
        default:
            printf("Enter correct User Id and Password");
    }
}
