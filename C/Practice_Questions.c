#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

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
      scanf(" %s",question_number);
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
        printf("\n\n");
        /* Question 1d - End Here */
      }

      else if(strcmp(question_number,"2") == 0)
      {
        /* Question 2 - Start Here */
        printf("==================== Question 2 ====================\n");
        if(__STDC_VERSION__ == 199409)
        printf("We are using C95!");
        else if(__STDC_VERSION__ == 199901)
        printf("We are using C99!");
        else if(__STDC_VERSION__ == 201112)
        printf("We are using C11!");
        else if(__STDC_VERSION__ == 201710)
        printf("We are using C17/C18!");
        else if(__STDC_VERSION__ == 202311)
        printf("We are using C23!");
        printf("\n\n");
        /* Question 2 - End Here */
      }

      else if(strcmp(question_number,"2a") == 0)
      {
        /* Question 2a - Start Here */
        printf("==================== Question 2a ====================\n");
        printf("Same Question as 2");
        printf("\n\n");
        /* Question 2a - End Here */
      }

      else if(strcmp(question_number,"2b") == 0)
      {
        /* Question 2b - Start Here */
        printf("==================== Question 2b ====================\n");

        #ifdef __GNUC__
        {
          printf("Compiler Name: GCC\n");
          printf("Compiler Version: %d.%d.%d",__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__);
        }
        #endif
        #ifdef __clang__
        {
          printf("Compiler Name: Clang\n");
          printf("Compiler Version: %d.%d.%d",__clang_major__,__clang_minor__,__clang_patchlevel__);
        }
        #endif
        #ifdef _MSC_VER
        {
          printf("Compiler Name: MSVC\n");
          printf("Compiler Version: %d",_MSC_VER);
        }
        #endif
        printf("\n\n");
        /* Question 2b - End Here */
      }

      else if(strcmp(question_number,"2c") == 0)
      {
        /* Question 2c - Start Here */
        printf("==================== Question 2c ====================\n");

        if(__STDC_VERSION__ == 199901)
        printf("This program is compiled under C99");
        else if(__STDC_VERSION__ == 201112)
        printf("This program is compiled under C11");
        else if(__STDC_VERSION__ == 201710)
        printf("This program is compiled under C18");
        else
        printf("This program is compiled under newer version of C");
        /* Question 2c - End Here */
      }

      else if(strcmp(question_number,"2d") == 0)
      {
        /* Question 2d - Start Here */
        printf("==================== Question 2d ====================\n");

        if(__STDC_VERSION__ == 199409)
        printf("C Version: C95\n");
        else if(__STDC_VERSION__ == 199901)
        printf("C Version: C99\n");
        else if(__STDC_VERSION__ == 201112)
        printf("C Version: C11\n");
        else if(__STDC_VERSION__ == 201710)
        printf("C Version: C17/C18\n");
        else if(__STDC_VERSION__ == 202311)
        printf("C Version: C23\n");
        printf("Compilation Date: %s\n",__DATE__);
        printf("Compilation Time: %s",__TIME__);
        /* Question 2d - End Here */
      }

      else if(strcmp(question_number,"3") == 0)
      {
        /* Question 3 - Start Here */
        printf("==================== Question 3 ====================\n");

        printf("######\n");
        printf("#\n");
        printf("#\n");
        printf("#####\n");
        printf("#\n");
        printf("#\n");
        printf("#\n\n");
        
        printf("  #####\n");
        printf("##     ##\n");
        printf("#\n");
        printf("#\n");
        printf("##     ##\n");
        printf("  #####");
        /* Question 3 - End Here */
      }

      else if(strcmp(question_number,"3a") == 0)
      {
        /* Question 3a - Start Here */
        printf("==================== Question 3a ====================\n");

        printf("******\n");
        printf("     *\n");
        printf("     *\n");
        printf(" *****\n");
        printf("     *\n");
        printf("     *\n");
        printf("     *\n");
        /* Question 3a - End Here */
      }

      else if(strcmp(question_number,"3b") == 0)
      {
        /* Question 3b - Start Here */
        printf("==================== Question 3b ====================\n");

        printf("     .............\n");
        printf("     #############\n");
        printf("     .............\n");
        printf("  ...               ...\n");
        printf("  ###               ###\n");
        printf("  ...               ...\n");
        printf(".#.\n");
        printf(".#.\n");
        printf(".#.\n");
        printf(".#.\n");
        printf(".#.\n");
        printf(".#.\n");
        printf("  ...               ...\n");
        printf("  ###               ###\n");
        printf("  ...               ...\n");
        printf("     .............\n");
        printf("     #############\n");
        printf("     .............\n");
        /* Question 3b - End Here */
      }

      else if(strcmp(question_number,"3c") == 0)
      {
        /* Question 3c - Start Here */
        printf("==================== Question 3c ====================\n");

        printf("*************\n");
        printf("       *    *\n");
        printf("       *    *\n");
        printf("            *");
        /* Question 3c - End Here */
      }

      else if(strcmp(question_number,"3d") == 0)
      {
        /* Question 3d - Start Here */
        printf("==================== Question 3d ====================\n");

        printf("Faltu ka Question hai");
        /* Question 3d - End Here */
      }

      else if(strcmp(question_number,"4") == 0)
      {
        /* Question 4 - Start Here */
        printf("==================== Question 4 ====================\n");

        char x,y,z;

        printf("Write 3 Characters:\n");
        scanf(" %c%c%c",&x,&y,&z);

        printf("Reverse of %c%c%c is %c%c%c",x,y,z,z,y,x);
        /* Question 4 - End Here */
      }

      else if(strcmp(question_number,"5") == 0)
      {
        /* Question 5 - Start Here */
        printf("==================== Question 5 ====================\n");

        float l,b,area,perimeter;

        printf("Length (in inches): ");
        scanf("%f",&l);
        printf("Breadth (in inches): ");
        scanf("%f",&b);

        area=l*b;
        perimeter=2*(l+b);

        printf("Area of Rectangle: %.2f square inch\n",area);
        printf("Perimeter of Rectangle is: %.2f inch",perimeter);
        /* Question 5 - End Here */
      }

      else if(strcmp(question_number,"5a") == 0)
      {
        /* Question 5a - Start Here */
        printf("==================== Question 5a ====================\n");

        float l,b,area,perimeter,diagonal;

        printf("Length (in inches): ");
        scanf("%f",&l);
        printf("Breadth (in inches): ");
        scanf("%f",&b);

        area=l*b;
        perimeter=2*(l+b);
        diagonal=sqrt(l*l + b*b);

        printf("Area of Rectangle: %.2f square inch\n",area);
        printf("Perimeter of Rectangle is: %.2f inch\n",perimeter);
        printf("Diagonal of Rectangle is: %.2f inch",diagonal);
        /* Question 5a - End Here */
      }

      else if(strcmp(question_number,"5b") == 0)
      {
        /* Question 5b - Start Here */
        printf("==================== Question 5b ====================\n");

        double area,perimeter,Discriminant,l,b;

        printf("Write Area of Rectangle (in square inches): ");
        scanf("%lf",&area);
        printf("Write Perimeter of Rectangle (in inches): ");
        scanf("%lf",&perimeter);

        Discriminant=(perimeter*perimeter) - (4*2*2*area);
        if(Discriminant<0 || area<0 || perimeter<0)
        printf("Input is invalid. No such rectangle ever exist! Please check Area or Perimeter.");
        else if(Discriminant == 0 || Discriminant>0)
        {
          l=(perimeter+sqrt(Discriminant))/(2*2);
          b=(perimeter-sqrt(Discriminant))/(2*2);
          printf("Length: %.2lf\n",l);
          printf("Breadth: %.2lf",b);
        }
        /* Question 5b - End Here */
      }

      else if(strcmp(question_number,"5c") == 0)
      {
        /* Question 5c - Start Here */
        printf("==================== Question 5c ====================\n");

        printf("Same as Question 5");
        /* Question 5c - End Here */
      }

      else if(strcmp(question_number,"5d") == 0)
      {
        /* Question 5d - Start Here */
        printf("==================== Question 5d ====================\n");

        float l,b,area,perimeter;

        printf("Length (in inches): ");
        scanf("%f",&l);
        printf("Breadth (in inches): ");
        scanf("%f",&b);

        if(l <= 0 || b <= 0)
        printf("These Dimesions Does Not Make a Valid Rectangle!");
        else
        {
          area=l*b;
          perimeter=2*(l+b);
          printf("Area of Rectangle: %.2f square inch\n",area);
          printf("Perimeter of Rectangle is: %.2f inch",perimeter);
        }
        /* Question 5d - End Here */
      }

      else if(strcmp(question_number,"6") == 0)
      {
        /* Question 6 - Start Here */
        printf("==================== Question 6 ====================\n");

        float pie=3.14,r,area,perimeter;

        printf("Radius: ");
        scanf("%f",&r);

        area=pie*r*r;
        perimeter=2*pie*r;
        printf("Area of Circle: %.2f\n",area);
        printf("Perimeter of Circle: %.2f",perimeter);
        /* Question 6 - End Here */
      }

      else if(strcmp(question_number,"6a") == 0)
      {
        /* Question 6a - Start Here */
        printf("==================== Question 6a ====================\n");

        float pie=3.14159,r,area,circumference;

        printf("Radius: ");
        scanf("%f",&r);

        area=pie*r*r;
        circumference=2*pie*r;
        printf("Area of Circle: %.3f\n",area);
        printf("Circumference of Circle: %.3f",circumference);
        /* Question 6a - End Here */
      }

      else if(strcmp(question_number,"6b") == 0)
      {
        /* Question 6b - Start Here */
        printf("==================== Question 6b ====================\n");

        double area,r,pie=3.14159,circumference;

        printf("Area of Circle: ");
        scanf(" %lf",&area);

        r=sqrt(area/pie);
        circumference=2*pie*r;
        printf("Radius: %.2lf\n",r);
        printf("Circumference: %.2lf",circumference);
        /* Question 6b - End Here */
      }

      else if(strcmp(question_number,"6c") == 0)
      {
        /* Question 6c - Start Here */
        printf("==================== Question 6c ====================\n");

        float pie=3.14159,area,perimeter,r;
        int d;

        printf("Diameter: ");
        scanf("%d",&d);

        r=(double)d/2;
        area=pie*r*r;
        perimeter=2*pie*r;
        printf("Area of Circle: %.2f\n",area);
        printf("Perimeter of Circle: %.2f",perimeter);
        /* Question 6c - End Here */
      }

      else if(strcmp(question_number,"6d") == 0)
      {
        /* Question 6d - Start Here */
        printf("==================== Question 6d ====================\n");

        float pie=3.14159,r,area,perimeter;

        printf("Radius: ");
        scanf("%f",&r);

        if(r <= 0)
        printf("Invalid Radius!");
        else
        {
          area=pie*r*r;
          perimeter=2*pie*r;
          printf("Area of Circle: %.2f\n",area);
          printf("Perimeter of Circle: %.2f",perimeter);
        }
        /* Question 6d - End Here */
      }

      else if(strcmp(question_number,"7") == 0)
      {
        /* Question 7 - Start Here */
        printf("==================== Question 7 ====================\n");

        int a = 125, b = 12345;
        long ax = 1234567890;
        short s = 4043;
        float x = 2.13459;
        double dx = 1.1415927;
        char c = 'W';
        unsigned long ux = 2541567890;

        printf("a + c = %d\n",a+c);
        printf("x + c = %f\n",x+c);
        printf("dx + x = %lf\n",dx+x);
        printf("((int)dx) + ax = %ld\n",((int)dx)+ax);
        printf("a + x = %f\n",a+x);
        printf("s + b = %d\n",s+b);
        printf("ax + b = %ld\n",ax+b);
        printf("s + c = %d\n",s+c);
        printf("ax + c = %ld\n",ax+c);
        printf("ax + ux = %lu",ax+ux);
        /* Question 7 - End Here */
      }

      else if(strcmp(question_number,"7a") == 0)
      {
        /* Question 7a - Start Here */
        printf("==================== Question 7a ====================\n");

        printf("Faltu Question");
        /* Question 7a - End Here */
      }

      else if(strcmp(question_number,"7b") == 0)
      {
        /* Question 7b - Start Here */
        printf("==================== Question 7b ====================\n");

        printf("Faltu Question");
        /* Question 7b - End Here */
      }

      else if(strcmp(question_number,"7d") == 0)
      {
        /* Question 7d - Start Here */
        printf("==================== Question 7d ====================\n");

        printf("Faltu Question");
        /* Question 7d - End Here */
      }

      else if(strcmp(question_number,"8") == 0)
      {
        /* Question 8 - Start Here */
        printf("==================== Question 8 ====================\n");

        int x,years,weeks,days;

        printf("Write Days: ");
        scanf("%d",&x);

        years=x/365;
        weeks=(x%365)/7;
        days=(x%365)%7;
        
        printf("%d Days = %d %s %d %s %d %s",x,years,(years==1 || years==0)?"year":"years",weeks,(weeks==1 || weeks==0)?"week":"weeks",days,(days==1 || days==0)?"day":"days");
        /* Question 8 - End Here */
      }

      else if(strcmp(question_number,"8a") == 0)
      {
        /* Question 8a - Start Here */
        printf("==================== Question 8a ====================\n");

        double x;
        int days,hours,minutes;

        printf("Write hours: ");
        scanf("%lf",&x);

        days = (int)x/24;
        hours = (int)x%24;
        minutes = (int)((x-(int)x)*60);

        printf("%lf hours = %d %s %d %s %d %s",x,days,(days == 0 || days == 1)?"day":"days",hours,(hours == 0 || hours == 1)?"hour":"hours",minutes,(minutes == 0 || minutes == 1)?"minute":"minutes");
        /* Question 8a - End Here */
      }

      else if(strcmp(question_number,"8b") == 0)
      {
        /* Question 8b - Start Here */
        printf("==================== Question 8b ====================\n");

        int x,days,hours,minutes;

        printf("Write Minutes: ");
        scanf("%d",&x);

        days = x/1440;
        hours = (x%1440)/60;
        minutes = (x%1440)%60;

        printf("%d %s = %d %s %d %s %d %s",x,(x == 0 || x == 1)?"Minute":"Minutes",days,(days == 0 || days == 1)?"Day":"Days",hours,(hours == 0 || hours == 1)?"Hour":"Hours",minutes,(minutes == 0 || minutes == 1)?"Minute":"Minutes");
        /* Question 8b - End Here */
      }

      else if(strcmp(question_number,"8c") == 0)
      {
        /* Question 8c - Start Here */
        printf("==================== Question 8c ====================\n");

        int x,days,hours,minutes,seconds;

        printf("Write Seconds: ");
        scanf("%d",&x);

        days = x/86400;
        hours = (x%86400)/3600;
        minutes = ((x%86400)%3600)/60;
        seconds = ((x%86400)%3600)%60;

        printf("%d %s = %d %s %d %s %d %s %d %s",x,(x==0 || x==1)?"Second":"Seconds",days,(days==0 || days==1)?"Day":"Days",hours,(hours==0 || hours==1)?"Hour":"Hours",minutes,(minutes==0 || minutes==1)?"Minute":"Minutes",seconds,(seconds==0 || seconds==1)?"Second":"Seconds");
        /* Question 8c - End Here */
      }

      else if(strcmp(question_number,"8d") == 0)
      {
        /* Question 8d - Start Here */
        printf("==================== Question 8d ====================\n");

        int x,months,days;

        printf("Write Days: ");
        scanf("%d",&x);

        months = x/30;
        days = x%30;

        printf("%d %s = %d %s %d %s",x,(x==0 || x==1)?"Day":"Days",months,(months==0 || months==1)?"Month":"Months",days,(days==0 || days==1)?"Day":"Days");
        /* Question 8d - End Here */
      }

      else if(strcmp(question_number,"9") == 0)
      {
        /* Question 9 - Start Here */
        printf("==================== Question 9 ====================\n");

        int x,y,z;

        printf("Write Your First Integer: ");
        scanf("%d",&x);
        printf("Write Your Second Integer: ");
        scanf("%d",&y);

        z = x+y;

        printf("Sum of the above two integers = %d",z);
        /* Question 9 - End Here */
      }

      else if(strcmp(question_number,"9a") == 0)
      {
        /* Question 9a - Start Here */
        printf("==================== Question 9a ====================\n");

        int x,y,z,a;

        printf("Write Your First Integer: ");
        scanf("%d",&x);
        printf("Write Your Second Integer: ");
        scanf("%d",&y);

        z = x+y;

        printf("Sum of the above two integers = %d\n",z);
        if(x>y)
        {
          a = x-y;
          printf("Difference of the above two integers = %d",a);
        }
       else if(x<y)
       {
        a = y-x;
        printf("Difference of the above two integers = %d",a);
       }
        /* Question 9a - End Here */
      }

      else if(strcmp(question_number,"9b") == 0)
      {
        /* Question 9b - Start Here */
        printf("==================== Question 9b ====================\n");

        int x,y,z,a;

        printf("Write Your First Integer: ");
        scanf("%d",&x);
        printf("Write Your Second Integer: ");
        scanf("%d",&y);
        printf("Write Your Third Integer: ");
        scanf("%d",&z);

        a = x+y+z;

        printf("Sum of the above three integers = %d",a);
        /* Question 9b - End Here */
      }

      else if(strcmp(question_number,"9c") == 0)
      {
        /* Question 9c - Start Here */
        printf("==================== Question 9c ====================\n");

        int x,y,z;

        printf("Write Two Integers:\n");

        if(scanf("%d%d",&x,&y) != 2)
        {
          printf("Invalid Input!");
          return 1;
        }
        else if(y>0 && x > INT_MAX - y)
        {
          printf("Error: Positive Overflow Detected!");
          return 1;
        }
        else if(y<0 && x < INT_MIN - y)
        {
          printf("Error: Negative Overflow Detected!");
          return 1;
        }
        else
        {
          z = x+y;
          printf("Sum of two integers = %d",z);
        }
        return 0;
        /* Question 9c - End Here */
      }

      else if(strcmp(question_number,"10") == 0)
      {
        /* Question 10 - Start Here */
        printf("==================== Question 10 ====================\n");

        int x,y,z;

        printf("Write First Integer: ");
        scanf("%d",&x);
        printf("Write Second Integer: ");
        scanf("%d",&y);

        z = x*y;

        printf("Product of the above two integers = %d",z);
        /* Question 10 - End Here */
      }

      else if(strcmp(question_number,"10a") == 0)
      {
        /* Question 10a - Start Here */
        printf("==================== Question 10a ====================\n");

        int x,y,z,a;

        printf("Write First Integer: ");
        scanf("%d",&x);
        printf("Write Second Integer: ");
        scanf("%d",&y);
        printf("Write Third Integer: ");
        scanf("%d",&z);

        a = x*y*z;

        printf("Product of the above three integers = %d",a);
        /* Question 10a - End Here */
      }

      else if(strcmp(question_number,"10c") == 0)
      {
        /* Question 10 c- Start Here */
        printf("==================== Question 10c ====================\n");

        int x,y,z,a;

        printf("Write First Integer: ");
        scanf("%d",&x);
        printf("Write Second Integer: ");
        scanf("%d",&y);

        z = x*y;
        a = x+y;

        printf("Product of the above two integers = %d\n",z);
        printf("Sum of the above two integers = %d",a);
        /* Question 10c - End Here */
      }

      else if(strcmp(question_number,"11") == 0)
      {
        /* Question 11- Start Here */
        printf("==================== Question 11 ====================\n");

        float w1,w2,total_weight,avg_weight;
        int n1,n2,total_items;

        printf("Weight of first item: ");
        scanf("%f",&w1);
        printf("Weight of second item: ");
        scanf("%f",&w2);
        printf("Number of first item: ");
        scanf("%d",&n1);
        printf("Number of second item: ");
        scanf("%d",&n2);

        total_weight=(w1*n1)+(w2*n2);
        total_items=n1+n2;
        avg_weight=total_weight/total_items;

        printf("Average Weight = %.2f",avg_weight);
        /* Question 11 - End Here */
      }

      else if(strcmp(question_number,"11a") == 0)
      {
        /* Question 11a- Start Here */
        printf("==================== Question 11a ====================\n");

        printf("Same as Question 11");
        /* Question 11a- End Here */
      }

      else
      printf("Invalid Question Number");
    }
  }
}