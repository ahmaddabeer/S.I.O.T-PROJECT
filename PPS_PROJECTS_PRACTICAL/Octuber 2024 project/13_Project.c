// Write a program in c to input week day number between 1 to 7 and print a week day according to given number. else-if condition
// DATE: 18|10|2024

void main()
{

    int wd;
    printf("Enter 1 for MONDAY 2 for TUESDAY .....etc : \n");

    scanf("%d", &wd);
    if (wd == 1)
        printf("MONDAY\n");
    else if (wd == 2)
        printf("TUESDAY\n");
    else if (wd == 3)
        printf("WEDNESDAY\n");
    else if (wd == 4)
        printf("THIRSDAY\n");
    else if (wd == 5)
        printf("FRIDAY\n");
    else if (wd == 6)
        printf("FRIDAY\n");
    else if (wd == 7)
        printf("SUNDAY\n");
    else
        printf("Invalid number please try again \n");
    printf("         ");
    printf("THANK YOU ");
}
