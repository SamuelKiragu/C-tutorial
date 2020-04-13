#include<stdio.h>
void main()
{
    int choice;
    int perimeter, area;

    int radius;

    int length,width;

    int base,height,hypotenus;

    printf("Here is a list of the shapes you can get the area and perimeter for: \n");
    printf("1.circle \n");
    printf("2.rectangle \n");
    printf("3.right-angled rectangle");

    printf("Enter your choice : \n");
    scanf("%d", & choice);

  switch(choice)
    {
        case 1:

            printf("Enter the radius of the circle -> ");
            scanf("%d",radius);

            perimeter = 2 * (22/7) * radius;
            area=(22/7) * radius * radius;

            printf("The perimeter is %d while the area is %d",perimeter,area);

            break;
        case 2:

            printf("Enter the length and width of the rectangle -> ");
            scanf("%d %d", &length,&width);

            perimeter = 2 * (length + width);
            area = length * width;

            printf("The perimeter is %d while the area is %d",perimeter,area);

            break;
        case 3:

            printf("Enter the base and height of your right angled triangle -> ");
            scanf("%d %d %d",&base,&height,&hypotenus);

            perimeter = base + height + hypotenus;
            area = 0.5 * (base * height);

            printf("The perimeter is %d while the area is %d",perimeter,area);

            break;
        default:
            printf("Invalid choice from the list!");
    }
}
