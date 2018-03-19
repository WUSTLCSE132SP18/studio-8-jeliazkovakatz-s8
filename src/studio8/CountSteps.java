package studio8;

import java.io.FileNotFoundException;
import java.io.File;
import java.util.Scanner;

// TODO: Develop an algorithm to count steps in accelerometer data
//    Major steps:
//       1. Create a class and main method.
//       2. Using a Scanner and File object, read data from your .csv file.
//       3. Develop and test algorithms to count the "peaks" in the data.

public class CountSteps{
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new File("data/data.csv"));
		in.useDelimiter(",");
		while(in.hasNext()) {
			System.out.print(in.next() + ",");
		}
		in.close();
	}
}
