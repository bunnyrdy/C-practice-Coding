public class primenum {
    static boolean isPrime(int num) {
        if(num <= 1){
            return false;
        }
        if(num <= 3){
            return true;
        }
        if(num % 2 == 0){
            return false;
        }
        for(int i = 3; i<= num/2; i += 2){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int number = 811; 
        boolean result = isPrime(number);
        if(result){
            System.out.println("The number " + number + " is a prime number");
        } else {
            System.out.println("The number " + number + " is not a prime number");
        }
    }
}
