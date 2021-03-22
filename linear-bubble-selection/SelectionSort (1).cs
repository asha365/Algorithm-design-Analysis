using System;
using System.Linq;
using static System.Console;

namespace Lab_Task_02
{
    public class SelectionSort
    {
        private static int[] Ascending(int length, int[] numbers)
        {
            int i, j, smallestIndex,temp;
            for (i = 0; i < length - 1; i++)
            {
                smallestIndex = i;
                for (j = i+1; j < length; j++)
                {
                    if (numbers[smallestIndex] > numbers[j])
                    {
                        smallestIndex = j;
                    }
                }
                temp = numbers[smallestIndex];
                numbers[smallestIndex] = numbers[i];
                numbers[i] = temp;
            }
            return numbers;
        }
        private static int[] Descending(int length, int[] numbers)
        {
            int i, j, largestIndex, temp;
            for (i = 0; i < length - 1; i++)
            {
                largestIndex = i;
                for (j = i+1; j < length; j++)
                {
                    if (numbers[largestIndex] < numbers[j])
                    {
                        largestIndex = j;
                    }
                }
                temp = numbers[largestIndex];
                numbers[largestIndex] = numbers[i];
                numbers[i] = temp;
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