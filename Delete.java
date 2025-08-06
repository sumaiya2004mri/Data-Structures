import java.util.Scanner;

public class Delete {
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

        System.out.println("Enter the index you want to delete the element from: ");          
        int pos  =sc.nextInt();      
 

        int [] update = new int [a.length];

        for(int i= 0 ;i < update.length-1 ; i ++ )
        {
            if (i <pos)
            {
                update[i]= a[i];
            }
            else if (i>= pos)
            {
                update[i] = a[i+1];
            }
        }

        System.out.println("DELETE");

        for( int i =0 ; i < update.length ;i ++)
        {
            System.out.println(update[i]);
        }
    }
}
