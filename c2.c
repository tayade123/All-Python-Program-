#include<stdio.h>
int main()

{
    int ans,Ans,g,h,i,age,min,win;
    char aname[3],bname[30];
    printf("\t  <<< welcome >>>\n");
    printf("\t  ^^^ Lest Play ^^^\n");
    printf("\t  $$$ Kaun Banega Crorepati $$$\n");
    printf("\t  Enter Your Name : ");
    scanf("%s",bname);

    printf("\t  To Chliye Shuru Karatehe \n");
    printf("\t  Your Ready :\n");
    printf("\t  Yes/No :");
    scanf("%s",aname);


    printf("\t  Q.1 india richest city ? \n");
    printf("\t  1. Surat \n");
    printf("\t  2. Ahemdabad \n");
    printf("\t  3. Pune \n");
    printf("\t  4. Mumbai \n");
    printf("\t  enter your ans : ");
     scanf("\t  %d",&ans);
    for ( i = 0; i < 1 ; i++)
    {
        printf("\t",i);
    
    if (ans==4)
    {
        printf("\t Your Ans Is Right\n");
        printf("\t  ****crogchulestion****\n");

        
    }
     else
     {
        printf("\t  Your Ans Is Rong\n");
        printf("\t  No Problem Lest Play\n");
        printf("\t  ^^^ GAME OVER ^^^\n");
         break;
     }     
        
      printf("\n");
     printf("\t  Q.2 Gujarat Richest City ? \n");
     printf("\t  1. Surat \n");
     printf("\t  2. Ahemdabad \n");
     printf("\t  3. Rajkot \n");
     printf("\t  4. Baroda \n");
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);

     if (ans==2)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion****\n");
           
        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }
         
           printf("\n");

     printf("\t  Q.3 Gujarat Most Populer Langugae ? \n");
     printf("\t  1. Gujarati \n");
     printf("\t  2. Marathi \n");
     printf("\t  3. Hindi \n");
     printf("\t  4. Marvadi \n");
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);
    
    if (ans==1)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion*****\n");
        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }
        printf("\n");

     printf("\t  Q.4 National Science Day ? \n");
     printf("\t  1. Jan-12 \n");
     printf("\t  2. Feb-28 \n");
     printf("\t  3. March-19 \n");
     printf("\t  4. Feb-31 \n");
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);
      if (ans==2)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion*****\n");
        
        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
       
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }

        printf("\n");

     printf("\t  Q.5 India Republic Day ? \n");
     printf("\t  1. Augest-15 \n");
     printf("\t  2. Feb-29 \n");
     printf("\t  3. Jan-26 \n");
     printf("\t  4. Dec-31 \n");
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);

      if (ans==3)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion*****\n");
           
        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
        
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }

         printf("\n");

    

        printf("\n");

     printf("\t  Q.6 Find My Age ? \n");
     printf("\t  the presnat year: ");
     scanf("\t%d",&g);
     printf("\t  the birth year : ");
     scanf("\t%d",&h);

    min=g-h;
    printf(" \tYour AGE : %d-%d=%d\n",g,h,min);
    
     
    

      if (min>=18)
        {
            printf("\t  your voting vlid \n");
            printf("\t  ****crogchulestion*****\n");
          
        }
        
        else
        {
            printf("\t  Your voting not vild\n");

            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }


        printf("\n");

     printf("\t  Q.7 How Many colour in cubes ? \n");
     printf("\t  1. 2 \n");   
     printf("\t  2. 4 \n"); 
     printf("\t  3. 6 \n"); 
     printf("\t  4. 8 \n"); 
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);

       if (ans==3)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion*****\n");
          
        
        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
          
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }

        printf("\n");

     printf("\t  Q.8 Gujart and Maharashtra created date ? \n");
     printf("\t  1. 1 may 1959 \n");   
     printf("\t  2. 3 mar 1958 \n"); 
     printf("\t  3. 2 feb 1958 \n"); 
     printf("\t  4. 1 may 1960 \n"); 
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);

       if (ans==4)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion*****\n");
           
        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
          
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }

         printf("\n");

     printf("\t  Q.9 india Big Budget Movie ? \n");
     printf("\t  1. Saaho \n");   
     printf("\t  2. Bhubali 2 \n"); 
     printf("\t  3. 2.0 \n"); 
     printf("\t  4. Tanhaji \n"); 
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);

       if (ans==3)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion*****\n");
         

        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
          
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
               break;
        }

printf("\n");

     printf("\t  Q.10 which is the no 1 movie in india ? \n");
     printf("\t  1. Bahubali \n");   
     printf("\t  2. Bhubali 2 \n"); 
     printf("\t  3. 2.0 \n"); 
     printf("\t  4. Dangal \n"); 
     printf("\t  enter your ans : ");
      scanf("\t  %d",&ans);

       if (ans==4)
        {
            printf("\t  Your Ans Is Right\n");
            printf("\t  ****crogchulestion*****\n");
           
        }
        
        else
        {
            printf("\t  Your Ans Is Rong\n");
          
            printf("\t  No Problem Lest Play\n");
            printf("\t  ^^^ GAME OVER ^^^\n");
            break;
       }
          }
 printf("\n");   
    return 0;
}