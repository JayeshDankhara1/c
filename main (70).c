#include <stdio.h>
#include <time.h>
#include <string.h>

// Declare and define the array 'dis'
const char *dis[] = {"CHEESE BURGER", "BEEF BURGER", "CHICKEN BURGER", "VEGETABLE BURGER", "FISH BURGER"};

struct Item {
    char name[20];
    int quantity;
    int rate;
    int amount;
};

struct Order {
    char customer_name[50];
    struct Item items[50];
    int count;
    float total_amount;
    float cgst;
    float sgst;
    float discount;
    float net_amount;
};

void date(char *date_string) {
    time_t current_time = time(NULL);
    strftime(date_string, 20, "%d-%m-%y", localtime(&current_time));
}

int fRate(int index) {
    switch (index) {
        case 1:
            return 100;
        case 2:
            return 60;
        case 3:
            return 120;
        case 4:
            return 90;
        case 5:
            return 130;
        default:
            return 0;
    }
}

float fdiscount(float Amount) {
    if (Amount >= 500) {
        return Amount * 0.10;
    }
    return 0;
}

void initializeOrder(struct Order *order) {
    order->count = 0;
    order->total_amount = 0;
    order->cgst = 0;
    order->sgst = 0;
    order->discount = 0;
    order->net_amount = 0;
}

void addItem(struct Order *order, char *name, int quantity, int rate, int amount) {
    struct Item item;
    strcpy(item.name, name);
    item.quantity = quantity;
    item.rate = rate;
    item.amount = amount;
    order->items[order->count++] = item;
    order->total_amount += amount;
}

void printReceipt(struct Order *order, char *customer_name, char *date_string) {
    printf("----------------");
    printf("Bill Receipt");
    printf("-----------------\n");
    printf("Customer Name: %s\n", customer_name);
    printf("Billing Date: %s\n", date_string);
    printf("---------------------------------------------\n");
    printf("|%20s|%5s|%5s|%10s|\n", "Description", "Qty", "Rate", "Amount");
    printf("---------------------------------------------\n");

    for (int i = 0; i < order->count; i++) {
        struct Item item = order->items[i];
        printf("|%d. %17s|%5d|%5d|%10d|\n", i + 1, item.name, item.quantity, item.rate, item.amount);
    }

    printf("---------------------------------------------\n");
    printf("|%32s|%10.2f|\n", "Total Amount", order->total_amount);
    printf("|%32s|%10.2f|\n", "SGST 9 %", order->cgst);
    printf("|%32s|%10.2f|\n", "CGST 9 %", order->sgst);
    printf("|%32s|%10.2f|\n", "Discount Amount", order->discount);
    printf("|%32s|%10.2f|\n", "Net Amount", order->net_amount);
    printf("---------------------------------------------\n");
}

int main() {
    struct Order order;
    initializeOrder(&order);

    char customer_name[50];
    printf("Enter Your Customer Name: ");
    fgets(customer_name, sizeof(customer_name), stdin);
    strtok(customer_name, "\n");

    char date_string[20];
    date(date_string);

    int choice;
    do {
        printf("1. CHEESE BURGER\n2. BEEF BURGER\n3. CHICKEN BURGER\n4. VEGETABLE BURGER\n5. FISH BURGER\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int quantity;
        printf("Enter Quantity: ");
        scanf("%d", &quantity);

        int rate = fRate(choice);
        int amount = rate * quantity;

        addItem(&order, dis[choice - 1], quantity, rate, amount);

        printf("Enter 1 to add more items or 0 to finish: ");
        scanf("%d", &choice);
    } while (choice != 0);

    order.discount = fdiscount(order.total_amount);
    order.cgst = 0.09 * order.total_amount;
    order.sgst = 0.09 * order.total_amount;
    order.net_amount = order.cgst + order.sgst + order.total_amount - order.discount;

    printReceipt(&order, customer_name, date_string);

    return 0;
}
