public class CountCharacters {
    public static String countChars(String test) {
        StringBuilder builder = new StringBuilder();
        int count = 0;
        for(int i=1; i<test.length(); i++) {
            if(test.charAt(i-1) == test.charAt(i)) {
                count++;
            } else {
                builder.append(test.charAt(i-1));
                builder.append(count + 1);
                count = 0;
            }
        }

        builder.append(test.charAt(test.length()-1));
        builder.append(count + 1);

        return builder.toString();

    }
    public static void main(String[] args) {
        

        String test = "aaavvvdddddf";
        String result = countChars(test);
        
        System.out.println(result);
    }
}
