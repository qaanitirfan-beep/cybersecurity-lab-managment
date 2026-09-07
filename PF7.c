#include <stdio.h>

int main()
{
    char labname[50];
    int computers, networkdevices, securitytools;
    float computerprice, deviceprice, softwarecost;
    float computercost, networkcost, totalcost;

    printf("Enter Lab Name:\n ");
    scanf(" %s", labname);
    printf("Enter Number of Computers: \n");
    scanf("%d", &computers);
    printf("Enter Number of Network Devices:\n ");
    scanf("%d", &networkdevices);
    printf("Enter Number of Security Tools: \n");
    scanf("%d", &securitytools);
    printf("Enter Cost Per Computer:\n ");
    scanf("%f", &computerprice);
    printf("Enter Cost Per Network Device: \n");
    scanf("%f", &deviceprice);
    printf("Enter Annual Security Software Cost: \n");
    scanf("%f", &softwarecost);

    computercost = computers * computerprice;
    networkcost = networkdevices * deviceprice;
    totalcost = computercost + networkcost + softwarecost;

    printf("\n=====================================\n");
    printf("      CYBERSECURITY LAB REPORT\n");
    printf("=====================================\n");
    printf("Lab Name          : %s\n", labname);
    printf("Computers         : %d\n", computers);
    printf("Network Devices   : %d\n", networkdevices);
    printf("Security Tools    : %d\n\n", securitytools);
    printf("Computer Cost     : %.2f\n", computercost);
    printf("Network Cost      : %.2f\n", networkcost);
    printf("Software Cost     : %.2f\n", softwarecost);
    printf("-------------------------------------\n");
    printf("Total Investment  : %.2f\n", totalcost);
    printf("-------------------------------------\n");

    return 0;
}
