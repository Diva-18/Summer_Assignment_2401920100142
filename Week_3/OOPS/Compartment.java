abstract class Compartment {
    public abstract String notice();
}
FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class Compartment";
    }
}
Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Compartment";
    }
}
General extends Compartment {   
    @Override
    public String notice() {
        return "General Compartment";
    }
}   
Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Compartment";
    }
}
