class Outer{
    void Display(){
        System.out.println("Outer class method");
    }
    class Inner{
        void Display(){
            System.out.println("Inner class method");
        }
    }
}
public class OuterInner{
    public static void main(String args[]){
        Outer obj1 = new Outer();
        obj1.Display();
        Outer.Inner obj2 = obj1.new Inner();
        obj2.Display();
    }
}
