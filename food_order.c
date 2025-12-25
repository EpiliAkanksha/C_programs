#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 10

#define MAX_ORDERS 3

// Structure for Menu Items
typedef struct MenuItem  {
    int itemID;
    char itemName[50];
    float price;
    int available_quantity;
} MenuItem;

// Structure for Orders  50 + 8 + 4 + 4 +4 +4 +20 = 94 bytes memory
typedef struct Order {
	char cust_name[50];  
    long int mobile_number;
    int orderID;
    int itemID;
    int quantity;
    float total;
    char status[20];
    
} Order;

// Global Variables
MenuItem menu[MAX_ITEMS]; // array  // named macro
Order    orders[MAX_ORDERS];

int orderCount =0; //global variable

char cust_name[50]; //  string is defined using char array
long int mobile_number; // global variables
// Function Prototypes
void initializeMenu();
void displayMenu();
void takeOrder();
void displayOrders();
void calculateBill(Order *order);
int show_menu();
void show_order_history();
int show_options();
int main() // Driver code 
{
    int choice,i;
    char mno[11];
    initializeMenu();
    
    printf("<< WELCOME TO FOOD COURT >> \n");
    printf("\n~~ Login Details ~~\n");
    printf("Enter customer name: ");
    scanf("%[^\n]s",cust_name);  
    fflush(stdin);
    //fgets(cust_name,50,stdin);                     // multiple word input
    
	mobile_number = atol(mno); // atol converts string to long integer and it is a builtin function.
    for(;;)//while (1) 
	{
        printf("\n===== Food Order Management System =====\n");
        choice=show_options();

        switch (choice) 
		{
            case 1:
                displayMenu();
                break;
            case 2:
                takeOrder();
                break;
            case 3:
                displayOrders();
                break;
            case 4:
            	show_order_history();
                break;                
            case 5:  
				printf("Exiting system.\n");
                exit(0);              
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void show_order_history() 
{
	int sno=0;
    Order rec;
    FILE *fp = fopen("new_order.txt", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }
    printf("\nS.No\tCustName\tMobileNumber\t\tOrderID\t\tItemID\t\tQty\tPrice\tStatus\n");
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
	while (fread(&rec, sizeof(rec), 1, fp) == 1) 
	{
        printf("%d\t%s\t%ld\t\t%d\t\t%d\t\t%d\t%.2f\t\t%s\n", ++sno,rec.cust_name, rec.mobile_number,
               rec.orderID, rec.itemID, rec.quantity, rec.total, rec.status);
    }
    fclose(fp);
}
void update_order_history(Order *order) 
{
	// file opening modes ( r, w , a)
	//       binary file rb,wb,ab
    FILE *fp = fopen("new_order.txt", "ab");
    if (fp == NULL) {
        perror("Error updating order history");
        return;
    }
    // write record
    if (fwrite(order, sizeof(Order), 1, fp) != 1) {
        perror("Error writing order to file");
    }
    else
    {
    	printf("\n Rec updated in file");
	}
    fclose(fp);
}

int show_options()
{	
	int choice;
	printf("1. Display FoodItems\n");
    printf("2. Place an Order\n");
    printf("3. View Orders\n");
    printf("4. Order History.\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;    
}

void initializeMenu() 
{
    // Sample Menu Initialization
             /*
               itemID; itemName[50];price; available_quantity;
                4  + 50 + 4 + 4 = 62 bytes
             */
    menu[0] = (MenuItem){1, "Burger",250.00,100};
    menu[1] = (MenuItem){2, "Pizza", 300.00,125};
    menu[2] = (MenuItem){3, "Pasta", 150.50,200};
    menu[3] = (MenuItem){4, "Salad", 100.00,300};
    menu[4] = (MenuItem){5, "Rolls", 80.00,20};
}

void displayMenu() 
{
	int i;
    printf("\n===== Menu =====\n");
    for (i = 0; i < MAX_ITEMS ; i++)
	{
		if(menu[i].itemID==0)
			break;
        printf("ID: %d - %s - Rs. %.2f  stock available - %4d\n", menu[i].itemID, menu[i].itemName, menu[i].price, menu[i].available_quantity);
    }
}

void takeOrder() 
{
    if (orderCount >= MAX_ORDERS) 
	{
        printf("Order limit reached! Cannot place more orders.\n");
        return;
    }
    int itemID, quantity;
    int itemFound = 0;
    int i;
    Order *order = &orders[orderCount];
    order->orderID = orderCount + 1;

    displayMenu();
    
   	strcpy(order->cust_name,cust_name);
   
    order->mobile_number=mobile_number;
    printf("Enter the item ID you want to order: ");
    scanf("%d", &itemID);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    
	
    // Validate item ID and set order details
    //linear search
    for ( i = 0; i < MAX_ITEMS; i++) 
	{
        if (menu[i].itemID == itemID) 
		{
            itemFound = 1;
            if(quantity > menu[i].available_quantity)
    		{
    			printf("\n Required Quantity Not available.\n");
				order->orderID -= 1;// order cancelled
				break;
			}
			
            order->itemID = itemID;
            order->quantity = quantity;
            strcpy(order->status, "In-Progress");
            calculateBill(order);
            printf("Order placed successfully! and orderNo = %d\n",++orderCount);
            menu[i].available_quantity -= quantity;
            printf("\n Thank you for placing an order:) \n");
            update_order_history(order); // write to a file
            
			break;
        }
    }
    if (itemFound==0) 
	{
        printf("Invalid item ID. Order not placed.\n");
    }
}

void calculateBill(Order *order) {
	int i;
    // Calculate total based on quantity and item price
    for (i = 0; i < MAX_ITEMS; i++) 
	{
        if (menu[i].itemID == order->itemID)
		{
            order->total = menu[i].price * order->quantity;
            if(order->total >= 500)
            {
            	printf("\n Get one Coke coupon Free at Counter ");
			}
			else if(order->total >= 300)
			{		
            
            	printf("\n Get one French fries coupon Free at Counter ");
			
			}
			
            break;
        }
    }
    
    
}

void displayOrders() 
{
	int i;
    printf("\n===== Orders =====\n");
    if (orderCount == 0) {
        printf("No orders placed.\n");
    } 
	else 
	{
        for (i = 0; i < orderCount; i++)
		{
            printf("\n customer Name: %s | ",orders[i].cust_name);
            printf(" Mobile number: %ld | ",orders[i].mobile_number);
           	printf(" \n Order number: %d \n Item ID: %d \n Quantity: %d \n Total:  Rs. %.2f \n Status: %s\n",
                   orders[i].orderID, orders[i].itemID, orders[i].quantity, orders[i].total, orders[i].status);
        }
    }
}

