#include <stdio.h>
int main()
{
    int opt,ans,eaans,a=0,x=0,y=0;
    char str[100];
    printf("                    CAGE-OF-KNOWLEGE                \n");
    printf("                whats your good name?               \n");
    scanf("%s",&str);
    printf("Nice To Meet U %s\n",str);
                                //DIALOGUES
    printf("Before we start to play let me tell you %s there are some instructions you should know for playing our quiz game \n'the CAGE-OF-KNOWLEGE'\n ",&str);
    printf("Also We would Love to tell you that in this Project 'CAGE OF KNOWLEDGE' we're a group of five people:\nArmaan\nArsh\nBrahmKaran\nJashan\nJeevan");
    printf("\n1:There are '12' questions each question have 4 options");
    printf("\n2:Right answer will take you to the next question, and obviously wrong will make you loose %s",&str);
    printf("\n3:there are limited two life lines,Life-lines are: \n  I:50-50      \n II:EXPERT ADVICE ");
    printf("\n4:Calling for 50-50 life line you have to answer '5050'\n  Calling for EXPERT ADVICE life line you have to write '100' \nbecause by this life line we'll get to know the 100 percentage of the answer");
    printf("\n5:There will be No Life line on Q:12 This is to Know How worthy you're, ");
    printf("\nThe Money will go from:\nQ1:$100\nQ2:$200\nQ3:$400\nQ4:$800\nQ5:$1000\nQ6:$2500\nQ7:$5000\nQ8:$10000\nQ9:$25000\nQ10:$50000\nQ11:$100000\nQ12:$500000");

                                //QUESTION 1

    printf("\n\nNow let me get you Started  ");


{
    printf("\n\n\n\nQ1:which one of the following is not a subject that has been devolved to the Panchayati Raj\n Institutions by the 11th schedule of the Constitutions of India?\n");
    printf("\n 1:Non-conventional energy resources      2:Roads    \n 3:Higher education                       4:Libraries  \n");
    scanf("%d",&opt);
    if(opt==3)
     {
         printf("Right Answer %s and the amount money will be credited amount $100 automatically to your bank account \n",&str);
         a++;

     }
    else{}


                            // 50-50 for Q:1

    if(opt==5050)
    {
        if(x==0)
        {
            printf("\n1:Non-conventional energy resources       2:      \n3:Higher education                        4:\n");
            scanf("%d",&ans);
            x++;
           if(ans==3)
            {
                printf("\nRight Answer %s and the amount money will be credited amount $100 automatically to your bank account \n",&str);
                a++;
            }
            else{}
        }
        else{}
    }
            else{}


                                //EXPERT ADVICE for Q:1

    if(opt==100)
            {   if(y==0)
                {
                printf("\nThe Expert thinks that the Answer is HIGHER EDUCATION\n");
                scanf("%d",&eaans);
                y++;
                if(eaans==3)
                {
                    printf("\nRight Answer %s and the amount money will be credited amount $100 automatically to your bank account \n");
                    a++;

                }
                else{}
                }
                else{}
            }
        else{}
}
                                //QUESTION 2


if(a>0)
{
        printf("\n\nQ2:Which of the National flags has most number of stars on them ?");
        printf("\n1:USA        2:Australia \n3:Brazil     4:New Zealand \n");
        scanf("%d",&opt);
    if(opt==1)
     {
         printf("Right Answer,$200 %s you're going Great\n",&str);
         a++;
     }
     else{}

                                // 50-50 FOR 2

    if(opt==5050)
        {
            if(x==0)
            {
            printf("\n1:USA             2:\n      \n3:Brazil      4:\n");
            scanf("%d",&ans);
            x++;
            if(ans==1)
                {
                printf("Right Answer,$200 let's get to next question\n");
                a++;
                }
            }
            else{}
        }

    else{}

                                //EXPERT ADVICE FOR 2



            if(opt==100)
            {
                if(y==0)
                {
                printf("The Expert thinks that the Answer is USA\n");
                scanf("%d",&eaans);
                if(eaans==1)
                    {
                    printf("Right Answer %s you're going Great\n",&str);
                    a++;
                    }
                else{}
                }
                else{}


            }

    else{}
}
                                //QUESTION 3

        if(a>1)
{
        printf("\n\nQ3:Which of these is normally required to verify a transaction, When shopping Online using debit or credit card?");
      			printf("\n1:PAN     2:PNR     \n3:CVV     4:AADHAR\n");
      			 scanf("%d",&opt);
    if(opt==3)
     {
         printf("Right Answer %s,$400\n",&str);
         a++;

     }
    else{}
                                // 50-50 for 3

        if(opt==5050)
        {
            if(x==0)
            {
            printf("\n1:PAN      \n2:      \n3:CVV      \n4:\n");
            scanf("%d",&ans);
            x++;
            if(ans==3)
                {
                printf("Right Answer good going %s,$400\n",&str);
                a++;
                }

            else
                {
                printf("wrong answer %s",&str);
                }
            }
            else{}
        }
        else{}
                                //EXPERT ADVICE FOR 3


        if(opt==100)
            {
                if(y==0)
                {
                printf("The Expert thinks that the Answer is CVV (Card Verification Value)\n");
                scanf("%d",&eaans);
                y++;
                if(eaans==3)
                    {
                   printf("Right Answer good going %s,$400\n",&str);
                    a++;
                    }
                else
                    {
                printf("wrong answer %s",&str);
                    }
                }
                else{}
            }


        else{}
}
                                //QUESTION 4

if(a>2)
{
        printf("\nQ4:Who among the following was the first Indian women Producer and Director in Indian Cinema?");
        printf("\n\n1:Fatima Begum     2:WM Khan\n3:Alam Ara         4:Ardeshir Irani\n");
        scanf("%d",&opt);
    if(opt==1)
     {
         printf("Right Answer %s,$800\n",&str);
         a++;

     }
                                // 50-50 FOR 4
    else
    {
        printf("wrong answer %s, the answer is Fatima Begum ",&str);
    }

        if(opt==5050)
        {
           if(x==0)
           {
           printf("\n\n1:Fatima Begum     2:\n3:                 4:Ardeshir Irani\n");
            scanf("%d",&ans);
            x++;
            if(ans==1)
            {
                printf("Right Answer %s,$800\n",&str);
                a++;
            }

            else
            {
            printf("wrong answer %s, the answer is Fatima Begum ",&str);
            }
           }
           else{}
        }
                                //EXPERT ADVICE FOR 4


                if(opt==100)
            {
                if(y==0)
                {
                printf("The Expert thinks that the Answer is Fatima Begum and the film was Bulbul-e-Parastan in 1926.\n");
                scanf("%d",&eaans);
                y++;
                if(eaans==1)
                    {
                    printf("Right Answer %s,$800\n",&str);
                    a++;

                    }
                else
                    {
               printf("wrong answer %s, the answer is Fatima Begum ",&str);
                    }
                }
                else{}
            }

            else{}

}

                                //QUESTION 5

if(a>3)
{
        printf("\nQ5:Who among the following was the author of Anand Math?");
        printf("\n1:Bankim Chandra Chatterjee     2:Ravindranath Tagore\n3:Raja Ram Mohan Roy            4:Bal Gangadhar Tilak\n");
        scanf("%d",&opt);
    if(opt==1)
     {
         printf("UNACCEPTANLY,Right Answer\n");
         a++;

     }

    else{}
                                // 50-50 FOR 5


        if(opt==5050)

        {
            if(x==0)
            {
            printf("\n\n1:Bankim Chandra Chaterjee     2:\n3:                             4:Bal Gangadhar Tilak\n");
            scanf("%d",&ans);
            x++;
            if(ans==1)
                {
                printf("Right Answer %s,$1000\n",&str);
                a++;
                }

            else
                {
                printf("%s,this is wrong answer");
                }
            }
            else{}

                                //EXPERT ADVICE FOR 5


                if(opt==100)

            {
                if(y==0)
                {
                printf("The Expert say thinks that the answer is Bankim Chandra Chatterjee\n");
                scanf("%d",&eaans);
                y++;
                if(eaans==1)
                    {
                    printf("Right Answer %s,$1000\n",&str);
                    a++;

                    }
                else{}
                }
                else{}

            }
        }


    else{}
}

                                //QUESTION 6

if(a>4)
{
        printf("\nQ6:Which one among waves carry the maximum energy per photon?");
        printf("\n1:X-Rays          2:Radio waves\n3:Light Waves     4:Microwaves\n");
        scanf("%d",&opt);
    if(opt==1)
     {
         printf("Right Answer %s\n",&str);
         a++;

     }
    else{}
                                // 50-50 FOR 6


        if(opt==5050)
        {
            if(x==0)
            {
            printf("\n\n1:X-Rays     2:\n3:           4:Microwaves\n");
            scanf("%d",&ans);
            x++;
            if(ans==1)
                {
                printf("Right Answer %s,$2500\n",&str);
                a++;
                }

            else
                {
                printf("wrong, but the answer is X-Rays");
                }
            }
            else{}
        }
        else{}
                        //EXPERT ADVICE FOR 6


        if(opt==100)
        {
            if(y==0)
            {
            printf("The Expert thinks that the answer is X-Rays(Because of Maximum Frequency)\n");
            scanf("%d",&eaans);
            if(eaans==1)
                {
                printf("Right Answer %s,$2500\n",&str);
                a++;

                }
            else{}
            }
            else{}
        }
        else{}

}
                            //QUESTION 7


if(a>5)
{
        printf("\n\nQ7:Which of the following vitamins has a role in blood clotting?");
        printf("\n1:Vitamin-A     2:Vitamin-D\n3:Vitamin-E     4:Vitamin-K\n");
        scanf("%d",&opt);
    if(opt==4)
     {
         printf("\nRight Answer %s,$5000\n",&str);
         a++;
    }

    else{}

                            // 50-50 FOR 7

        if(opt==5050)
        {
            if(x==0)
            {
            printf("\n\n1:Vitamin-A     2:\n3:              4:Vitamin-K\n");
            scanf("%d",&ans);
            x++;
            if(ans==4)
                {
                printf("\nRight Answer %s,$5000\n",&str);
                a++;
                }

            else
                {
                printf("\nWrong Answer %s,Vitamin-K plays an essential role in clotting of bloods ",&str);
                }
            }
            else{}
        }
        else{}
                            //EXPERT ADVICE FOR 7

                if(opt==100)
            {
                if(y==0)
                {
                printf("\nThe Expert say thinks that the answer is Vitamin-K plays an essential role in clotting of bloods.\n");
                scanf("%d",&eaans);
                y++;
                if(eaans==4)
                {
                    printf("\nRight Answer %s,$5000\n",&str);
                    a++;
                }
                else{}
                }
                else{}

            }
            else{}
}
                            //QUESTION 8
if(a>6)
{
        printf("\n\nQ8:The term 'Probiotic' is applied to?");
        printf("\n1:organic food     2:Antacid\n3:Antibiotic       4:live microbial food supplement\n");
        scanf("%d",&opt);
        if(opt==4)
        {
         printf("\nRight Answer %s, $10000",&str);
         a++;
        }

    else{}
                                // 50-50
    if(opt==5050)
        {
            if(x==0)
            {
            printf("\n1:Organic Food      2:\n3:                  4:Live Microbial Food Supplement\n");
            scanf("%d",&ans);
            x++;
            if(ans==4)
                {
                printf("\nRight Answer %s, $10000",&str);
                a++;
                }
            else
                {
            printf("\nWrong Answer %s,The term 'Probiotic' is refuse to live microbial food supplement",&str);
                }
            }
            else{}
        }
        else{}
                        //EXPERT ADVICE


    if(opt==100)
            {
                if(y==0)
                {
                printf("The Expert say thinks that the answer is The term 'Probiotic' is refuse to live microbial food supplement\n");
                scanf("%d",&eaans);
                y++;
                if(eaans==4)
                    {
                    printf("\nRight Answer %s, $10000",&str);
                    a++;

                    }
                else
                    {
                printf("Wrong Answer %s,The term 'Probiotic' is refuse to live microbial food supplement",&str);
                    }
                }
                else{}

            }
            else{}
}
                        //QUESTION 9


if(a>7)
{
       printf("\n\nQ9:Which one is the First Search Engine?");
       printf("\n1:Google        2:Archie\n3:Altavista     4:WAIS\n");
       scanf("%d",&opt);
       if(opt==2)
       {
           printf("\nRight Answer %s,$25000 are on their way ",&str);
           a++;
       }
       else{}
                        //5050 FOR 9

       if(opt==5050)
       {
           if(x==0)
           {
            printf("\n1:                2:Archie\n3:                4:WAIS\n");
            scanf("%d",&ans);
            x++;
           if(ans==2)
                {
                printf("\nRight Answer %s,$25000 are on their way ",&str);
                a++;
                }
           else{}
           }
           else{}
       }
        else{}
                        //EXPERT ADVICE FOR 9


        if(opt==100)
        {
            if(y==0)
            {
            printf("The EXPERT says the answer is Archie %s",&str);
            scanf("%d",eaans);
            y++;
            if(eaans==2)
                {
                printf("Right Answer %s,$25000 are on their way ",&str);
                a++;
                }
            else{}
            }
            else{}
        }
        else{}
}

                        //QUESTION 10

;if(a>8)
{
    printf("\n\nQ10:Who among the following Won the Player of the Year of FIFA 2019?");
    printf("\n1:Lionel Messi    2:Cristiano Ronaldo\n3:Neymar Jr.      4:Virgil van Dijk\n");
    scanf("%d",&opt);
    if(opt==1)
    {
        printf("\nRight Answer %s,$50000 WOW ",&str);
        a++;
    }
    else{}
                        //50-50 FOR 10

    if(opt==5050)
    {
        if(x==0)
        {
        printf("\n1:Lionel Messi     2:\n3:Neymar Jr.       4:\n");
        scanf("%d",&ans);
        x++;
        if(ans==1)
            {
            printf("\nRight Answer %s,$50000 WOW ");
            a++;
            }
        else{}
        }
        else{}
    }
    else{}
                        //EXPERT ADVICE 10

    if(opt==100)
    {
        if(y==0)
        {
        printf("\nThe EXPERT says one of the most talented and skilled Lionel Messi ");
        scanf("%d",&eaans);
        y++;
        if(eaans==1)
            {
            printf("\nRight Answer %s,$50000 WOW ");
            a++;
            }
        else{}
        }

    }
    else{}

}
                        //QUESTION 11
if(a>9)
{
        printf("\n\nQ11:Which is the most Expensive Processor in Smart Phone? ");
        printf("\n1:Media Helio G90T       2:Qualcomm Snapdragon 712\n3:Media Helio P95        4:Qualcomm Snapdragon 855\n");
        scanf("%d",&opt);
        if(opt==4)
        {
        printf("\nRight Answer %s,$100000,You got it!! ");
        a++;
        }
        else{}
                        //50-50 FOR 11

        if(opt==5050)
        {
            if(x==0)
            {
            printf("\n1:                    2:\n3:Helio P95           4:Qualcomm Snapdragon 855\n");
            scanf("%d",&ans);
            x++;
            if(ans==4)
                {
                printf("\nRight Answer %s,$100000,You got it!! ");
                a++;
                }
            else{}
            }
            else{}
        }
        else{}
                        //EXPERT ADVICE FOR 11


        if(opt==100)
        {
            if(y==0)
            {
            printf("\nThe EXPERT says that Qualcomm Snapdragon 855 is the most Expensive in the Market\n Which is comed before anyone else for 5G Network ");
            scanf("%d",&eaans);
            y++;
            if(eaans==4)
                {
               printf("\nRight Answer %s,$100000,You got it!! ",&str);
                a++;
                }
            else{}
            }
            else{}
        }
        else{}
}
                        //QUESTION 12

if(a>10)
{
       printf("\n\nQ12:Who is our 7th Guru of Sikhism?");
       printf("\n1:Guru Har Rai Sahib ji        2:Guru Har Gobind Sahib ji\n3:Gur Har Krishan Sahib ji     4:Guru Arjan Dev Sahib ji\n");
       scanf("%d",&opt);
       if(opt==1)
       {
           printf("\nProudly to see You've didn't Forget it,Heartly Respect 'LOUDLY CLAPPING FOR YOU',If I have in Real $500000\n I would have gave $500000 but this is my Project My Dear");
           a++;
       }
       else
        {
        printf("\nSuch an Disgrace in my Eyes, Didn't Expected from you,You know Technology but don't know that\nHe was the one notable for Maintaining the large army of Sikh Soldiers,yet avoiding Military conflict\n ,  Anyways You've Lost it ");
        }
}
    if(a>11)
    {
     printf("\nLovely to see how much Aware Person you're in our Daily going life,Nice to be with you this Time ");
    }
}
