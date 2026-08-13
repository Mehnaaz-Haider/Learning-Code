#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int platform_choice;

  printf("==================== Select Platform ====================\n");
  printf("(1) W3Resource     (2) HackerRank     (3) GeeksforGeeks\n"
         "(4) Project Euler  (5) CodeChef       (6) Exercism\n"
         "(7) CodeWars\n\n");
  printf("Select Platform (1-7): ");
  scanf("%d",&platform_choice);
  printf("\n\n");

  switch(platform_choice)
  case 1:
  {
    int chapter_choice;

    printf("==================== Select Chapter inside W3Resource ====================\n");
    printf("(1) Basic Declerations and Expressions     (2) Basic Part-II          (3) Basic Algorithm\n"
           "(4) Variable Type                          (5) Input Output           (6) Conditional Statement\n"
           "(7) While Loop                             (8) Do-While Loop          (9) For Loop\n"
           "(10) Array                                 (11) Structure             (12) Pointer\n"
           "(13) Linked List                           (14) Stack                 (15) Binary Heap (Tree-Based Structure)\n"
           "(16) Queue                                 (17) Hash                  (18) Tree\n"
           "(19) Graph                                 (20) Numbers               (21) Math\n"
           "(22) String                                (23) Date Time             (24) Function\n"
           "(25) Callback Function                     (26) Variadic Function     (27) Inline Funciton\n"
           "(28) Recursion                             (29) File Handling         (30) Search and Sorting\n"
           "(31) Challenges                            (32) C Snippets\n\n");
    printf("Select Chapter (1-32): ");
    scanf("%d",&chapter_choice);
    printf("\n\n");

    switch(chapter_choice)
    case 1:
    {
      char question_number[3];

      printf("========== Select Question from Chapter - Basic Declarations and Expressions ==========\n");
      printf("Q1     Q1a     Q1b     Q1c     Q1d\n"
             "Q2     Q2a     Q2b     Q2c     Q2d\n"
             "Q3     Q3a     Q3b     Q3c     Q3d\n"
             "...    ...     ...     ...     ...\n\n");
      printf("Select Question: ");
      scanf("%s",question_number);
      printf("\n");

      if(strcmp(question_number,"1") == 0)
      {
        /* Question 1 - Start Here */
        printf("==================== Question 1 ====================\n");
        printf("Name   : Mehnaaz Haider\n"
               "DOB    : January 19, 2000\n"
               "Mobile : 1234567899");
        printf("\n\n");
        /* Question 1 - End Here */
      }

      else if(strcmp(question_number,"1a") == 0)
      {
        /* Question 1a - Start Here */
        printf("==================== Question 1a ====================\n");
        printf("%9s%17s\n","Name :","Mehnaaz Haider");
        printf("%9s%17s\n","DOB :","January 19, 2000");
        printf("%9s%17s\n","Mobile :","1234567899");
        printf("\n\n");
        /* Question 1a - End Here */
      }

      else if(strcmp(question_number,"1b") == 0)
      {
        /* Question 1b - Start Here */
        char name[30],month[10];
        int date,year;
        long long int mobile;

        printf("==================== Question 1b ====================\n");
        printf("Write Your Name: ");
        scanf(" %[^\n]",name);
        printf("Write Your DOB: ");
        scanf("%s %d, %d",month,&date,&year);
        printf("Write Your Mobile Number: ");
        scanf("%lld",&mobile);
        printf("\n");

        printf("Output:\n");
        printf("%-6s : %s\n","Name",name);
        printf("%-6s : %s %02d, %04d\n","DOB",month,date,year);
        printf("%-6s : %010lld\n","Mobile",mobile);
        printf("\n\n");
        /* Question 1b - End Here */
      }

      else if(strcmp(question_number,"1c") == 0)
      {
        /* Question 1c - Start Here */
        char name[30],month[10],mobile[11];
        int date,year;

        printf("==================== Question 1c ====================\n");
        printf("Write Your Name: ");
        scanf(" %[^\n]",name);
        printf("Write Your DOB: ");
        scanf("%s %d, %d",month,&date,&year);
        printf("Write Your Mobile Number: ");
        scanf("%s",mobile);

        mobile[0]='X';
        mobile[1]='X';
        mobile[2]='X';
        mobile[3]='X';
        mobile[4]='X';
        mobile[5]='X';

        printf("\nOutput:\n");
        printf("Name: %s\n",strupr(name));
        printf("DOB: %s %d, %d\n",month,date,year);
        printf("Mobile: %s",mobile);
        /* Question 1c - End Here */
      }

      else if(strcmp(question_number,"1d") == 0)
      {
        /* Question 1d - Start Here */
        char name[30],month[10],mobile[11];
        int date,year;

        printf("==================== Question 1d ====================\n");
        printf("Write Your Name: ");
        scanf(" %[^\n]",name);
        printf("Write Your DOB: ");
        scanf("%s %d, %d",month,&date,&year);
        printf("Write Your Mobile Number: ");
        scanf("%s",mobile);

        printf("\nOutput\n");
        printf("%-8s :  %s\n","Name",name);
        printf("%-8s :  %s %d, %d\n","DOB",month,date,year);
        printf("%-8s :  %s\n","Mobile",mobile);
        /* Question 1d - End Here */
      }
    }
  }
}