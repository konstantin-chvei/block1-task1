import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int firstSide;
        int secondSide;
        int thirdSide;

        int firstSideSqr;
        int secondSideSqr;
        int thirdSideSqr;

        boolean isCorrect;

        firstSide  = 0;
        secondSide = 0;
        thirdSide  = 0;

        firstSideSqr  = 0;
        secondSideSqr = 0;
        thirdSideSqr  = 0;

        isCorrect = false;
        System.out.println("Дано:\tДаны длины сторон треугольника \nЗадача:\tОпределить, является ли данный треугольник прямоугольным.\n\n");

        System.out.println("Введите значение первой стороны не певышающее 1000000000: ");
        while (!isCorrect) {
            if (scanner.hasNextInt()) {
                int value = scanner.nextInt();
                if (value < 0 ) {
                    isCorrect = false;
                    System.out.println("сторона не может быть отрицательной, повторите ввод");
                    scanner.next();
                } else if (value > 1000000001) {
                    isCorrect = false;
                    System.out.println("сторона не может превышать 1000000000, повторите ввод");
                    scanner.next();
                }else {
                    firstSide = value;
                    isCorrect = true;
                }
            }else {
                isCorrect = false;
                System.out.println("сторона не может превышать 1000000000 или не являться целым числом, повторите ввод");
                scanner.next();
            }
        }

        isCorrect = false;
        System.out.println("Введите значение второй стороны не певышающее 1000000000:");
        while (!isCorrect) {
            if (scanner.hasNextInt()) {
                int value = scanner.nextInt();
                if (value < 0 ) {
                    isCorrect = false;
                    System.out.println("сторона не может быть отрицательной, повторите ввод");
                    scanner.next();
                } else if (value > 1000000001) {
                    isCorrect = false;
                    System.out.println("сторона не может превышать 1000000000, повторите ввод");
                    scanner.next();
                }else {
                    secondSide = value;
                    isCorrect = true;
                }
            }else {
                isCorrect = false;
                System.out.println("сторона не может превышать 1000000000 или не являться целым числом, повторите ввод");
                scanner.next();
            }
        }

        isCorrect = false;
        System.out.println("Введите значение третьей стороны не певышающее 1000000000:");
        while (!isCorrect) {
            if (scanner.hasNextInt()) {
                int value = scanner.nextInt();
                if (value < 0 ) {
                    isCorrect = false;
                    System.out.println("сторона не может быть отрицательной, повторите ввод");
                    scanner.next();
                } else if (value > 1000000001) {
                    isCorrect = false;
                    System.out.println("сторона не может превышать 1000000000, повторите ввод");
                    scanner.next();
                }else {
                    thirdSide = value;
                    isCorrect = true;
                }
            }else {
                isCorrect = false;
                System.out.println("сторона не может превышать 1000000000 или не являться целым числом, повторите ввод");
                scanner.next();
            }
        }
        scanner.close();

        firstSideSqr  = firstSide * firstSide;
        secondSideSqr = secondSide * secondSide;
        thirdSideSqr  = thirdSide * thirdSide;

        if ((firstSideSqr == secondSideSqr + thirdSideSqr) | (secondSideSqr == thirdSideSqr + firstSideSqr) | (thirdSideSqr == firstSideSqr + secondSideSqr))
        {
            System.out.println("треугольник прямоугольный");
        }else {
            System.out.println("треугольник не прямоугольный");
        }
    }
}
