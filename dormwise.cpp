#include <iostream>
#include <string>
#include <vector>
using namespace std;

    struct Account {
        string username;
        string password;
    };

    bool loginPanel() {
        vector<Account> accounts = {{"tyrone", "2122008"}};

        while (true) {
            int choice;
            cout << "\n1. Sign in" << endl;
            cout << "2. Sign up" << endl;
            cout << "3. Exit" << endl;
            cout << "Choose an option: ";
            if (!(cin >> choice)) {
                return false;
            }

            if (choice == 1) {
                string username;
                string password;
                cout << "Enter Username: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> password;

                bool credentialsMatch = false;
                for (const Account& account : accounts) {
                    if (account.username == username && account.password == password) {
                        credentialsMatch = true;
                        break;
                    }
                }

                if (credentialsMatch) {
                    cout << "Logged in Successfully." << endl;
                    cout << "Welcome to Dormitory Analysis System" << endl;
                    return true;
                }

                cout << "Invalid Credentials. Please try again." << endl;
            } else if (choice == 2) {
                string username;
                string password;
                cout << "Choose a Username: ";
                cin >> username;

                bool usernameTaken = false;
                for (const Account& account : accounts) {
                    if (account.username == username) {
                        usernameTaken = true;
                        break;
                    }
                }

                if (usernameTaken) {
                    cout << "That username is already taken." << endl;
                    continue;
                }

                cout << "Choose a Password: ";
                cin >> password;
                accounts.push_back({username, password});
                cout << "Account created. You can now sign in." << endl;
            } else if (choice == 3) {
                return false;
            } else {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    void displayMainMenu() {
        cout << "\nDormitory Management System" << endl;
        cout << "1. Rooom Occupancy & Stay Management" << endl;
        cout << "2. Tenant Management" << endl;
        cout << "3. Payment Management" << endl;
        cout << "4. Maintenance Management" << endl;
        cout << "5. Search" << endl;
        cout << "6. Analytics/Reports" << endl;
        cout << "7. Exit" << endl;
    }

    int displayRoomOccupancyStayManagementMenu() {
        int choice;
        cout << "Room Occupancy & Stay Management" << endl;
        cout << "1. Add Room" << endl;
        cout << "2. View all Rooms" << endl;
        cout << "3. View Available Rooms" << endl;
        cout << "4. View Occupied Rooms" << endl;
        cout << "5. View Room Details" << endl;
        cout << "6. Update Room" << endl;
        cout << "7. Back to Main Menu" << endl;
        cout << "8. Check-in Tenant" << endl;
        cout << "9. Check-out Tenant" << endl;
        cout << "10. View Occupancy Details" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }

    int displayTenantManagementMenu() {
        int choice;
        cout << "Tenant Management" << endl;
        cout << "1. Add Tenant" << endl;
        cout << "2. View all Tenants" << endl;
        cout << "3. View Tenant Details" << endl;
        cout << "4. Update Tenant Details" << endl;
        cout << "5. Remove Tenant" << endl;
        cout << "6. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }


    int displayPaymentManagementMenu() {
        int choice;
        cout << "Payment Management" << endl;
        cout << "1. Record Payment" << endl;
        cout << "2. View Payment History" << endl;
        cout << "3. Generate Invoice" << endl;
        cout << "4. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }

    int displayMaintenanceManagementMenu() {
        int choice;
        cout << "Maintenance Management" << endl;
        cout << "1. Report Maintenance Issue" << endl;
        cout << "2. View Maintenance Requests" << endl;
        cout << "3. Update Maintenance Status" << endl;
        cout << "4. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }

    int displaySearchMenu() {
        int choice;
        cout << "Search" << endl;
        cout << "1. Search by Room Number" << endl;
        cout << "2. Search by Tenant Name" << endl;
        cout << "3. Search by Occupancy Status" << endl;
        cout << "4. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }

    int displayAnalyticsReportsMenu() {
        int choice;
        cout << "Analytics/Reports" << endl;
        cout << "1. Occupancy Rate Analysis" << endl;
        cout << "2. Revenue Analysis" << endl;
        cout << "3. Tenant Demographics Analysis" << endl;
        cout << "4. Back to Main Menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }
int main() {
    int choice = 0;
    int submenuChoice = 0;
    if (!loginPanel()) {
        return 0;
    }
    while (choice != 7) {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                 submenuChoice = displayRoomOccupancyStayManagementMenu();
                     switch (submenuChoice) {
                        case 1:
                            cout << "Add Room" << endl;
                            break;
                        case 2:
                            cout << "View Room Details:\n" << endl;
                            cout << "Room Number: 101" << endl;
                            cout << "Room Type: Single" << endl;
                            cout << "Occupancy Status: Occupied" << endl;
                            cout << "Tenant Name: John Doe" << endl;

                            cout << "Room Number: 102" << endl;
                            cout << "Room Type: Double" << endl;
                            cout << "Occupancy Status: 1 Slot Available" << endl;
                            cout << "Tenant Name: Jane Smith" << endl;
                            break;
                        case 3:
                            cout << "View Available Rooms" << endl;
                            break;
                        case 4:
                            cout << "View Occupied Rooms" << endl;
                            break;
                        case 5:
                            cout << "View Room Details" << endl;
                            break;
                        case 6:
                            cout << "Update Room" << endl;
                            break;
                        case 7:
                            cout << "Back to Main Menu" << endl;
                            break;
                        case 8:
                            cout << "Check-in Tenant" << endl;
                            break;
                        case 9:
                            cout << "Check-out Tenant" << endl;
                            break;
                        case 10:
                            cout << "View Occupancy Details" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                     }
                break;
            case 2:
                 submenuChoice = displayTenantManagementMenu();
                     switch (submenuChoice) {
                        case 1:
                            cout << "Add Tenant" << endl;
                            break;
                        case 2:
                            cout << "View all Tenants" << endl;
                            break;
                        case 3:
                            cout << "View Tenant Details" << endl;
                            break;
                        case 4:
                            cout << "Update Tenant Details" << endl;
                            break;
                        case 5:
                            cout << "Remove Tenant" << endl;
                            break;
                        case 6:
                            cout << "Back to Main Menu" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                     }
                break;
            case 3:
                 submenuChoice = displayPaymentManagementMenu();
                     switch (submenuChoice) {
                        case 1:
                            cout << "Record Payment" << endl;
                            break;
                        case 2:
                            cout << "View Payment History" << endl;
                            break;
                        case 3:
                            cout << "Generate Invoice" << endl;
                            break;
                        case 4:
                            cout << "Back to Main Menu" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                     }
                break;
            case 4:
                 submenuChoice = displayMaintenanceManagementMenu();
                     switch (submenuChoice) {
                        case 1:
                            cout << "Report Maintenance Issue" << endl;
                            break;
                        case 2:
                            cout << "View Maintenance Requests" << endl;
                            break;
                        case 3:
                            cout << "Update Maintenance Status" << endl;
                            break;
                        case 4:
                            cout << "Back to Main Menu" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                     }
                break;
            case 5:
                 submenuChoice = displaySearchMenu();
                     switch (submenuChoice) {
                        case 1:
                            cout << "Search by Room Number" << endl;
                            break;
                        case 2:
                            cout << "Search by Tenant Name" << endl;
                            break;
                        case 3:
                            cout << "Search by Occupancy Status" << endl;
                            break;
                        case 4:
                            cout << "Back to Main Menu" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                     }
                break;
            case 6:
                 submenuChoice = displayAnalyticsReportsMenu();
                     switch (submenuChoice) {
                        case 1:
                            cout << "Occupancy Rate Analysis" << endl;
                            break;
                        case 2:
                            cout << "Revenue Analysis" << endl;
                            break;
                        case 3:
                            cout << "Tenant Demographics Analysis" << endl;
                            break;
                        case 4:
                            cout << "Back to Main Menu" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                     }
                break;
            case 7:
                cout << "Exiting the system." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}