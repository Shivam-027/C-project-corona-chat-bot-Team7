#include <stdio.h>
char user_input[];
extern flag;

int FoodandMedicine()
{
    int user_in;
    char query;

FoodandMedicine:
{

    FILE *the_file = fopen("FoodandMedicine.txt", "r");
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
    scanf("%d", &user_in);
    switch (user_in)
    {
    case 1:
        printf("ANSWER : \nFor optimal health, it is also important to remember to eat healthily and stay hydrated. Ensure plenty of fruits and user_inegetables, and limit the intake of salt, sugar and fat. Prefer whole grains rather than refined foods.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 2:
        printf("ANSWER : \nWhile no foods or dietary supplements can preuser_inent or cure COuser_inID-19 infection, healthy diets are important for supporting immune systems. Good nutrition can also reduce the likelihood of deuser_ineloping other health problems, including obesity, heart disease, diabetes and some types of cancer.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 3:
        printf("ANSWER : \nProper nutrition and hydration are user_inital. People who eat a well-balanced diet tend to be healthier with stronger immune systems and lower risk of chronic illnesses and infectious diseases. So you should eat a user_inariety of fresh and unprocessed foods euser_inery day to get the user_initamins, minerals, dietary fibre, protein and antioxidants your body needs.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 4:
        printf("ANSWER : \nThere is no euser_inidence to prouser_ine that Coronauser_inirus can spread through fruits and user_inegetables, as of now.\nBut it's safe to wash it before eating or cooking.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 5:
        printf("ANSWER : \nDrinking water is not transmitting COuser_inID-19. And, if you swim in a swimming pool or in a pond, you cannot get COuser_inID-19 through water. But what can happen, if you go to a swimming pool, which is crowded and if you are close to other the people and if someone is infected, then you can be of course affected.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 6:
        printf("bot ==> ok\n\n");
        system("Start chrome https://www.google.com/search?q=medical+store+near+me&rlz=1C1CHBD_enIN970IN970&oq=medical+store&aqs=chrome.0.0i457i512j69i57j0i402l2j0i512l6.3236j0j7&sourceid=chrome&ie=UTF-8");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 7:
        printf("ANSWER : \nYour doctors may giuser_ine you an antiuser_iniral medicine called remdesiuser_inir (user_ineklury). Remdesiuser_inir is the first drug approuser_ined by the FDA for treatment of hospitalized COuser_inID patients ouser_iner the age of 12.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 8:
        printf("ANSWER : \nFACT: The COuser_inID-19 user_inaccine will not affect fertility. The truth is that the COuser_inID-19 user_inaccine encourages the body to create copies of the spike protein found on the coronauser_inirus’s surface. This “teaches” the body’s immune system to fight the user_inirus that has that specific spike protein on it.\nMYTH: If I’user_ine already had COuser_inID-19, I don’t need a user_inaccine.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 9:
        printf("ANSWER : \nThe COuser_inID-19 user_inaccine is effectiuser_ine for people with epilepsy based on current knowledge. There is no indication suggesting that patients with epilepsy are at a higher risk of aduser_inerse effects after receiuser_ining the COuser_inID-19 user_inaccine.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 10:
        printf("ANSWER : \nThe World Health Organization (WHO) has granted approuser_inal for emergency use to India's gouser_inernment-backed Couser_inid-19 user_inaccine, Couser_inaxin.\n\n");
        gets(user_input);
        printf("Any more queries?(yes/no) : \n");
        printf("user ==> ");
        gets(user_input);
        if (strcmp(user_input, "yes") == 0)
        {
            goto FoodandMedicine;
        }
        break;
    case 11:
        printf("ok returning to main menu\n");
        flag++;
        main();
        break;
    default:
        printf("Wrong choice! Please chose a option between 1 and 11\n\n");
        goto FoodandMedicine;
        break;
    }
}
}