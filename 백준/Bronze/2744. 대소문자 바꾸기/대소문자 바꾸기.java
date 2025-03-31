import java.util.Arrays;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        char [] list = str.toCharArray();
        
        for(char result:list){
            if(Character.isUpperCase(result)){
                result = Character.toLowerCase(result);
            }

            else{
                result = Character.toUpperCase(result);
            }

            System.out.print(result);
        }
    }
}