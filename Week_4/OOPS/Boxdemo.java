class Box{
    int length;
    int breadth;
    Box(int l, int b){
        length = l;
        breadth = b;
}
    int area(){
        return length * breadth;
    }
}
class Box3D extends Box{
    int height;

    Box3D(int l,int w,int h){
        super(l,w);
        height = h;
    }
    int volume(){
        return length * breadth * height;
    }
}
public class BoxDemo{
    public static void main(String args[]){
        Box3D b3d = new Box3D(5, 10, 15);
        System.out.println("Volume of Box3D: " + b3d.volume());
        System.out.println("Area of Box3D: " + b3d.area());
    }
}
