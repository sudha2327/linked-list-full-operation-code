import java.util.*;
import java.io.*;

public class linke{
	public static void main(String args[]){
		
		LinkedList<String> m=new LinkedList<String>();
		
		m.add("sudhagar");
		m.add("sudha");
		m.add("sudhkutty");
		m.add("sudhabby");
		// m.add("siddhu");
		// m.addLast("varsha");
		// m.addFirst("kishore");
		System.out.println(m);
		System.out.println(m.size());
		int s=m.size();
        int mid=s/2;
		for(int i=mid;i<s;i++){
		
		System.out.println(m.get(i));
		}
		}
	
	
	
	
}