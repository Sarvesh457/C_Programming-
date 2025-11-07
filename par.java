import java.util.Scanner;
import java.util.Random;

public class par
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Random = new Random();

        String[] words ={"Java","Keyboard","practice","devloper","Computer","typeing","familiar","programming","random","learning"};

        System.out.println("=== Typing Pragtice Program ===");
        System.out.println("Type the words as they appeear .Type'exit' to quit.\n");

        while (true) 
        {
            String word = words[rand.next.Int(word.length)];
            System.out.println("Tyep this word"+word);
            
            long startTime = System.currentTimeMillis();
            String useInput = sc.nextLine();
            long endTime = System.currentTimeMillis();

            if(userInput.equalsIgnoreCase("exit"))
            {
                System.out.println("Exiting.....Good Pratice!");
                break;
            }
            if(userInput.equals(word))
            {
                long timeTaken = (endTime-startTime)/1000;
                System.out.println("Correct! Time taken: "+timeTaken+"sec\n");
            }
            else
            {
                System.out.println("Wrong! The correct word was: "+word+"\n");
            }
        }
    sc.close();
        }
    }
    

