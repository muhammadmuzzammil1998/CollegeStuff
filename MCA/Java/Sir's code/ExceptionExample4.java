import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;


public class ExceptionExample4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        String fileName = "c:\\tempnew.txt";
		String line = null;
		FileReader fileReader = null;
				try {
			fileReader = new FileReader(fileName);
		} catch (FileNotFoundException e1) {
			// TODO Auto-generated catch block
			// e1.printStackTrace();
			fileName = "c:\\temp.txt";
			try {
				fileReader = new FileReader(fileName);
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

		}
				
			
            // Always wrap FileReader in BufferedReader.
            BufferedReader bufferedReader = 
            		
                new BufferedReader(fileReader);

            try {
				while((line = bufferedReader.readLine()) != null) {
				    System.out.println(line);
				}
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}    

            // Always close files.
                 
       


	}

}
