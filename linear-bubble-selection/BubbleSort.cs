using System;
using System.Linq;
using static System.Console;

namespace Lab_Task_02
{
    public class BubbleSort
    {

        private static int[] Ascending(int length, int[] numbers)
        {
            bool isSorted = false;
            int i, j, temp;
            for (i = 0; i < length - 1; i++)
            {
                isSorted = true;
                for (j = 0; j < length-i-1; j++)
                {
                    if (numbers[j] > numbers[j+1])
                    {
                        temp = numbers[j];
                        numbers[j] = numbers[j+1];
                        numbers[j+1] =  temp;
                        isSorted = false;
                    }
                }
                if (isSorted)
                {
                    break;
                }
            }
            return numbers;
        }
        private static int[] Descending(int length, int[] numbers)
        {
            bool isSorted = false;
            int i, j, temp;
            for (i = 0; i < length - 1; i++)
            {
                isSorted = true;
                for (j = 0; j < length-i-1; j++)
                {
                    if (numbers[j] < numbers[j+1])
                    {
                        temp = numbers[j];
                        numbers[j] = numbers[j+1];
                        numbers[j+1] = temp;
                        isSorted = false;
                    }
                }
                if (isSorted)
                {
                    break;
                }
            }
            return numbers;
        }

        public static void Sort()
        {
            int length = 0, sortType, i;
            Write("How many number you want to sort? ");
            length = int.Parse(ReadLine());
            Write("Enter the numbers: ");
            int[] numbers = ReadLine().Split(" ").Select(num=>int.Parse(num)).ToArray()[0..length];
            WriteLine("............ Menu .............");
            WriteLine("Press 1 for ascending order sorting.");
            WriteLine("Press 2 for descending order sorting.");
            Write("Enter your choice: ");
            sortType = int.Parse(ReadLine());
            if (sortType == 1)
            {
                WriteLine("You have chosen ascending order sorting.");
                numbers =Ascending (length, numbers);
            }
            else if (sortType == 2)
            {
                WriteLine("You have chosen descending order sorting.");
                numbers = Descending(length, numbers);
            }
            else
            {
                WriteLine("Invalid choice");
            }
            Write("Sorted list: ");
            for (i = 0; i < length; i++)
            {
                Write(" " + numbers[i]);
            }
            WriteLine();
        }
    }
}