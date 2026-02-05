public class OptimalApproach {

    private static double implementing_pow_OP(double x, int n) {
        double ans = 1.0;
        long n1 = n; // taking copy of n...

        // when the n is negative...
        if(n1<0) n1 = -1* n1;

        while(n1>0){
            if(n1 % 2 == 0){
                x = x*x;
                n1 = n1/2;
            }
            else{
                ans *= x;
                n1 = n1 - 1;
            }
        }
        // when the n was negative...
        if(n<0) return (double) 1 / (double)ans;
        return ans;
    }

    public static void main(String[] args) {
      double x = 2.00000;
      int n = 10;
      System.out.println(implementing_pow_OP(x,n));

    }
}
