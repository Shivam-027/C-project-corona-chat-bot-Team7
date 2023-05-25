
#include <stdio.h>
char user_input[];
extern flag;
int Hospitals()
{
    int user_in;
    char query;

Hospital:
{

    FILE *the_file = fopen("Hospitals.txt", "r");
    if (the_file == NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[150];
    while (fgets(line, sizeof(line), the_file))
    {
        printf("%s", line);
    }
    printf("user ==> ");
    scanf("\n%d", &user_in);
    switch (user_in)
    {
    case 1:
        printf("ANSWER : \nIt depends on the hospital and its rules, you can but with the necessary measures.\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 2:
        printf("ANSWER : \nMost estimates for the incubation period of COVID-19 range from 1 to 14 days and are generally around five days.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 3:
        printf("ANSWER : \nThe COVID-19 virus can survive up to 72 hours on surfaces, hence the importance of constant hand washing and disinfection of commonly used objects, as well as avoiding touching one's face.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 4:
        printf("ANSWER : \nCurrent estimates suggest that the time between infection and onset of symptoms varies from 1 to 12 days, with an estimated average of 5-6 days. It is estimated that the incubation period could be as long as 14 days.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 5:
        printf("ANSWER : \nHuman coronaviruses are transmitted from one infected person to another: through the air, by coughing and sneezing.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 6:
        printf("ANSWER : \nThe most common symptoms are the following:\n-Fever.\n-Cough.\n-Tiredness.\n-Loss of taste or smell.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 7:
        printf("ANSWER : \nIt can take about a week after exposure to COVID-19 to have a positive test result. If you are fully vaccinated, you should wait three to five days after exposure before testing.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 8:
        printf("ANSWER : \nIn most cases of patients who develop mild covid-19 disease, the patient recovers within one to two weeks.\nIn cases of patients who develop severe disease, it may take more than six weeks for symptoms to improve, and there may even be permanent damage to the heart, kidneys, lungs and brain as a result of covid-19.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 9:
        printf("ANSWER : \nThe less common symptoms are as follows:\n-Sore throat\n-headache\n-Aches and pains\n-Diarrhea\n-Skin rash or discoloration of fingers or toes\n-Red or irritated eyes\n\nSerious symptoms include the following:\n-Shortness of breath or dyspnea\n-Loss of mobility or speech or feeling confused\n-Chest pain\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 10:
        printf("ANSWER : \nThe first thing you need to do is to find out if you really need to go to the hospital, you can check on this website https://www.stlukesonline.org/health-services/service-groups/covid-resources/when-to-go-to-the-hospital-for-covid-19.\nAfter consulting that page, if you do not need to go to the hospital, look at the following home care section.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");        
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto Hospital;
        }
        break;
    case 11:
        printf("ok returning to main menu\n");
        flag++;
        main();
        break;
    default:
        printf("Wrong choice! Please choose a option between 1 and 11\n\n");
        goto Hospital;
    }
}
}
