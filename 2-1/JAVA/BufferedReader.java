import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.File;

class MyBufferedReader{
    public static void main(String[] args) throws Exception {
        
        BufferedWriter bw = new BufferedWriter(new FileWriter("abc.txt"));
        bw.write(65);
        bw.flush();
        bw.close();

        BufferedReader br = new BufferedReader(new FileReader("abc.txt"));
        String line = br.readLine();

    while(line != null)
    {
        System.out.println(line);
        line = br.readLine();
    }
   
    }
}