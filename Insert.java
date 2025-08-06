import java.util.Scanner;

public class Insert {
    public static void main(String []  args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter array size");          
        int n= sc.nextInt(); 

        int[ ] a =new int [n];
        

        System.out.println("Enter "+n+ " elements of the array : ");                  
        for( int i =0 ; i < n ;i ++)
        {
            a[i]= sc.nextInt();                    
        }

        System.out.println("Enter the index you want to insert new element : ");          
        int pos  =sc.nextInt();      

        System.out.println("Enter the element you want to insert : ");    
        int value = sc.nextInt();      
        int[] update = new int [a.length+1];

        for( int i =0 ; i < update.length ;i ++)
        {
            if (i < pos)
            {
                update[i] = a[i];
            }
            else if (i == pos)
            {
                update[i]= value;
            }
            else
            {
                update[i]= a[i-1];
            }
        }

        System.out.println(" --- UPDATED ARRAY AFTER INSERT ---");

        for( int i =0 ; i < update.length ;i ++)
        {
            System.out.println(update[i]);
        }
    }
}