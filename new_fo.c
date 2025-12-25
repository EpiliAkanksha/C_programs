typedef struct MenuItem{
    int itemID;
    char itemName[50];
    float price;
    int available_quantity;
} MenuItem;

int show_menu()
{	
	int choice;
	printf("1. Display FoodItems\n");
    printf("2. Place an Order\n");
    printf("3. View Orders\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;    
}
void disp_food_items() 
{
	int i;
    printf("\n===== Menu =====\n");
    for (i = 0; i < MAX_ITEMS && menu[i].itemID != 0; i++)
	{
        printf("ID: %d - %s - Rs. %.2f  stock available - %4d\n", menu[i].itemID, menu[i].itemName, menu[i].price, menu[i].available_quantity);
    }
}
int main()
{
	int ch;
	
	while(1) // for(;;) //infinite loop
	{
		printf("\n===== Food Order Management System =====\n");
		ch=show_menu();
		switch(ch)
		{
			case 1: disp_food_items();
				break;
			case 2: place_order();
				break;
			case 3:
					view_order();
					break;
			case 4: exit(0);
			default:
				printf("Invalid choice");
		}
	}
	return 0;
}
