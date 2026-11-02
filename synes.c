#include <stdio.h>
#include <string.h>

 void admin_panel () {
    int pass;
    char user [50];

    while (1) {
        printf("Enter Username: ");
        scanf("%49s", user);
        printf("Enter Password: ");
        scanf("%d", &pass);

        if (strcmp(user, "tyrone") == 0 && pass == 2122008) {
            printf("Welcome to Dormitory Analysis System\n");
            break;
        } else {
            printf("Invalid Credentials. Please try again.\n\n");
        }
    }
         printf("Logged in Successfully.\n");
}                                                                                   

int main () {

    int pass, choice;
    char user [50];

    admin_panel();

    while (choice != 9) {
        printf("\nDormitory Management System\n");
        printf("1. Room Management\n");
        printf("2. Tenant Management\n");
        printf("3. Occupancy & Stay Management\n");
        printf("4. Payment Management\n");
        printf("5. Maintenance Management\n");
        printf("6. Search\n");
        printf("7. Analytics\n");
        printf("8. Reports\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Room Management\n");
                printf("1. Add Room\n");
                printf("2. View all Rooms\n");
                printf("3. View Available Rooms\n");
                printf("4. View Occupied Rooms\n");
                printf("5. View Room Details\n");
                printf("6. Update Room\n");
                printf("7. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Add Room\n");
                            break;
                        case 2:
                            printf("View all Rooms\n");
                            break;
                        case 3:
                            printf("View Available Rooms\n");
                            break;
                        case 4:
                            printf("View Occupied Rooms\n");
                            break;
                        case 5:
                            printf("View Room Details\n");
                            break;
                        case 6:
                            printf("Update Room\n");
                            break;
                        case 7:
                            printf("Exiting Room Management.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 2:
                printf("Tenant Management\n");
                printf("1. Add Tenant\n");
                printf("2. View all Tenants\n");
                printf("3. View Tenant Details\n");
                printf("4. Update Tenant Details\n");
                printf("5. Remove Tenant\n");
                printf("6. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Add Tenant\n");
                            break;
                        case 2:
                            printf("View all Tenants\n");
                            break;
                        case 3:
                            printf("View Tenant Details\n");
                            break;
                        case 4:
                            printf("Update Tenant Details\n");
                            break;
                        case 5:
                            printf("Remove Tenant\n");
                            break;
                        case 6:
                            printf("Exit Tenant Management.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 3:
                printf("Occupancy & Stay Management\n");
                printf("1. Check-in Tenant\n");
                printf("2. Check-out Tenant\n");
                printf("3. View Occupancy Details\n");
                printf("4. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Check-in Tenant\n");
                            break;
                        case 2:
                            printf("Check-out Tenant\n");
                            break;
                        case 3:
                            printf("View Occupancy Details\n");
                            break;
                        case 4:
                            printf("Exit Occupancy & Stay Management.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 4:
                printf("Payment Management\n");
                printf("1. Record Payment\n");
                printf("2. View Payment History\n");
                printf("3. Generate Invoice\n");
                printf("4. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Record Payment\n");
                            break;
                        case 2:
                            printf("View Payment History\n");
                            break;
                        case 3:
                            printf("Generate Invoice\n");
                            break;
                        case 4:
                            printf("Exit Payment Management.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 5:
                printf("Maintenance Management\n");
                printf("1. Report Maintenance Issue\n");
                printf("2. View Maintenance Requests\n");
                printf("3. Update Maintenance Status\n");
                printf("4. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Report Maintenance Issue\n");
                            break;
                        case 2:
                            printf("View Maintenance Requests\n");
                            break;
                        case 3:
                            printf("Update Maintenance Status\n");
                            break;
                        case 4:
                            printf("Exit Maintenance Management.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 6:
                printf("Search\n");
                printf("1. Search by Room Number\n");
                printf("2. Search by Tenant Name\n");
                printf("3. Search by Occupancy Status\n");
                printf("4. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Search by Room Number\n");
                            break;
                        case 2:
                            printf("Search by Tenant Name\n");
                            break;
                        case 3:
                            printf("Search by Occupancy Status\n");
                            break;
                        case 4:
                            printf("Exit Search.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 7:
                printf("Analytics\n");
                printf("1. Occupancy Rate Analysis\n");
                printf("2. Revenue Analysis\n");
                printf("3. Tenant Demographics Analysis\n");
                printf("4. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Occupancy Rate Analysis\n");
                            break;
                        case 2:
                            printf("Revenue Analysis\n");
                            break;
                        case 3:
                            printf("Tenant Demographics Analysis\n");
                            break;
                        case 4:
                            printf("Exit Analytics.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 8:
                printf("Reports\n");
                printf("1. Monthly Report\n");
                printf("2. Quarterly Report\n");
                printf("3. Annual Report\n");
                printf("4. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Monthly Report\n");
                            break;
                        case 2:
                            printf("Quarterly Report\n");
                            break;
                        case 3:
                            printf("Annual Report\n");
                            break;
                        case 4:
                            printf("Exit Reports.\n");
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                break;
            case 9:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
