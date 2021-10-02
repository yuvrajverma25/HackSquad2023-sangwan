public class LambdaExpressionInJava {

    public static void main(String[] args) {
        printHelloWorldWithoutLambda();
        HelloWorldFunctionInterface helloWorldFI = () -> System.out.println("Printing Hello world with Lambda expression !!");
        helloWorldFI.printHelloWorld();
    }

    private static void printHelloWorldWithoutLambda(){
        System.out.println("Printing Hello world without Lambda!!");
    }

}
