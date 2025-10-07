
int solution(String text) {
    // Handle empty string case
    if (text == null || text.isEmpty()) {
        return 0;
    }
    
    int count = 0;
    int i = 0;
    int n = text.length();
    
    while (i < n) {
        // Skip leading spaces
        while (i < n && text.charAt(i) == ' ') {
            i++;
        }
        
        // If we've reached the end, break
        if (i >= n) {
            break;
        }
        
        // Mark the start of the word
        int wordStart = i;
        
        // Find the end of the word
        while (i < n && text.charAt(i) != ' ') {
            i++;
        }
        
        // Word ends at position i-1
        int wordEnd = i - 1;
        
        // Compare first and last characters (case-insensitive)
        char firstChar = Character.toLowerCase(text.charAt(wordStart));
        char lastChar = Character.toLowerCase(text.charAt(wordEnd));
        
        if (firstChar == lastChar) {
            count++;
        }
    }
    
    return count;
}