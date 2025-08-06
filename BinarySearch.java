import java.util.Scanner;

public class BinarySearch {
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int [] a= new int[sc.nextInt()];

        for(int i=0 ; i < a.length ; i++)
        {
            a[i] = sc.nextInt();
        }

        for(int i= 0 ;i <a.length ; i++)
        {
            for(int j =0 ; j < a.length-1-i; j++)
            {
                if (a[j]>a[j+1])
                {
                    int temp=  a[ j];
                    a[j]=a[j+1];
                    a[j+1]= temp ;
                }
            }
        }

        System.out.println("Sorted array");

        for(int i= 0 ;i <a.length ; i++)
        {
            System.out.println(a[i]+ " ");
        }

        int target = sc.nextInt();

        int left= 0, right = a.length-1;

        boolean found = false;

        while(left <= right)
        {
            int mid = left + (right -left ) /2;

            if (a[mid] == target)
            {
                System.out.println("Target found at" + mid);
                found= true;
                break;
            }

            else if( a[mid]< target )
            {
                left = mid +1;
            }

            else
            {
                right = mid -1;
            }

        }

        if (!found)
        {
            System.out.println("Target not found");
        }

    }
}
