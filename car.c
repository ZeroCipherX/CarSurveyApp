#include <stdio.h>

struct veh {
    char veh_name[50];
    char engine[50];
    char fuel_type[50];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

void car() {
    struct veh car;

    printf("Name of car: ");
    scanf("%49s", car.veh_name);
    getchar(); // Consume the newline

    printf("Name of engine: ");
    scanf("%49[^\n]", car.engine);
    getchar(); // Consume the newline

    printf("Fuel type: ");
    scanf("%49[^\n]", car.fuel_type);
    getchar(); // Consume the newline

    printf("Fuel tank cap: ");
    scanf("%d", &car.fuel_tank_cap);
    getchar(); // Consume the newline

    printf("What is the seating cap: ");
    scanf("%d", &car.seating_cap);
    getchar(); // Consume the newline

    printf("What is the mileage of the car: ");
    scanf("%f", &car.city_mileage);
    getchar(); // Consume the newline

    printf("G— for good\nB— for bad\nRate the car: ");
    char rate;
    getchar(); // Consume the newline
    scanf(" %c", &rate);

    if (rate == 'G' || rate == 'g') {
        printf("Name of car: %s\n", car.veh_name);
        printf("Engine of car: %s\n", car.engine);
        printf("Car uses only %s\n", car.fuel_type);
        printf("The fuel tank can hold %d liters\n", car.fuel_tank_cap);
        printf("The car has a total of %d seats\n", car.seating_cap);
        printf("The car has a mileage of %f\n", car.city_mileage);
    } else {
        printf("\nYou rated the car bad, so I guess it's a bad car after all.\n");
    }
}

int main() {
    printf("Try this Car survey\n");
    car();
    return 0;
}
