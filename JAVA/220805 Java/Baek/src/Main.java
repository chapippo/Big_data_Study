
import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        
        int num = s.nextInt();
        //int arr[] = new int[num];        
        int max = -1000000;
        int min = 1000000;
        
        for(int i = 0; i<num ;i++) 
        {
            int x = s.nextInt();
            if(x > max)
            {
                max=x;
            }
            if(x < min)
            {
                min=x;
            }
        }
        System.out.println(min+" "+max);       
    }
}