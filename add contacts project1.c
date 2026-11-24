#include <stdio.h>

int main()
{
    char name[100][50], phone[100][15];
    char search[50];
    int choice, count = 0, i, j, found;

    while (1)
    {
        printf("\n1. Add Contact");
        printf("\n2. View Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s", name[count]);

                printf("Enter Phone: ");
                scanf("%s", phone[count]);

                count++;

                printf("Contacts added successfully!\n");
                break;

            case 2:
                for (i = 0; i < count; i++)
                {
                    printf("\nName: %s", name[i]);
                    printf("\nPhone: %s\n", phone[i]);
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf("%s", search);

                found = 0;

                for (i = 0; i < count; i++)
                {
                    j = 0;

                    while (search[j] == name[i][j] &&
                           search[j] != '\0')
                    {
                        j++;
                    }

                    if (search[j] == '\0' &&
                        name[i][j] == '\0')
                    {
                        printf("\nContact Found!\n");
                        printf("Name: %s\nPhone: %s\n",
                               name[i], phone[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("\nContact Not Found!\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
