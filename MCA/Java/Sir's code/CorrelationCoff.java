package in.ac.jh;

import java.io.File;
import java.io.IOException;

import jxl.Cell;
import jxl.Sheet;
import jxl.Workbook;
import jxl.read.biff.BiffException;

public class CorrelationCoff {

	private String inputFile;
    static String[][] data = null;
    public  void setInputFile(String inputFile) 
    {
        this.inputFile = inputFile;
    }

    public String[][] read() throws IOException  
    {
        File inputWorkbook = new File(inputFile);
        Workbook w;

        try 
        {
            w = Workbook.getWorkbook(inputWorkbook);
            // Get the first sheet


            Sheet sheet = w.getSheet(0);
            data = new String[sheet.getColumns()][sheet.getRows()];
            // Loop over first 10 column and lines
       //     System.out.println(sheet.getColumns() +  " " +sheet.getRows());
            for (int j = 0; j <sheet.getColumns(); j++) 
            {
                for (int i = 0; i < sheet.getRows(); i++) 
                {
                    Cell cell = sheet.getCell(j, i);
                    data[j][i] = cell.getContents();
                  //  System.out.println(cell.getContents());
                }
            }

         /*   for (int j = 0; j < data.length; j++) 
            {
                for (int i = 0; i <data[j].length; i++) 
                {

                    System.out.println(data[j][i]);
                }
            } */

        } 
        catch (BiffException e) 
        {
            e.printStackTrace();
        }
    return data;
    }
	// function that returns correlation coefficient.
	static double correlationCoefficient(int X[], int Y[], int n)
	{
	 
	    double sum_X = 0, sum_Y = 0, sum_XY = 0;
	    double squareSum_X = 0, squareSum_Y = 0;
	 
	    for (int i = 0; i < n; i++)
	    {
	        // sum of elements of array X.
	        sum_X = sum_X + X[i];
	 
	        // sum of elements of array Y.
	        sum_Y = sum_Y + Y[i];
	 
	        // sum of X[i] * Y[i].
	        sum_XY = sum_XY + X[i] * Y[i];
	 
	        // sum of square of array elements.
	        squareSum_X = squareSum_X + X[i] * X[i];
	        squareSum_Y = squareSum_Y + Y[i] * Y[i];
	    }
	 
	    // use formula for calculating correlation coefficient.
	    double corr = (n * sum_XY - sum_X * sum_Y)
	                  / Math.sqrt((n * squareSum_X - sum_X * sum_X)
	                      * (n * squareSum_Y - sum_Y * sum_Y));
	 
	    return corr;
	}
	 
	// Driver function
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		CorrelationCoff corrCoff = new CorrelationCoff();
		corrCoff.setInputFile("C:\\papers in progress\\Statistical loss IBM IEE\\input.xls");
		try {
			 corrCoff.read();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		int X[] = new int[data[0].length];
		//Converting string array to int array 
		for (int j = 0; j < X.length; j++) {
				X[j] = Integer.parseInt(data[0][j]);
		}
		int Y[] = new int[data[1].length];
		//Converting string array to int array 
		for (int j = 0; j < Y.length; j++) {
				Y[j] = Integer.parseInt(data[1][j]);
		}
	    
	 
	    //Find the size of array.
	    int n = X.length;
	 
	    //Function call to correlationCoefficient.
	    System.out.println(correlationCoefficient(X, Y, n));
	}

}
