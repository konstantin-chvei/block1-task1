import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        final int UPPER_LIMIT_INPUT = 45;
        int valueN;
        int first;
        int result;
        int temp;
        int value;
        boolean isCorrect;
        Scanner sc = new Scanner(System.in);
        first = 1;
        valueN = 0;
        temp = 0;
        result = 0;
        isCorrect = false;
        System.out.println("Найти  n-ый  член  ряда  Фибоначчи,  элементы  которого вычисляются по формулам: \n  a1=a2=1;   ai=ai-1 + ai-2,  (i>2).");
        while (!isCorrect) {
            System.out.println("Введите номер члена ряда Фибоначчи, не превышающее 45 ");
            if (sc.hasNextInt()) {
                value = sc.nextInt();
                if (value < 0) {
                    isCorrect = false;
                    System.out.println("номер элемента не может быть отрецательным, повторите ввод");
                            sc.nextLine();
                }
                else if (value > UPPER_LIMIT_INPUT) {
                    isCorrect = false;
                    System.out.println("номер элемента не может превышать 45, повторите ввод");
                            sc.nextLine();
                }
                else {
                    valueN = value;
                    isCorrect = true;
                }
            }
            else {
                isCorrect = false;
                System.out.println("номер элемента не может превышать 45 или не являться числом, повторите ввод ");
                        sc.next();
            }
        }
        sc.close();
        for (int i = 0; i < valueN; i++)
        {
            temp = result + first;
            first = result;
            result = temp;
        }
        System.out.println(result);
    }
}