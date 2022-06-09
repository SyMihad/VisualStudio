import java.lang.*;

public class SolveProblem{
    public int differenceMaxMin(int [] array){
        int max=array[0],min=array[0];
        for(int i=0;i<array.length;i++){
            if(array[i]<min){
                min=array[i];
            }
            if(array[i]>max){
                max=array[i];
            }
        }
        return (max-min)/2;
        //System.out.println("Min= "+min + " Max="+max);
    }
    public static void main(String [] args){
        SolveProblem a = new SolveProblem();
        int aArray[] = new int [] {10,4,1,4,-10,-50,32,21};
        int aReturn=a.differenceMaxMin(aArray);
        System.out.println("A="+aReturn);

        SolveProblem b = new SolveProblem();
        int bArray[] = new int [] {10,4,1,4,-10,-40,32,21};
        int bReturn=b.differenceMaxMin(bArray);
        System.out.println("B="+bReturn);

        SolveProblem c = new SolveProblem();
        int cArray[] = new int [] {10,4,1,4,-10,-50,42,21};
        int cReturn=c.differenceMaxMin(cArray);
        System.out.println("C="+cReturn);
    }
}