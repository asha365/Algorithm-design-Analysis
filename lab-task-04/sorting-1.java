76 (2nd Shift) (Algorithm Design & Analysis and Lab)
Lab Task 3(Insertion Sort)
Tahzib Tazim
•
Jan 23 (Edited Jan 23)
5 points
Due Jan 30
Suppose you are given a list of data items.Now write a program using C/C++/Java which can sort the list in both ascending and descending order based on the choice of users using insertion sort algorithm.
Sample Input :

1)
Enter how many numbers you want to insert : 6
Enter the numbers : 10 1 6 8 12 20
............. Menu...........
Press 1 for ascending order sorting
Press 2 for descending order sorting
Enter your choice : 1

2)
Enter how many numbers you want to insert : 5
Enter the numbers : 7 12 3 15 6
............ Menu...........
Press 1 for ascending order sorting
Press 2 for descending order sorting
Enter your choice : 2

Sample Output :

1)You have chosen ascending order sorting
Sorted list : 1 6 8 10 12 20

2)You have chosen descending order sorting
Sorted list : 15 12 7 6 3

N.B: Upload the .cpp/.java/.py file and the jpeg file of input+ outputs screen sh
Your work
Turned in late

insertion1.java
Java

insertion2.java
Java

Insertion Sort-Screenshot-2.pdf
PDF

Insertion Sort-Screenshot-1.pdf
PDF
Private comments

package assenment;
//  insertion sort -1

import static java.lang.System.exit;
import java.util.Scanner;

public class insertion5 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        // declaration part
        int list[] = {10, 1, 6, 8, 12, 20};

        int i, j, temp, choice;
        int arr = list.length;

        System.out.println("Enter how many numbers you want to insert : 6 ");
        System.out.println("Enter the numbers : 10  1  6  8  12  20  ");


        // Menu
        System.out.println("..............Menu...............");
        System.out.println("Press 1 for ascending order sorting ");
        System.out.println("Press 2 for descending order sorting ");

        System.out.print("Enter  your choice : ");
        choice = input.nextInt();

        // insertion sort for ascending order sorting
        if (choice == 1) {

            for (i = 1; i < arr; i++) {
                temp = list[i];
                j = i - 1;

                while (j >= 0 && list[j] > temp) {
                    list[j + 1] = list[j];
                    j--;

                }
                list[j + 1] = temp;

            }
            System.out.println("1) You have chosen ascending order sorting");
        } // insertion sort for descending order sorting
        else if (choice == 2) {

            for (i = 1; i < arr; i++) {
                temp = list[i];
                j = i - 1;

                while (j >= 0 && list[j] < temp) {
                    list[j + 1] = list[j];
                    j--;

                }
                list[j + 1] = temp;

            }
            System.out.println("2) You have chosen descending order sorting");
        }

        // output section
        System.out.print("Sorted list : ");

        for (i = 0; i < arr; i++) {

            //System.out.print("  " + list[i]);
            System.out.print(list[i] + "  ");

        }
        System.out.println("\n\n ");
    }

}
...
Displaying insertion1.java.
