/**
 * @file contact_operations.h
 * @author Suriya P(18euee143@skcet.ac.in)
 * @brief Header file for contact management Application
 * @version 0.1
 * @date 2022-04-04
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _CONTACT_MANAGEMENT_OPERATIONS_H_
#define _CONTACT_MANAGEMENT_OPERATIONS_H_
/**
     /* ********Add new contacts*****  */
	//This case is used for Add a new Contact//
    case 1:

        system("cls");

        fp=fopen("contact.dll","a");

        for (;;)

        {
            fflush(stdin);

            printf("To Exit Enter Blank Space in the Name Input\nName (Use identical): ");

            scanf("%[^\n]",&list.name);

            if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)

                break;

            fflush(stdin);

            printf("Phone: ");

            scanf("%ld",&list.ph);

            fflush(stdin);

            printf("Address: ");

            scanf("%[^\n]",&list.add);

            fflush(stdin);

            printf("Email Address: ");

            gets(list.email);

            printf("\n");

            fwrite(&list,sizeof(list),1,fp);

        }

        fclose(fp);

        break;

        /* ********list of contacts********  */
	//This case is used for List all Contact//