#include <stdio.h>

int main()
{
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
}