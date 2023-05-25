/* CORONA CHATBOT
 * NCU-UAG COLLABORATIVE C PROJECT
 * GROUP: 7
 */

#include <stdio.h>
#include "Hospitals.c"
#include "Homecare.c"
#include "FoodandMedicine.c"
char user_input[];
int flag=0;

int main()
{
    system ("cls");
    int user_input;
    if (flag == 0) {
    printf("-------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                                    WELCOME IN CORONA CHAT BOT\n");
    }
    list:{
    printf("\nEnter the number of you query?\n\n1. Corona cases\n2. Regarding Hospitals\n3. Regarding Home care\n4. Regarding Food and Medicine\n5. Exit\n\n");
    }
    printf("user ==> ");
    scanf("%d", &user_input);

    while (1)
    {
        if (user_input == 1)
        {
            printf("bot ==> ok sir\n");
            system("start chrome https://www.google.com/search?q=corona+cases&rlz=1C1CHBD_enIN970IN970&ei=lzujYfjBN5bW1sQPh6Cv0AI&ved=0ahUKEwi46crgz7r0AhUWq5UCHQfQCyoQ4dUDCA4&uact=5&oq=corona+cases&gs_lcp=Cgdnd3Mtd2l6EAMyCggAELEDEIMBEEMyCwgAEIAEELEDEIMBMgsIABCABBCxAxCDATIOCAAQgAQQsQMQgwEQyQMyBQgAEJIDMgUIABCSAzILCAAQgAQQsQMQgwEyCwgAEIAEELEDEIMBMgsIABCABBCxAxCDATIICAAQsQMQgwE6BAgAEEc6BQgAEIAESgUIOhIBMUoECEEYAEoECEYYAFC7AliXB2CyCWgAcAN4AIABzwGIAfQCkgEFMC4xLjGYAQCgAQHIAQjAAQE&sclient=gws-wiz");
            goto list;
        }
        else if (user_input == 2)
        {
            Hospitals();
            break;
        }
        else if (user_input == 3)
        {
            Homecare();
            break;
        }
        else if (user_input == 4)
        {
            FoodandMedicine();
            break;
        }
        else if(user_input == 5)
        {
            printf("Thank you\nbyy\n");
            return 0;
        }
        else
        {
            printf("INVALID\n");
            printf("byy\n");
            return 0;
        }
    }
}