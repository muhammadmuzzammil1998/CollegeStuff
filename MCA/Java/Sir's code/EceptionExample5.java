import java.util.ArrayList;
import java.util.List;


public class EceptionExample5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		
List<String> objectsList=new ArrayList<String>();
try{
for(long i=0;i<500000000000L;i++){
	String str=new String("object"+i);
	objectsList.add(str);
	System.out.println(str +" craeted and added to the list");
}
}catch(OutOfMemoryError err){
	
}
	}

}
