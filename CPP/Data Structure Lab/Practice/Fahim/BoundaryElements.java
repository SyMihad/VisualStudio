import java.lang.*;
import java.util.Scanner;

public class BoundaryElements{
	public static void main(String [] args){
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the number of row and collumn: ");
        int sum=0;
        int count=0;
        int n = input.nextInt();
        int [][] array = new int[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                array[i][j] = input.nextInt();
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if (i == 0){
                    sum=sum+array[i][j];
                    count++;
                }
                else if (j == n - 1){
                    sum=sum+array[i][j];
                    count++;
                }
            } 
        }
        System.out.println("Average of all boundary elements is= "+ sum/count);
	}
}