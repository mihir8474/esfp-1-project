#include <stdio.h>

#include <string.h>

int main ()

{
 printf("======================================================================================================================\n");
 printf("                                                NAME: MIHIR RAMI\n"                                   );
 printf("                                                BRANCH:CS\n"                                            );
 printf("                                                ER-NO.:CS25\n"                                          );
 printf("                                                ESFP-1 PROJECT\n"                                        );
 printf("                                                INFORMATION ABOUT UNIFORM OF ARMED FORCES\n"                                           );
 printf("                                               For year 2022-2023\n"                                           );
 printf("=======================================================================================================================\n");


char id[50];

User:

printf("Enter your id:\n");

scanf("%s", &id);

if (strcmp(id,"admin")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"admin1122")==0)

{

printf("You have successly loged in.\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}
 int choice = -1;
    printf("\n\n\n\tINFORMATION ABOUT UNIFORMS IN ARMED FORCES.\n\n\t");
    
    // Menu display
    printf("\nMENU:\n1. General Duty Uniform\n2. Combat Uniform\n3. NSG Uniforms\n4. EXIT");
    
    // Flag variable for termination of loop
    int flag = 1;
    
    // Infinite Loop for choice input
    while(flag){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        
        // Switch statements
        switch(choice){
            case 1:
                printf("> The General Duty dresses are more of the regular uniforms worn by the Indian army. Most often you will see any Indian army personnel in this uniform\n");
                break;
            case 2:
                printf("> This is one of the commonly recognized uniforms of the Indian army.\n");
                printf("This uniform is known as the combat uniform and is generally to camouflage in the jungles that is why this uniform is also known as the Jungle dress.\n");
                break;
            case 3:
                printf("> The dress color is enough to estimate its weightage.\n ");
                printf("> The Black dress is no usual uniform. This uniform can only be earned with high spirit and fortitude.\n");
                printf("> The men in black are the agitators. They are the spark plug of the Indian Army. The officers and men of the Armoured Corps, the NSG, and alike wears the black dress.\n ");
                break;
                 case 4:
                printf("THANKS FOR VISITING!!!\n");
                flag = 0;  // To terminate the loop
                break;
            default:
                printf("> Invalid Input\n");
                break;
        }
    }

return 0;

}

