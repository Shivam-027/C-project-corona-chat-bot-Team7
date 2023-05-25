#include <stdio.h>
char user_input[];
extern flag;
int Homecare()
{
  int user_in;
  char query;

Homecare:
{

  FILE *the_file = fopen("Homecare.txt", "r");
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
    printf("ANSWER : \nThrough the air\n by coughing and sneezing\n by touching or shaking hands with a sick person or by touching a contaminated object or surface\n by putting dirty hands to the mouth, nose or eyes.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 2:
    printf("ANSWER : \nWear a facemask\n Keep a distance of 6 feet from others\n Avoid large crowds and poorly ventilated spaces\n Wash hands frequently\n Cover nose and mouth when coughing and sneezing\n Clean and disinfect.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 3:
    printf("ANSWER : \nDisposable masks should not be reused.\n\n");
   gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 4:
    printf("ANSWER : \nIsolation is a voluntary measure: no one can be forced to isolate, not even confirmed cases. Fortunately, everyone has accepted quarantine so as not to spread the disease.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 5:
    printf("ANSWER : \nThe virus is most easily spread when an infected person has symptoms, but it is also possible to spread the virus before there are symptoms. Therefore, it is best to keep your hands clean and not touch your face.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 6:
    printf("ANSWER : \nIt can take almost a week after exposure to covid to have a positive test result. If you are fully vaccinated, you should wait three to five days after exposure before testing. Evidence suggests that testing should be less accurate within three days after exposure. Wear a facemask in enclosed public places for 14 days or until you test negative.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 7:
    printf("ANSWER : \nProvide support with basic needs\n watch for warning signs\n protect yourself with a mask and gloves\n limit contact\n eat in separate areas\n avoid sharing personal items\n wash your hands frequently\n monitor your own health.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 8:
    printf("ANSWER : \nStay calm and stay at home. Keep a healthy distance and limit close contact with other people as much as possible, approximately 2 meters. Continue to practice basic prevention measures. If you belong to any of the groups at risk for complications and death from COVID-19, ask family, friends and health care professionals to monitor you during the outbreak. Also stay in contact with family and friends at higher risk of developing severe disease, such as the elderly, pregnant women, people with disabilities, and people with chronic illnesses.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 9:
    printf("ANSWER : \nIf a family member is having difficulty breathing, go to an emergency medical service or call 911 immediately.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;

  case 10:
    printf("ANSWER : \nYes, but the risk of infection is much lower after receiving the vaccine.\n\n");
    gets(user_input);
    printf("Any more queries?(yes/no) : \n");
    printf("user ==> ");
    gets(user_input);
    if (strcmp(user_input, "yes") == 0)
    {
      goto Homecare;
    }
    break;
  case 11:
    printf("ok returning to main menu\n");
    flag++;
    main();
    break;
  default:
    printf("Wrong choice! Please choose a option between 1 and 11\n\n");
    goto Homecare;
  }
}
  return 0;
}