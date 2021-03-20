import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class solution {
    public static void main(String[] args) {
        List<String> tweets = new ArrayList<String>();
        tweets.add("Hello #awesome");
        tweets.add("Hello #awesome #blue #jay");
        tweets.add("Hello #awesome");
        tweets.add("Hello #awesome #hahaha");
        tweets.add("Hello #awesome #yeah");

        Map<String, Integer> hashtagCounts = countHashtags(tweets);

        for (Map.Entry<String, Integer> hashtagCount : hashtagCounts.entrySet()) {
            System.out.println("key='" + hashtagCount.getKey() + "'   value='" + hashtagCount.getValue() + "'");
        }
    }
    public static Map<String, Integer> countHashtags(List<String> tweets) {
        Map<String, Integer> hashtagCounts = new HashMap<>();

        List<String> hashtags = extractHashtags(tweets);

        for (String hashtag : hashtags) {
            if (hashtagCounts.containsKey(hashtag)) {
                hashtagCounts.put(hashtag, hashtagCounts.get(hashtag) + 1);
            } else {
                hashtagCounts.put(hashtag, 1);
            }
        }

        return hashtagCounts;
    }

    public static List<String> extractHashtags(List<String> tweets) {
        List<String> hashTags = new ArrayList<String>();

        for (String tweet : tweets) {
            String[] words = tweet.split(" ");
            for (String word : words) {
                if (word.startsWith("#")) {
                    hashTags.add(word.substring(1));
                }
            }
        }

        return hashTags;
    }
}
