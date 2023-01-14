public class Infantry extends Army{
    protected String weapon;
    protected Infantry(String rname, double rheight, double rweight, int rbadge, String rweapon)
    {
        super(rname, rheight, rweight, rbadge);
        this.weapon = rweapon;
    }
    protected void introduce(){
        System.out.println("Name : " + this.name);
        System.out.println("Height : " + this.height);
        System.out.println("Weight : " + this.weight);
        System.out.println("Badge : " + this.badge);
        System.out.println("Weapon : " + this.weapon);
    }
}
