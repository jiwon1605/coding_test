import java.util.Arrays;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String Cscore = sc.nextLine();
        String [] splitStr = Cscore.split("");
        double result = 0.0;
        if("F".equals(Cscore)){
            result = 0.0;
            System.out.println(result);
            System.exit(0);
        }
       
        if("A".equals(splitStr[0])){
            result += 4.0;
            if("+".equals(splitStr[1])){
                result += 0.3;
            }

            else if("0".equals(splitStr[1])){
                result += 0.0;
            }
    
            else result -= 0.3;
        }

        else if("B".equals(splitStr[0])){
            result += 3.0;
            if("+".equals(splitStr[1])){
                result += 0.3;
            }

            else if("0".equals(splitStr[1])){
                result += 0.0;
            }
    
            else result -= 0.3;
        }

        else if("C".equals(splitStr[0])){
            result += 2.0;
            if("+".equals(splitStr[1])){
                result += 0.3;
            }

            else if("0".equals(splitStr[1])){
                result += 0.0;
            }
    
            else result -= 0.3;
        }

        else if("D".equals(splitStr[0])){
            result += 1.0;
            if("+".equals(splitStr[1])){
                result += 0.3;
            }

            else if("0".equals(splitStr[1])){
                result += 0.0;
            }
    
            else result -= 0.3;
        }
        



        System.out.println(result);
    }
}