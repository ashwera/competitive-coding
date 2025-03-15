import java.util.*;

public class test
{
    public static void main(String[] args) 
    {
        int a = 10;
        Map<Integer, Integer> map = new HashMap<>();
for (int i = 0; i < 4; i++) {
    map.put(a,i);
    a++;
}
map.put(12,5);
System.out.println(map);
        int index = map.getOrDefault(12, -1);
        System.out.println(index);
                // " is "+index );    
    }
}