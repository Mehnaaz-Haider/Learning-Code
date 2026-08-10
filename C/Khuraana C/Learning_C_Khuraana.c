#include <stdio.h>
#include <ctype.h>

int main()
{
    /* Insert Your Choice - Code Start*/
    int choice;

    printf("=========== All Questions ===========\n\n");
    printf("Q1     Q2     Q3     Q4     Q5\nQ6     Q7     Q8     Q9     Q10\nQ11     Q12     Q13     Q14     Q15\n\n");
    printf("Select Your Question Number (1-15): ");
    scanf("%d",&choice);
    printf("\n\n");

    /* Insert Your Choice - Code Start*/

    if(choice == 1)
    {
        /* Pass or Fail (Question 1) - Start Here */
        int M1,M2;
        printf("==================== ");
        printf("Question 1 ");
        printf("====================\n");
        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        if(M1>50)
        {
           if(M2>50)
           printf("Result: Pass");
           else
           printf("Result: Fail");
        }
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail (Question 1) - End Here */
    }

    else if(choice == 2)
    {
        /* Pass or Fail (Question 2) - Start Here */
        int M1,M2,M3;
        printf("==================== ");
        printf("Question 2 ");
        printf("====================\n");
        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);
        if(M1>50)
        {
           if(M2>50)
           {
            if(M3>50)
            printf("Resutl: Pass");
            else
            printf("Result: Compartment");
           }
           else
           {
            if(M3>50)
            printf("Result: Compartment");
            else
            printf("Result: Fail");
           }
        }
        else
        {
           if(M2>50)
           {
            if(M3>50)
            printf("Result: Compartment");
            else
            printf("Result: Fail");
           }
           else
           printf("Result: Fail");
        }
        printf("\n\n");
        /* Pass or Fail (Question 2) - End Here */
    }

    else if(choice == 3)
    {
        /* Greatest of 3 using nested if (Question 3) - Start Here */
        int x,y,z;
        printf("==================== ");
        printf("Question 3 ");
        printf("====================\n");
        printf("Write 3 numbers:\n");
        scanf("%d%d%d",&x,&y,&z);
        if(x>y)
        {
            if(x>z)
            printf("Greatest of 3 numbers is %d",x);
            else
            printf("Greatest of 3 numbers is %d",z);
        }
        else
        {
            if(y>z)
            printf("Greatest of 3 numbers is %d",y);
            else
            printf("Greatest of 3 numbers is %d",z);
        }
        printf("\n\n");
        /* Greatest of 3 using nested if (Question 3) - End Here */
    }

    else if(choice == 4)
    {
        /* Greatest of 4 using nested if (Question 4) - Start Here */
        int a,b,c,d;
        printf("==================== ");
        printf("Question 4 ");
        printf("====================\n");
        printf("Write 4 numbers:\n");
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>b)
        {
            if(a>c)
            {
                if(a>d)
                printf("Greatest of 4 numbers is %d",a);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
            else
            {
                if(c>d)
                printf("Greatest of 4 numbers is %d",c);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
        }
        else
        {
            if(b>c)
            {
                if(b>d)
                printf("Greatest of 4 numbers is %d",b);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
            else
            {
                if(c>d)
                printf("Greatest of 4 numbers is %d",c);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
        }
        printf("\n\n");
        /* Greatest of 4 using nested if (Question 4) - End Here */
    }

    else if(choice == 5)
    {
        /* Pass or Fail using Logical Operator (Question 5) - Start Here */
        printf("==================== ");
        printf("Question 5 ");
        printf("====================\n");

        int M1,M2;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);

        if(M1>50 && M2>50)
        printf("Result: Pass");
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail using Logical Operator (Question 5) - End Here */
    }

    else if(choice == 6)
    {
        /* Pass or Fail using Logical Operator (Question 6) - Start Here */
        printf("==================== ");
        printf("Question 6 ");
        printf("====================\n");

        int M1,M2,M3;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);

        if(M1<0 || M1>100 || M2<0 || M2>100 || M3<0 || M3>100)
        printf("Error: Invalid Marks! Marks should be between 0 and 100.");
        else if(M1>50 && M2>50 && M3>50)
        printf("Result: Pass");
        else if((M1>50 && M2>50) || (M1>50 && M3>50) || (M2>50 && M3>50))
        printf("Result: Compartment");
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail using Logical Operator (Question 6) - End Here */
    }

    else if(choice == 7)
    {
        /* Pass or Fail using Conditional Operator (Question 7) - Start Here */
        printf("==================== ");
        printf("Question 7 ");
        printf("====================\n");

        int M1,M2,M3;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);

        if(M1<0 || M1>100 || M2<0 || M2>100 || M3<0 || M3>100)
        printf("Error: Invalid Marks! Marks should be between 0 and 100.");
        else
        (M1>50? (M2>50? (M3>50?printf("Result: Pass"):printf("Result: Compartment")):(M3>50?printf("Result: Compartment"):printf("Result: Fail"))) : (M2>50? (M3>50?printf("Result: Compartment"):printf("Result: Fail")):printf("Result: Fail")));
        printf("\n\n");
        /* Pass or Fail using Conditional Operator (Question 7) - End Here */
    }

    else if(choice == 8)
    {
        /* Pass or Fail using Count Variable (Question 8) - Start Here */
        printf("==================== ");
        printf("Question 8 ");
        printf("====================\n");

        int M1,M2,M3;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);

        int count = 0;
        if(M1>50)
        count++;
        if(M2>50)
        count++;
        if(M3>50)
        count++;
        if(count == 3)
        printf("Result: Pass");
        else if(count == 2)
        printf("Result: Compartment");
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail using Count Variable (Question 8) - End Here */
    }

    else if(choice == 9)
    {
        /* Grade using else-if (Question 9) - Start Here */
        printf("==================== ");
        printf("Question 9 ");
        printf("====================\n");

        int M;

        printf("Write Marks: ");
        scanf("%d", &M);

        if(M>=90 && M<=99)
        printf("Grade: A");
        else if(M>=80 && M<=89)
        printf("Grade: B");
        else if(M>=70 && M<=79)
        printf("Grade: C");
        else if(M>=60 && M<=69)
        printf("Grade: D");
        else
        printf("Under Grade");
        printf("\n\n");
        /* Grade using else-if (Question 9) - End Here */
    }

    else if(choice == 10)
    {
        /* Print Vowel using Switch-Case (Question 10) - Start Here */
        printf("==================== ");
        printf("Question 10 ");
        printf("====================\n");

        char x;

        printf("Write input: ");
        scanf(" %c",&x);

        switch(tolower(x))
        {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        printf("Vowel");
        break;
        default:
        printf("Not Vowel");
        }
        printf("\n\n");
        /* Print Vowel using Switch-Case (Question 10) - End Here */
    }

    else if(choice == 11)
    {
        /* toupper code (Question 11) - Start Here */
        printf("==================== ");
        printf("Question 11 ");
        printf("====================\n");

        char x,y;

        printf("Write your input in lowercase: ");
        scanf(" %c",&x);

        y = x - 32;
        if(x>=97 && x<=122)
        printf("Output: %c",y);
        else
        printf("%c",x);
        printf("\n\n");
        /* toupper code (Question 11) - End Here */
    }

    else if(choice == 12)
    {
        /* tolower code (Question 12) - Start Here */
        printf("==================== ");
        printf("Question 12 ");
        printf("====================\n");

        char x,y;

        printf("Write your input in uppercase: ");
        scanf(" %c",&x);

        y = x + 32;
        if(x>=65 && x<=90)
        printf("Output: %c",y);
        else
        printf("%c",x);
        printf("\n\n");
        /* tolower code (Question 12) - End Here */
    }

    else if(choice == 13)
    {
        /* Grade using switch-case (Question 13) - Start Here */
        printf("==================== ");
        printf("Question 13 ");
        printf("====================\n");

        int x;

        printf("Write Marks: ");
        scanf("%d",&x);

        switch(x/10)
        {
            case 9:
            printf("Grade: A");
            break;
            case 8:
            printf("Grade: B");
            break;
            case 7:
            printf("Grade: C");
            break;
            case 6:
            printf("Grade: D");
            break;
            default:
            printf("Under grade");
        }
        printf("\n\n");
        /* Grade using switch-case (Question 13) - End Here */
    }

    else if(choice == 14)
    {
        /* Grade using switch-case (Question 14) - Start Here */
        printf("==================== ");
        printf("Question 14 ");
        printf("====================\n");

        int x;

        printf("Write Marks: ");
        scanf("%d",&x);

        if(x%10 == 0)
        x--;
        switch(x/10)
        {
            case 9:
            printf("Grade: A");
            break;
            case 8:
            printf("Grade: B");
            break;
            case 7:
            printf("Grade: C");
            break;
            case 6:
            printf("Grade: D");
            break;
            default:
            printf("Under grade");
        }
        printf("\n\n");
        /* Grade using switch-case (Question 14) - End Here */
    }

    else if(choice == 15)
    {
        /* Greatest of 2 using switch-case (Question 15) - Start Here */
        printf("==================== ");
        printf("Question 15 ");
        printf("====================\n");

        int x,y;

        printf("Write 2 numbers:\n");
        scanf("%d%d",&x,&y);

        switch(x>y)
        {
            case 1:
            printf("Greatest number is: %d",x);
            break;
            case 0:
            printf("Greatest number is: %d",y);
        }
        printf("\n\n");
        /* Greatest of 2 using switch-case (Question 15) - End Here */
    }
    else printf("invalid choice");
}