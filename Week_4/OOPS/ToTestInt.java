interface test{
    void square(int a);
}
class Arithmetic implements test{
    public void square(int a){
        System.out.println(a * a);
    }
}
public class ToTestInt{
    public static void main(String args[]){

        test obj = new Arithmetic();
        obj.square(5);
    }
}
