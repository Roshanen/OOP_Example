public class Medical extends Army{
    protected String unit;
    protected Medical(String rname, double rheight, double rweight, int rbadge, String runit)
    {
        super(rname, rheight, rweight, rbadge);
        this.unit = runit;
    }
    protected void introduce(){
        System.out.println("Name : " + this.name);
        System.out.println("Height : " + this.height);
        System.out.println("Weight : " + this.weight);
        System.out.println("Badge : " + this.badge);
        System.out.println("Unit : " + this.unit);
    }
}
