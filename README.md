# check-Invalid-Word-Format-in-java
import java.util.*;

class InvalidWordFormat extends Exception{
    String msg;
    InvalidWordFormat(String m){
        msg=m;
    }
    
    public String toString(){
        return msg;
    }
}
class Word {

    
    String w;
    Scanner s = new Scanner(System.in);
    
    void input(){
        System.out.println("Enter a word:");
        w=s.next();}
    void check() throws InvalidWordFormat
    {
     char f;
	 String l;
	 f=w.toUpperCase().charAt(0);
	 l=w.substring(1,w.length());
     if(w.toUpperCase().equals(w)) 
        System.out.println("True");
     else if(w.toLowerCase().equals(w))
        System.out.println("True");
     else  if((w.charAt(0)==f) && (w.substring(1,w.length())).equals(l.toLowerCase()))  
        System.out.println("True");
     else
        throw new InvalidWordFormat("Invalid Word Format");
         
    }
}
public class Main
{
	public static void main(String[] args) {
		 Word ob= new Word();
        try{
            ob.input();
            ob.check();
        }
    catch(InvalidWordFormat e){
    System.out.print(e);
	}
}
}
