public class LongestWord {
    public static String longestWord(String test) {

        StringBuilder builder = new StringBuilder();

        String lw = "";
        
        for(int i=0; i<test.length(); i++) {
            char c = test.charAt(i);
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                builder.append(test.charAt(i));
            } else {
                if(lw.length() < builder.length()) {
                    lw = builder.reverse().toString();
                }
                builder.setLength(0);
            }
        }

        if(lw.length() < builder.length()) {
            lw = builder.reverse().toString();
        }

        return lw;
    }
    public static void main(String[] args) {
        String test = "fun&!! time";
        String result = longestWord(test);
        System.out.println("Longest Word Reversed: " + result);

    }
}
